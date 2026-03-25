#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AutoReleaseReferenceState.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYLIST_GET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xA952C90)
#define RPG_GAMECORE_GAMEENTITYLIST_MARKMANUALRELEASE_OFFSET UNITYSDK_OFFSET(0xA952D60)
#define RPG_GAMECORE_GAMEENTITYLIST_ONALLOC_OFFSET UNITYSDK_OFFSET(0xA952CB0)
#define RPG_GAMECORE_GAMEENTITYLIST_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0xA952D10)
#define RPG_GAMECORE_GAMEENTITYLIST_SET_REFERENCESTATE_OFFSET UNITYSDK_OFFSET(0xA952CA0)
#define RPG_GAMECORE_GAMEENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0xA952DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityList_TypeDefinitionIndex = 47851;

	class GameEntityList : public ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>
	{
	public:
		::RPG::AutoReleaseReferenceState _ReferenceState_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST__CTOR_OFFSET))(this);
		}

		::RPG::AutoReleaseReferenceState get_ReferenceState()
		{
			return ((::RPG::AutoReleaseReferenceState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_GET_REFERENCESTATE_OFFSET))(this);
		}

		::System::Void set_ReferenceState(::RPG::AutoReleaseReferenceState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AutoReleaseReferenceState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYLIST_SET_REFERENCESTATE_OFFSET))(this, value);
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
