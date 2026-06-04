#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client::Prop { class WormCompassPuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_DELAYSHOW_OFFSET UNITYSDK_OFFSET(0xC65AAE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_GET_CURRCOL_OFFSET UNITYSDK_OFFSET(0xC65BDE0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_GET_CURRENTBOARDOBJ_OFFSET UNITYSDK_OFFSET(0xC64F5E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_GET_CURRROW_OFFSET UNITYSDK_OFFSET(0xC65BD60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_HIDEBOARD_OFFSET UNITYSDK_OFFSET(0xC65B4A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_INITITEM_OFFSET UNITYSDK_OFFSET(0xC6507E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC65C1D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xC65BE60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SETCURRROWCOL_OFFSET UNITYSDK_OFFSET(0xC65C0D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SETROWCOL_OFFSET UNITYSDK_OFFSET(0xC65C050)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SET_CURRCOL_OFFSET UNITYSDK_OFFSET(0xC65BDF0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SET_CURRROW_OFFSET UNITYSDK_OFFSET(0xC65BD70)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC65C2B0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE__DELAYSHOW_B__19_0_OFFSET UNITYSDK_OFFSET(0xC65C2C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleItemBase_TypeDefinitionIndex = 73449;

	class WormCompassPuzzleItemBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* BoardList; // 0x18
		::System::Int32 Row; // 0x20
		::System::Int32 Col; // 0x24
		::RPG::Client::Prop::WormCompassPuzzleBoard* Field_5_3; // 0x28
		::System::Int32 Field_5_4; // 0x30
		::System::Int32 Field_5_5; // 0x34
		::System::Boolean Field_5_6; // 0x38
		::UnityEngine::Coroutine* Field_5_7; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_CurrentBoardObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_GET_CURRENTBOARDOBJ_OFFSET))(this);
		}

		::System::Int32 get_CurrRow()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_GET_CURRROW_OFFSET))(this);
		}

		::System::Void set_CurrRow(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SET_CURRROW_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrCol()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_GET_CURRCOL_OFFSET))(this);
		}

		::System::Void set_CurrCol(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SET_CURRCOL_OFFSET))(this, a1);
		}

		::System::Void InitItem(::RPG::Client::Prop::WormCompassPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_INITITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void HideBoard(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_HIDEBOARD_OFFSET))(this, a1);
		}

		::System::Void SetRowCol(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SETROWCOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetCurrRowCol(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_SETCURRROWCOL_OFFSET))(this, a1, a2);
		}

		::System::Void DelayShow(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_DELAYSHOW_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void _DelayShow_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEMBASE__DELAYSHOW_B__19_0_OFFSET))(this);
		}
	};
}
