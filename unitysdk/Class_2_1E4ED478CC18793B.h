#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }

#define CLASS_2_1E4ED478CC18793B_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x195A6C40)
#define CLASS_2_1E4ED478CC18793B_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x195A6BF0)
#define CLASS_2_1E4ED478CC18793B_METHOD_2_01B86EDCA4314B2B_OFFSET UNITYSDK_OFFSET(0x195A6AD0)
#define CLASS_2_1E4ED478CC18793B__CTOR_OFFSET UNITYSDK_OFFSET(0x195A6C90)

inline static constexpr unsigned int Class_2_1E4ED478CC18793B_TypeDefinitionIndex = 54290;

class Class_2_1E4ED478CC18793B : public ::Class_1_BF7A075734D15E98
{
public:
	::RPG::GameCore::GameEntity* GDCCJFKJGPD; // 0x18
	::System::String* KBKOGLCAEKG; // 0x20
	::RPG::GameCore::GameEntity* DOAPLIILBKP; // 0x28
	::RPG::GameCore::RtModifierConfig* ALMAIAIDFHM; // 0x30
	::System::String* IFNAGLOMHBK; // 0x38
	::RPG::GameCore::FixPoint KAHOALBCMNE; // 0x40
	::RPG::GameCore::FixPoint LKFNPPCHCII; // 0x48
	::System::Boolean NGDAIHFFEBC; // 0x50
	::System::Boolean EBFMNCJNMPF; // 0x51
	::System::Boolean EIIMAEHCGBC; // 0x52
	::RPG::GameCore::FixPoint KIPAGNCANAJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E4ED478CC18793B__CTOR_OFFSET))(this);
	}

	::Class_2_1E4ED478CC18793B* Method_2_01B86EDCA4314B2B(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::RtModifierConfig* a3, ::System::String* a4, ::System::String* a5, ::RPG::GameCore::FixPoint a6, ::RPG::GameCore::FixPoint a7, ::System::Boolean a8, ::System::Boolean a9, ::RPG::GameCore::FixPoint a10, ::System::Boolean a11)
	{
		return ((::Class_2_1E4ED478CC18793B*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtModifierConfig*, ::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_1E4ED478CC18793B_METHOD_2_01B86EDCA4314B2B_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E4ED478CC18793B_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E4ED478CC18793B_GETEVENTTYPE_OFFSET))(this);
	}
};
