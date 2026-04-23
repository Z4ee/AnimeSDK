#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/WormCompassDirection.h"
#include "unitysdk/RPG/Client/Prop/WormCompassItemType.h"
#include "unitysdk/RPG/Client/Prop/WormCompassPuzzleStaticItemBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENABLEROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xAF11310)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENDPOINTFINISH_OFFSET UNITYSDK_OFFSET(0xAF125D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETDIRECTIONLOCALEULER_OFFSET UNITYSDK_OFFSET(0xAF16830)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECTLENGTH_OFFSET UNITYSDK_OFFSET(0xAF17040)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xAF12340)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_CURRENTDIRECTIONOBJ_OFFSET UNITYSDK_OFFSET(0xAF14A50)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0xAF16920)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_HIDEBOARD_OFFSET UNITYSDK_OFFSET(0xAF16990)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ISDIRECTIONITEM_OFFSET UNITYSDK_OFFSET(0xAF0A2D0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_PLAYROUTEEFFECT_OFFSET UNITYSDK_OFFSET(0xAF12710)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xAF0C1E0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_SELECT_OFFSET UNITYSDK_OFFSET(0xAF16B90)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_STARTPOINTSETCONNECTED_OFFSET UNITYSDK_OFFSET(0xAF16E60)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0xAF17290)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xAF171A0)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM___IFIXBASEPROXY_HIDEBOARD_OFFSET UNITYSDK_OFFSET(0xAF17330)
#define RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM___IFIXBASEPROXY_REFRESHOBJECTSTATUS_OFFSET UNITYSDK_OFFSET(0xAF17320)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int WormCompassPuzzleItem_TypeDefinitionIndex = 72429;

	class WormCompassPuzzleItem : public ::RPG::Client::Prop::WormCompassPuzzleStaticItemBase
	{
	public:
		static ::System::Int32* StaticGet_Field_7_15()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x4C60);
		}
		static ::System::Int32* StaticGet_Field_7_17()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x4C64);
		}
		static ::System::Int32* StaticGet_Field_7_18()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x4C68);
		}
		static ::System::Int32* StaticGet_Field_7_16()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WormCompassPuzzleItem_TypeDefinitionIndex)->GetStaticField(0x4C6C);
		}
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* DirectionList; // 0x48
		::UnityEngine::GameObject* DownStartPoint; // 0x50
		::UnityEngine::GameObject* UpStartPoint; // 0x58
		::UnityEngine::GameObject* DownEndPoint; // 0x60
		::UnityEngine::GameObject* UpEndPoint; // 0x68
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LineRouteEffect; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* RoundRouteEffect; // 0x78
		::System::Collections::Generic::List_1<::System::Single>* LineRouteEffectLength; // 0x80
		::System::Collections::Generic::List_1<::System::Single>* RoundRouteEffectLength; // 0x88
		::System::Single RouteSpeed; // 0x90
		::UnityEngine::GameObject* ArrowEffect; // 0x98
		::UnityEngine::GameObject* StartPointEffect; // 0xA0
		::UnityEngine::GameObject* EndPointEffect; // 0xA8
		::RPG::Client::Prop::WormCompassItemType ItemType; // 0xB0
		::RPG::Client::Prop::WormCompassDirection Direction; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM__CCTOR_OFFSET))();
		}

		::UnityEngine::GameObject* get_CurrentDirectionObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_CURRENTDIRECTIONOBJ_OFFSET))(this);
		}

		::System::Boolean IsDirectionItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ISDIRECTIONITEM_OFFSET))(this);
		}

		::System::Void RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void EndPointFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENDPOINTFINISH_OFFSET))(this);
		}

		::System::Void HideBoard(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_HIDEBOARD_OFFSET))(this, a1);
		}

		::System::Void Select(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_SELECT_OFFSET))(this, a1);
		}

		::System::Void StartPointSetConnected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_STARTPOINTSETCONNECTED_OFFSET))(this, a1);
		}

		::System::Void EnableRouteEffect(::System::Boolean a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2, ::RPG::Client::Prop::WormCompassPuzzleItem* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_ENABLEROUTEEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GetRouteEffectLength(::RPG::Client::Prop::WormCompassPuzzleItem* a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECTLENGTH_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* GetRouteEffect(::RPG::Client::Prop::WormCompassPuzzleItem* a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETROUTEEFFECT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* PlayRouteEffect(::RPG::Client::Prop::WormCompassPuzzleItem* a1, ::RPG::Client::Prop::WormCompassPuzzleItem* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::Prop::WormCompassPuzzleItem*, ::RPG::Client::Prop::WormCompassPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_PLAYROUTEEFFECT_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Vector3 GetDirectionLocalEuler(::RPG::Client::Prop::WormCompassDirection a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::Prop::WormCompassDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GETDIRECTIONLOCALEULER_OFFSET))(a1);
		}

		::UnityEngine::GameObject* get_StartPoint()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM_GET_STARTPOINT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_RefreshObjectStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM___IFIXBASEPROXY_REFRESHOBJECTSTATUS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_HideBoard(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_WORMCOMPASSPUZZLEITEM___IFIXBASEPROXY_HIDEBOARD_OFFSET))(this, P0);
		}
	};
}
