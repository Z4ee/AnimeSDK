#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/MoleMole/GamepadHintKeyConfig.h"
#include "unitysdk/MoleMole/GamepadNavDirConfig.h"
#include "unitysdk/MoleMole/GamepadNavTargetConfig.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Enum_3_AAD7E8988061626F.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Enum_3_E1ECA05187CF4721.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Struct_2_858AFA8F6CDBEA34.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1.h"
#include "unitysdk/MoleMole/MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIBaseController; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADMODULE_AWAKE_OFFSET UNITYSDK_OFFSET(0x117651D0)
#define MOLEMOLE_MONOGAMEPADMODULE_CANNAVIGATETO_OFFSET UNITYSDK_OFFSET(0x11767A70)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARCONTROLLER_OFFSET UNITYSDK_OFFSET(0x11765CD0)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARFOCUSRECORDSTATE_OFFSET UNITYSDK_OFFSET(0x11765ED0)
#define MOLEMOLE_MONOGAMEPADMODULE_CLEARMANAGEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x117687B0)
#define MOLEMOLE_MONOGAMEPADMODULE_DOCOPYRESET_OFFSET UNITYSDK_OFFSET(0x11768800)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x11764F80)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSONENABLE_OFFSET UNITYSDK_OFFSET(0x11764D90)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSRECORDSTATE_OFFSET UNITYSDK_OFFSET(0x11764D10)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x11764D20)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_FORCEIGNOREBENAVIGATED_OFFSET UNITYSDK_OFFSET(0x11764FD0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_HINTKEYS_OFFSET UNITYSDK_OFFSET(0x11764E20)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_INPUTHANDLEORDER_OFFSET UNITYSDK_OFFSET(0x11764DF0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x11764FB0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x11764F60)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0x11764D30)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_ISREGISTERED_OFFSET UNITYSDK_OFFSET(0x11764E30)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x11764DB0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PARENTMODULE_OFFSET UNITYSDK_OFFSET(0x11764F90)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x11764DD0)
#define MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYSORTINDEX_OFFSET UNITYSDK_OFFSET(0x11764E00)
#define MOLEMOLE_MONOGAMEPADMODULE_HANDLEINPUTACTION_OFFSET UNITYSDK_OFFSET(0x11767C60)
#define MOLEMOLE_MONOGAMEPADMODULE_ISFUNCTIONENABLED_OFFSET UNITYSDK_OFFSET(0x11767C10)
#define MOLEMOLE_MONOGAMEPADMODULE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x11765190)
#define MOLEMOLE_MONOGAMEPADMODULE_ISWORKABLE_OFFSET UNITYSDK_OFFSET(0x11764FF0)
#define MOLEMOLE_MONOGAMEPADMODULE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x117659B0)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALAWAKE_OFFSET UNITYSDK_OFFSET(0x11765A60)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALDISABLE_OFFSET UNITYSDK_OFFSET(0x11765C20)
#define MOLEMOLE_MONOGAMEPADMODULE_MANUALENABLE_OFFSET UNITYSDK_OFFSET(0x11765B60)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0672F56933763C8F_OFFSET UNITYSDK_OFFSET(0x1176A940)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_079E6D0FB3AE13F6_OFFSET UNITYSDK_OFFSET(0x11767DB0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0CAE7726A25196D5_OFFSET UNITYSDK_OFFSET(0x11766290)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0D5795AC159AF93B_OFFSET UNITYSDK_OFFSET(0x11766FD0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11768910)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x117658E0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x117668F0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_243C6609F1BB8997_OFFSET UNITYSDK_OFFSET(0x1176A950)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2983CAA9D011AEC9_OFFSET UNITYSDK_OFFSET(0x117674F0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2BEF6A28C6DA16FF_1_OFFSET UNITYSDK_OFFSET(0x117690C0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2BEF6A28C6DA16FF_OFFSET UNITYSDK_OFFSET(0x11768A30)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2EFF1445F2CEE386_OFFSET UNITYSDK_OFFSET(0x11767860)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11765150)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_3D7E9840CF105C69_OFFSET UNITYSDK_OFFSET(0x117669B0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11767790)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_49CE60633546B186_OFFSET UNITYSDK_OFFSET(0x11769EB0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4F708DC8C166FF7F_OFFSET UNITYSDK_OFFSET(0x11768030)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_6796390E2F1B97B3_OFFSET UNITYSDK_OFFSET(0x117689E0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_7CF2AE1768F3E6EB_OFFSET UNITYSDK_OFFSET(0x11767E00)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x11766100)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x11765340)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x117652D0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_AA2B8A63BBDC1282_OFFSET UNITYSDK_OFFSET(0x11766A20)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x11765450)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11766880)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_BACD4B58CEA46E78_1_OFFSET UNITYSDK_OFFSET(0x117695B0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_BACD4B58CEA46E78_2_OFFSET UNITYSDK_OFFSET(0x1176A380)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_BACD4B58CEA46E78_OFFSET UNITYSDK_OFFSET(0x11768EF0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x117667C0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11766800)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x11766840)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11766780)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_D0DF0505F244B465_OFFSET UNITYSDK_OFFSET(0x117654D0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E507C493A7842CF6_OFFSET UNITYSDK_OFFSET(0x1176A5E0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E57D0DA1E17C4DDA_1_OFFSET UNITYSDK_OFFSET(0x1176A190)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E57D0DA1E17C4DDA_2_OFFSET UNITYSDK_OFFSET(0x117693C0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E57D0DA1E17C4DDA_OFFSET UNITYSDK_OFFSET(0x11768D20)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_ECA703745FE28665_OFFSET UNITYSDK_OFFSET(0x11767800)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_F1D40B323FAD3DCE_OFFSET UNITYSDK_OFFSET(0x1176A5D0)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x11766A70)
#define MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_FFD65E4FEAD3C019_OFFSET UNITYSDK_OFFSET(0x11769780)
#define MOLEMOLE_MONOGAMEPADMODULE_MUTEFOCUSRECORD_OFFSET UNITYSDK_OFFSET(0x11766170)
#define MOLEMOLE_MONOGAMEPADMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11765960)
#define MOLEMOLE_MONOGAMEPADMODULE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11765840)
#define MOLEMOLE_MONOGAMEPADMODULE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x117653B0)
#define MOLEMOLE_MONOGAMEPADMODULE_PUBLICGETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x11768980)
#define MOLEMOLE_MONOGAMEPADMODULE_RECORDFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x117661F0)
#define MOLEMOLE_MONOGAMEPADMODULE_RESOLVEMANAGEDOBJECTS_OFFSET UNITYSDK_OFFSET(0x11766D10)
#define MOLEMOLE_MONOGAMEPADMODULE_SETCONTROLLER_OFFSET UNITYSDK_OFFSET(0x11765A10)
#define MOLEMOLE_MONOGAMEPADMODULE_SETFOCUSBYREGION_OFFSET UNITYSDK_OFFSET(0x117665E0)
#define MOLEMOLE_MONOGAMEPADMODULE_SETFOCUS_OFFSET UNITYSDK_OFFSET(0x11765F20)
#define MOLEMOLE_MONOGAMEPADMODULE_SETNAVIGATETARGET_OFFSET UNITYSDK_OFFSET(0x11768600)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_FOCUSONENABLE_OFFSET UNITYSDK_OFFSET(0x11764DA0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_FORCEIGNOREBENAVIGATED_OFFSET UNITYSDK_OFFSET(0x11764FE0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x11764FC0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0x11764F70)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_MODULENAME_OFFSET UNITYSDK_OFFSET(0x11764DC0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PARENTMODULE_OFFSET UNITYSDK_OFFSET(0x11764FA0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYLEVEL_OFFSET UNITYSDK_OFFSET(0x11764DE0)
#define MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYSORTINDEX_OFFSET UNITYSDK_OFFSET(0x11764E10)
#define MOLEMOLE_MONOGAMEPADMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1176A550)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadModule_TypeDefinitionIndex = 71353;

	class MonoGamepadModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_0; // 0x18
		::MoleMole::MonoGamepadModule_Enum_3_AAD7E8988061626F Field_5_1; // 0x1C
		::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721 Field_5_2; // 0x20
		::System::String* _moduleName; // 0x28
		::System::Boolean _focusOnEnable; // 0x30
		::System::UInt32 _priorityLevel; // 0x34
		::System::UInt32 _inputHandleOrder; // 0x38
		::System::Boolean WorkOnAllLayoutPlatform; // 0x3C
		::Il2CppArray<::UnityEngine::GameObject*>* _managedObjects; // 0x40
		::Il2CppArray<::UnityEngine::GameObject*>* _onFocusDisableObjects; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* _hintKeys; // 0x50
		::MoleMole::GamepadNavTargetConfig _upNavTarget; // 0x58
		::MoleMole::GamepadNavTargetConfig _downNavTarget; // 0x68
		::MoleMole::GamepadNavTargetConfig _leftNavTarget; // 0x78
		::MoleMole::GamepadNavTargetConfig _RightNavTarget; // 0x88
		::MoleMole::GamepadNavTargetConfig _lostFocusNavTarget; // 0x98
		::System::Boolean _focusImmediately; // 0xA8
		::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>* _navEvents; // 0xB0
		::System::Int32 Field_5_18; // 0xB8
		::System::Action_1<::System::Boolean>* OnFocus; // 0xC0
		::System::Boolean Field_5_20; // 0xC8
		::MoleMole::UIBaseController* Field_5_21; // 0xD0
		::MoleMole::MonoGamepadModule* Field_5_22; // 0xD8
		::System::Boolean Field_5_23; // 0xE0
		::System::Boolean Field_5_24; // 0xE1
		::System::Boolean Field_5_25; // 0xE2
		::System::Boolean Field_5_26; // 0xE3
		::System::Boolean Field_5_27; // 0xE4
		::System::Boolean Field_5_28; // 0xE5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule_Enum_3_AAD7E8988061626F get_focusRecordState()
		{
			return ((::MoleMole::MonoGamepadModule_Enum_3_AAD7E8988061626F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSRECORDSTATE_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721 get_focusState()
		{
			return ((::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSSTATE_OFFSET))(this);
		}

		::System::Boolean get_isFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Boolean get_FocusOnEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FOCUSONENABLE_OFFSET))(this);
		}

		::System::Void set_FocusOnEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_FOCUSONENABLE_OFFSET))(this, a1);
		}

		::System::String* get_moduleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_MODULENAME_OFFSET))(this);
		}

		::System::Void set_moduleName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_MODULENAME_OFFSET))(this, a1);
		}

		::System::UInt32 get_priorityLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYLEVEL_OFFSET))(this);
		}

		::System::Void set_priorityLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_InputHandleOrder()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_INPUTHANDLEORDER_OFFSET))(this);
		}

		::System::Int32 get_PrioritySortIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PRIORITYSORTINDEX_OFFSET))(this);
		}

		::System::Void set_PrioritySortIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PRIORITYSORTINDEX_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>* get_hintKeys()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GamepadHintKeyConfig>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_HINTKEYS_OFFSET))(this);
		}

		::System::Boolean get_IsRegistered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISREGISTERED_OFFSET))(this);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISCOLLECTED_OFFSET))(this);
		}

		::System::Void set_IsCollected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_ISCOLLECTED_OFFSET))(this, a1);
		}

		::MoleMole::UIBaseController* get_controller()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_CONTROLLER_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* get_parentModule()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_PARENTMODULE_OFFSET))(this);
		}

		::System::Void set_parentModule(::MoleMole::MonoGamepadModule* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_PARENTMODULE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_ISCLEAR_OFFSET))(this, a1);
		}

		::System::Boolean get_ForceIgnoreBeNavigated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_GET_FORCEIGNOREBENAVIGATED_OFFSET))(this);
		}

		::System::Void set_ForceIgnoreBeNavigated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SET_FORCEIGNOREBENAVIGATED_OFFSET))(this, a1);
		}

		::System::Boolean IsWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISWORKABLE_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetController(::MoleMole::UIBaseController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETCONTROLLER_OFFSET))(this, a1);
		}

		::System::Void ManualAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALAWAKE_OFFSET))(this);
		}

		::System::Void ManualEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALENABLE_OFFSET))(this);
		}

		::System::Void ManualDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MANUALDISABLE_OFFSET))(this);
		}

		::System::Void ClearController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARCONTROLLER_OFFSET))(this);
		}

		::System::Void MuteFocusRecord(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_MUTEFOCUSRECORD_OFFSET))(this, a1);
		}

		::System::Void RecordFocusState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_RECORDFOCUSSTATE_OFFSET))(this);
		}

		::System::Void ClearFocusRecordState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARFOCUSRECORDSTATE_OFFSET))(this);
		}

		::System::Void SetFocus(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETFOCUS_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetFocusByRegion(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETFOCUSBYREGION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_5_1B9CC121BDC8766D(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1B9CC121BDC8766D_OFFSET))(this, a1);
		}

		::System::Void Method_5_3D7E9840CF105C69(::MoleMole::MonoGamepadModule* a1, ::Enum_3_9F36F0CF0780ECE5 a2, ::MoleMole::InputActionEvent a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_3D7E9840CF105C69_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_AA2B8A63BBDC1282(::MoleMole::MonoGamepadModule* a1, ::Enum_3_9F36F0CF0780ECE5 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::Enum_3_9F36F0CF0780ECE5))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_AA2B8A63BBDC1282_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_F4DD08A31BA3F883()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_F4DD08A31BA3F883_OFFSET))(this);
		}

		::System::Void Method_5_0D5795AC159AF93B(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0D5795AC159AF93B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_5_ECA703745FE28665(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_ECA703745FE28665_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_2EFF1445F2CEE386(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2EFF1445F2CEE386_OFFSET))(this, a1);
		}

		::System::Boolean CanNavigateTo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CANNAVIGATETO_OFFSET))(this);
		}

		::System::Boolean IsFunctionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_ISFUNCTIONENABLED_OFFSET))(this);
		}

		::System::Boolean HandleInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_HANDLEINPUTACTION_OFFSET))(this, a1);
		}

		::Enum_3_9F36F0CF0780ECE5 Method_5_079E6D0FB3AE13F6(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_079E6D0FB3AE13F6_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_7CF2AE1768F3E6EB(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_7CF2AE1768F3E6EB_OFFSET))(this, a1);
		}

		::System::Void SetNavigateTarget(::Enum_3_9F36F0CF0780ECE5 a1, ::MoleMole::MonoGamepadModule* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_SETNAVIGATETARGET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResolveManagedObjects(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_RESOLVEMANAGEDOBJECTS_OFFSET))(this, a1);
		}

		::System::Void ClearManagedObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_CLEARMANAGEDOBJECTS_OFFSET))(this);
		}

		::System::Void DoCopyReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_DOCOPYRESET_OFFSET))(this);
		}

		::System::Boolean Method_5_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1808E1CF7A125519_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* PublicGetGamepadSelectable(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_PUBLICGETGAMEPADSELECTABLE_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadSelectable* Method_5_6796390E2F1B97B3(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_6796390E2F1B97B3_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_2BEF6A28C6DA16FF(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2BEF6A28C6DA16FF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_2BEF6A28C6DA16FF_1(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2BEF6A28C6DA16FF_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_49CE60633546B186(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_49CE60633546B186_OFFSET))(this, a1, a2);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_BACD4B58CEA46E78(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_BACD4B58CEA46E78_OFFSET))(a1);
		}

		static ::System::Void Method_5_FFD65E4FEAD3C019()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_FFD65E4FEAD3C019_OFFSET))();
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_E57D0DA1E17C4DDA(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E57D0DA1E17C4DDA_OFFSET))(a1);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_BACD4B58CEA46E78_1(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_BACD4B58CEA46E78_1_OFFSET))(a1);
		}

		::System::Void Method_5_B1936CE4DA97AA45_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_B1936CE4DA97AA45_1_OFFSET))(this);
		}

		::System::Void Method_5_F1D40B323FAD3DCE(::MoleMole::UIBaseController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_F1D40B323FAD3DCE_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_E507C493A7842CF6(::MoleMole::MonoGamepadModule* a1, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* a2, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadModule*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E507C493A7842CF6_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_BACD4B58CEA46E78_2(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_BACD4B58CEA46E78_2_OFFSET))(a1);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_E57D0DA1E17C4DDA_1(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E57D0DA1E17C4DDA_1_OFFSET))(a1);
		}

		::System::Void Method_5_0672F56933763C8F(::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721 a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule_Enum_3_E1ECA05187CF4721))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0672F56933763C8F_OFFSET))(this, a1);
		}

		::System::Void Method_5_1B9CC121BDC8766D_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_1B9CC121BDC8766D_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_4F708DC8C166FF7F(::Enum_3_9F36F0CF0780ECE5 a1, ::MoleMole::InputActionEvent a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_4F708DC8C166FF7F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_243C6609F1BB8997(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_243C6609F1BB8997_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_0CAE7726A25196D5(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_0CAE7726A25196D5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_5_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_9681042564541CD6_2_OFFSET))(this);
		}

		::System::Void Method_5_D0DF0505F244B465()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_D0DF0505F244B465_OFFSET))(this);
		}

		static ::System::Nullable_1<::System::Boolean> Method_5_E57D0DA1E17C4DDA_2(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1& a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::MoleMole::MonoGamepadModule_Struct_2_858AFA8F6CDBEA34_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_E57D0DA1E17C4DDA_2_OFFSET))(a1);
		}

		::MoleMole::MonoGamepadModule* Method_5_2983CAA9D011AEC9(::Enum_3_9F36F0CF0780ECE5 a1, ::MoleMole::InputActionEvent a2)
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID, ::Enum_3_9F36F0CF0780ECE5, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADMODULE_METHOD_5_2983CAA9D011AEC9_OFFSET))(this, a1, a2);
		}
	};
}
