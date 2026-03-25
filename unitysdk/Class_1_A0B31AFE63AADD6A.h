#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_A0B31AFE63AADD6A_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x11132270)
#define CLASS_1_A0B31AFE63AADD6A_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11132220)
#define CLASS_1_A0B31AFE63AADD6A__CTOR_OFFSET UNITYSDK_OFFSET(0x111322C0)

inline static constexpr unsigned int Class_1_A0B31AFE63AADD6A_TypeDefinitionIndex = 45571;

class Class_1_A0B31AFE63AADD6A : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Object* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B31AFE63AADD6A__CTOR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B31AFE63AADD6A_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0B31AFE63AADD6A_GETEVENTTYPE_OFFSET))(this);
	}
};
