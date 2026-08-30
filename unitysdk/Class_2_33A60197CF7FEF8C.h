#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_179553DEA16830ED_1.h"
#include "unitysdk/RPG/Client/IsometricViewPuzzleEvent.h"
#include "unitysdk/RPG/GameCore/EventType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_33A60197CF7FEF8C_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB904B90)
#define CLASS_2_33A60197CF7FEF8C_GET_ANCHORKEY_OFFSET UNITYSDK_OFFSET(0xB904C00)
#define CLASS_2_33A60197CF7FEF8C_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB904BE0)
#define CLASS_2_33A60197CF7FEF8C_SET_ANCHORKEY_OFFSET UNITYSDK_OFFSET(0xB904C10)
#define CLASS_2_33A60197CF7FEF8C_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xB904BF0)
#define CLASS_2_33A60197CF7FEF8C__CTOR_OFFSET UNITYSDK_OFFSET(0xB904B80)

inline static constexpr unsigned int Class_2_33A60197CF7FEF8C_TypeDefinitionIndex = 56821;

class Class_2_33A60197CF7FEF8C : public ::Class_1_179553DEA16830ED_1
{
public:
	::System::String* _AnchorKey_k__BackingField; // 0x18
	::RPG::Client::IsometricViewPuzzleEvent _EventId_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::Client::IsometricViewPuzzleEvent a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::IsometricViewPuzzleEvent, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_33A60197CF7FEF8C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33A60197CF7FEF8C_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::Client::IsometricViewPuzzleEvent get_EventId()
	{
		return ((::RPG::Client::IsometricViewPuzzleEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33A60197CF7FEF8C_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventId(::RPG::Client::IsometricViewPuzzleEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IsometricViewPuzzleEvent))((::PBYTE)hIl2Cpp + CLASS_2_33A60197CF7FEF8C_SET_EVENTID_OFFSET))(this, a1);
	}

	::System::String* get_AnchorKey()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_33A60197CF7FEF8C_GET_ANCHORKEY_OFFSET))(this);
	}

	::System::Void set_AnchorKey(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_33A60197CF7FEF8C_SET_ANCHORKEY_OFFSET))(this, a1);
	}
};
