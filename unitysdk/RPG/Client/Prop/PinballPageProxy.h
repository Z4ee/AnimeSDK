#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PinballPageProxy_PinballPageFloatBtnType.h"
#include "unitysdk/RPG/Client/Prop/PinballPageProxy_PinballPageHintState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PopupMenuProxy; }
namespace RPG::Client { class PopupMenuProxy_Option; }
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_BINDACTION_OFFSET UNITYSDK_OFFSET(0xDCE8570)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCE7C40)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_GETOPERATECOUNT_OFFSET UNITYSDK_OFFSET(0xDCE8520)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xDCE7A50)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_HIDEOPTIONS_OFFSET UNITYSDK_OFFSET(0xDCE8250)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xDCE7D60)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_PINBALLDEBUG_GETSELECTABLEITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xDCE88B0)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_PINBALLDEBUG_SELECTPLATEBYINDEX_OFFSET UNITYSDK_OFFSET(0xDCE8A20)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_SETPLAYERCURSORPOS_OFFSET UNITYSDK_OFFSET(0xDCE8710)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_SETPOPUPMENU_OFFSET UNITYSDK_OFFSET(0xDCE7BD0)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_SETUPPOPUPMENUOPTIONS_OFFSET UNITYSDK_OFFSET(0xDCE82E0)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xDCE7AB0)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_SHOWOPTIONS_OFFSET UNITYSDK_OFFSET(0xDCE7F80)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY_SHOWPAGE_OFFSET UNITYSDK_OFFSET(0xDCE7DE0)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0xDCE8E90)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0xDCE7B10)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY__ONCLICKLAUNCH_OFFSET UNITYSDK_OFFSET(0xDCE8E20)
#define RPG_CLIENT_PROP_PINBALLPAGEPROXY__ONHIDE_OFFSET UNITYSDK_OFFSET(0xDCE8C60)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPageProxy_TypeDefinitionIndex = 78294;

	class PinballPageProxy : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType, ::System::String*>** StaticGet__BtnAssetPath()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PinballPageProxy_TypeDefinitionIndex)->GetStaticField(0x65660);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType, ::RPG::Client::TextID>** StaticGet__BtnTextIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType, ::RPG::Client::TextID>**)Il2CppClass::FromTypeDefinitionIndex(PinballPageProxy_TypeDefinitionIndex)->GetStaticField(0x65668);
		}
		static ::RPG::Client::Prop::PinballPageProxy** StaticGet__Instance_k__BackingField()
		{
			return (::RPG::Client::Prop::PinballPageProxy**)Il2CppClass::FromTypeDefinitionIndex(PinballPageProxy_TypeDefinitionIndex)->GetStaticField(0x65670);
		}
		static ::System::Int32* StaticGet__UniqueID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PinballPageProxy_TypeDefinitionIndex)->GetStaticField(0x14DE0);
		}
		::System::Collections::Generic::List_1<::RPG::Client::PopupMenuProxy_Option*>* _Options; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType, ::RPG::Client::PopupMenuProxy_Option*>* _BtnToOption; // 0x18
		::System::Action* _ExitCallback; // 0x20
		::System::Action* _OnLoadCallback; // 0x28
		::RPG::Client::Prop::PinballPuzzleBoard* _OwnerBoard; // 0x30
		::UnityEngine::Transform* PlayerCursorAttachTransform; // 0x38
		::System::Action* _LaunchCallback; // 0x40
		::RPG::Client::PopupMenuProxy* _PopupMenu; // 0x48
		::RPG::Client::Prop::PinballPageProxy_PinballPageHintState PageHintState; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY__CCTOR_OFFSET))();
		}

		static ::RPG::Client::Prop::PinballPageProxy* get_Instance()
		{
			return ((::RPG::Client::Prop::PinballPageProxy*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::RPG::Client::Prop::PinballPageProxy* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Prop::PinballPageProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_SET_INSTANCE_OFFSET))(a1);
		}

		::System::Void SetPopupMenu(::RPG::Client::PopupMenuProxy* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PopupMenuProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_SETPOPUPMENU_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::Prop::PinballPuzzleBoard* a1, ::System::Action* a2, ::System::Action* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleBoard*, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ShowPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_SHOWPAGE_OFFSET))(this);
		}

		::System::Void ShowOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_SHOWOPTIONS_OFFSET))(this);
		}

		::System::Void HideOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_HIDEOPTIONS_OFFSET))(this);
		}

		::System::Void SetupPopupMenuOptions(::System::Collections::Generic::List_1<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_SETUPPOPUPMENUOPTIONS_OFFSET))(this, a1);
		}

		::System::Int32 GetOperateCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_GETOPERATECOUNT_OFFSET))(this);
		}

		::System::Void BindAction(::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType a1, ::System::Action_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPageProxy_PinballPageFloatBtnType, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_BINDACTION_OFFSET))(this, a1, a2);
		}

		::System::Void SetPlayerCursorPos(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_SETPLAYERCURSORPOS_OFFSET))(this, a1);
		}

		::System::Int32 PinballDebug_GetSelectableItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_PINBALLDEBUG_GETSELECTABLEITEMCOUNT_OFFSET))(this);
		}

		::System::Void PinballDebug_SelectPlateByIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY_PINBALLDEBUG_SELECTPLATEBYINDEX_OFFSET))(this, a1);
		}

		::System::Void _OnHide(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY__ONHIDE_OFFSET))(this, a1);
		}

		::System::Void _OnClickLaunch(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PINBALLPAGEPROXY__ONCLICKLAUNCH_OFFSET))(this, a1);
		}
	};
}
