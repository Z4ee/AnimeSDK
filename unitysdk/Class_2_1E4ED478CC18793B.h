#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9988289E7F8AA214.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace System { class String; }

#define CLASS_2_1E4ED478CC18793B_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x9B8B2A0)
#define CLASS_2_1E4ED478CC18793B_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x9B8B250)
#define CLASS_2_1E4ED478CC18793B_METHOD_2_01B86EDCA4314B2B_OFFSET UNITYSDK_OFFSET(0x9B8B130)
#define CLASS_2_1E4ED478CC18793B__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8B2F0)

inline static constexpr unsigned int Class_2_1E4ED478CC18793B_TypeDefinitionIndex = 49857;

class Class_2_1E4ED478CC18793B : public ::Class_1_9988289E7F8AA214
{
public:
	::RPG::GameCore::RtModifierConfig* Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::RPG::GameCore::GameEntity* Field_2_1; // 0x28
	::System::String* Field_2_4; // 0x30
	::RPG::GameCore::GameEntity* Field_2_0; // 0x38
	::RPG::GameCore::FixPoint Field_2_6; // 0x40
	::RPG::GameCore::FixPoint Field_2_5; // 0x48
	::System::Boolean Field_2_8; // 0x50
	::System::Boolean Field_2_7; // 0x51
	::System::Boolean Field_2_10; // 0x52
	::RPG::GameCore::FixPoint Field_2_9; // 0x58

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
