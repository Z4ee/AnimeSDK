#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_785D65CF0BA6162C_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x117363A0)
#define CLASS_1_785D65CF0BA6162C_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x11736350)
#define CLASS_1_785D65CF0BA6162C__CTOR_OFFSET UNITYSDK_OFFSET(0x11736340)

inline static constexpr unsigned int Class_1_785D65CF0BA6162C_TypeDefinitionIndex = 45577;

class Class_1_785D65CF0BA6162C : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::GameEntity* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_785D65CF0BA6162C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785D65CF0BA6162C_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785D65CF0BA6162C_GETEVENTTYPE_OFFSET))(this);
	}
};
