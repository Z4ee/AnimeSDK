#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYLIST_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xE657B90)
#define RPG_GAMECORE_GAMEENTITYLIST_MARKMANUALRELEASE_OFFSET UNITYSDK_OFFSET(0xE657C60)
#define RPG_GAMECORE_GAMEENTITYLIST_ONALLOC_OFFSET UNITYSDK_OFFSET(0xE657BB0)
#define RPG_GAMECORE_GAMEENTITYLIST_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xE657C10)
#define RPG_GAMECORE_GAMEENTITYLIST_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xE657BA0)
#define RPG_GAMECORE_GAMEENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xE657CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityList_TypeDefinitionIndex = 59340;

	class GameEntityList : public ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>
	{
	public:
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST__CTOR_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_SET_REFERENCESTATE_OFFSET))(this, a1);
		}

		::System::Void OnAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_ONALLOC_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_ONRECYCLE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* MarkManualRelease()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_MARKMANUALRELEASE_OFFSET))(this);
		}
	};
}
