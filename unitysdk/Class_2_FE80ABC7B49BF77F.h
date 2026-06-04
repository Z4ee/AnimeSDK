#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_179553DEA16830ED_1.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_FE80ABC7B49BF77F_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB516490)
#define CLASS_2_FE80ABC7B49BF77F_GET_PUZZLEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5164E0)
#define CLASS_2_FE80ABC7B49BF77F_SET_PUZZLEEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB5164F0)
#define CLASS_2_FE80ABC7B49BF77F__CTOR_OFFSET UNITYSDK_OFFSET(0xB516480)
#define CLASS_2_FE80ABC7B49BF77F___IFIXBASEPROXY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB516500)

inline static constexpr unsigned int Class_2_FE80ABC7B49BF77F_TypeDefinitionIndex = 52887;

class Class_2_FE80ABC7B49BF77F : public ::Class_1_179553DEA16830ED_1
{
public:
	::RPG::GameCore::PuzzleCustomEvent _PuzzleEventType_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PuzzleCustomEvent a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_FE80ABC7B49BF77F__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE80ABC7B49BF77F_GETEVENTTYPE_OFFSET))(this);
	}

	::RPG::GameCore::PuzzleCustomEvent get_PuzzleEventType()
	{
		return ((::RPG::GameCore::PuzzleCustomEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE80ABC7B49BF77F_GET_PUZZLEEVENTTYPE_OFFSET))(this);
	}

	::System::Void set_PuzzleEventType(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_FE80ABC7B49BF77F_SET_PUZZLEEVENTTYPE_OFFSET))(this, a1);
	}

	::RPG::GameCore::EventType __iFixBaseProxy_GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FE80ABC7B49BF77F___IFIXBASEPROXY_GETEVENTTYPE_OFFSET))(this);
	}
};
