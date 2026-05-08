#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_387AB7483855231E.h"
#include "unitysdk/Enum_3_9F36F0CF0780ECE5.h"
#include "unitysdk/Enum_3_D0F2373931CC685D.h"
#include "unitysdk/Enum_3_EAD3226AE1EAD7C4.h"
#include "unitysdk/MoleMole/GamepadNavDirConfig.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_Enum_3_6C1E9FEFBB20CCF2.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_Enum_3_DEF326BBD0C22D5B.h"
#include "unitysdk/MoleMole/MonoGamepadBaseList_Struct_2_1A82DD538E15537D.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MonoUITableScrollV2_LayoutMeta_LayoutType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIBaseController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOGAMEPADBASELIST_ADDITEMSELECTOPERATION_OFFSET UNITYSDK_OFFSET(0x16D5B1F0)
#define MOLEMOLE_MONOGAMEPADBASELIST_CHANGERESETINDEXONFOCUS_OFFSET UNITYSDK_OFFSET(0x16D592B0)
#define MOLEMOLE_MONOGAMEPADBASELIST_CLEARCACHESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x16D59510)
#define MOLEMOLE_MONOGAMEPADBASELIST_GETINDEX_OFFSET UNITYSDK_OFFSET(0x16D5B010)
#define MOLEMOLE_MONOGAMEPADBASELIST_GET_CACHEDSELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x16D592A0)
#define MOLEMOLE_MONOGAMEPADBASELIST_GET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET UNITYSDK_OFFSET(0x16D59330)
#define MOLEMOLE_MONOGAMEPADBASELIST_GET_SCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16D59320)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISALLOWLOOPBYINPUT_OFFSET UNITYSDK_OFFSET(0x16D5A390)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISDRIVENBYSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16D5A2C0)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISLISTTAB_OFFSET UNITYSDK_OFFSET(0x16D5A1A0)
#define MOLEMOLE_MONOGAMEPADBASELIST_ISUSESELECTEDINDEXFROMSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16D5A1F0)
#define MOLEMOLE_MONOGAMEPADBASELIST_LISTISEMPTY_OFFSET UNITYSDK_OFFSET(0x16D59350)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_126EC2032660D76C_OFFSET UNITYSDK_OFFSET(0x16D5C1C0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_1DC460290C5CAF79_OFFSET UNITYSDK_OFFSET(0x16D5C160)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_1FB330E3F81EE55F_OFFSET UNITYSDK_OFFSET(0x16D59B90)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_20487879979618C8_1_OFFSET UNITYSDK_OFFSET(0x16D5BFC0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_20487879979618C8_OFFSET UNITYSDK_OFFSET(0x16D5AE20)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_23A91AD216EE3DAE_OFFSET UNITYSDK_OFFSET(0x16D5A740)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_38E7EA0094712D4D_OFFSET UNITYSDK_OFFSET(0x16D5C8B0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16D59980)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_491D44226596AEA3_OFFSET UNITYSDK_OFFSET(0x16D599D0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_49D3E821006373F3_OFFSET UNITYSDK_OFFSET(0x16D5C390)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_631089883ED84009_OFFSET UNITYSDK_OFFSET(0x16D5C5C0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_6A7DFCE9E3822F30_OFFSET UNITYSDK_OFFSET(0x16D5A140)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_6B707ED7E427E085_OFFSET UNITYSDK_OFFSET(0x16D59A90)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_6C84A58A15601E10_OFFSET UNITYSDK_OFFSET(0x16D5B880)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_84024AA3B92C6350_OFFSET UNITYSDK_OFFSET(0x16D59E60)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_8715A2F9EE93B07F_OFFSET UNITYSDK_OFFSET(0x16D5BA10)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_88D1101B5D710834_OFFSET UNITYSDK_OFFSET(0x16D5BE20)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_8B637789328B6E08_OFFSET UNITYSDK_OFFSET(0x16D5BBB0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_AF14DA40989B84AA_OFFSET UNITYSDK_OFFSET(0x16D59B10)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16D593E0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_BBB2CB9B2C1D9711_OFFSET UNITYSDK_OFFSET(0x16D595E0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_C50A2293958CA940_OFFSET UNITYSDK_OFFSET(0x16D598D0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_CBE6C06BFBD16B25_OFFSET UNITYSDK_OFFSET(0x16D5ACE0)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_D8B63DBB24B374A4_OFFSET UNITYSDK_OFFSET(0x16D5AC30)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E0F43AEFBFDEBC67_1_OFFSET UNITYSDK_OFFSET(0x16D5C430)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E0F43AEFBFDEBC67_OFFSET UNITYSDK_OFFSET(0x16D5B060)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E8B56723988BA453_1_OFFSET UNITYSDK_OFFSET(0x16D5C830)
#define MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E8B56723988BA453_OFFSET UNITYSDK_OFFSET(0x16D59560)
#define MOLEMOLE_MONOGAMEPADBASELIST_MUTECACHESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x16D5B330)
#define MOLEMOLE_MONOGAMEPADBASELIST_RESETKEEPINDEX_OFFSET UNITYSDK_OFFSET(0x16D5B280)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETALLOWLOOP_OFFSET UNITYSDK_OFFSET(0x16D59390)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETCACHESELECTEDINDEXENABLED_OFFSET UNITYSDK_OFFSET(0x16D594B0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETMUTESELECTAUTOCLICKITEM_OFFSET UNITYSDK_OFFSET(0x16D5AFC0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x16D5B2E0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SETSELECTEDINDEXFORUSER_OFFSET UNITYSDK_OFFSET(0x16D5ADA0)
#define MOLEMOLE_MONOGAMEPADBASELIST_SET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET UNITYSDK_OFFSET(0x16D59340)
#define MOLEMOLE_MONOGAMEPADBASELIST_TRYCACHESELECTEDINDEX_OFFSET UNITYSDK_OFFSET(0x16D5B400)
#define MOLEMOLE_MONOGAMEPADBASELIST_UPDATENAVEVENT_OFFSET UNITYSDK_OFFSET(0x16D5B480)
#define MOLEMOLE_MONOGAMEPADBASELIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D5B6B0)
#define MOLEMOLE_MONOGAMEPADBASELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16D5B530)
#define MOLEMOLE_MONOGAMEPADBASELIST___BASE_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x16D5B6C0)
#define MOLEMOLE_MONOGAMEPADBASELIST___BASE_LOGICEVENTTONAVDIR_OFFSET UNITYSDK_OFFSET(0x16D5B750)
#define MOLEMOLE_MONOGAMEPADBASELIST___BASE_ONMODULECLEAR_OFFSET UNITYSDK_OFFSET(0x16D5B7E0)
#define MOLEMOLE_MONOGAMEPADBASELIST___BASE_SETBTNFOCUSSTATE_OFFSET UNITYSDK_OFFSET(0x16D5B870)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadBaseList_TypeDefinitionIndex = 72315;

	class MonoGamepadBaseList : public ::MoleMole::MonoGamepadModule
	{
	public:
		static ::System::Boolean* StaticGet_GlobalUseSelectedIndexFromScrollView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadBaseList_TypeDefinitionIndex)->GetStaticField(0xA9E0);
		}
		static ::System::Boolean* StaticGet_GlobalDrivenByScrollView()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadBaseList_TypeDefinitionIndex)->GetStaticField(0xA9E1);
		}
		::System::Boolean Field_6_2; // 0xE8
		::System::Boolean Field_6_3; // 0xE9
		::System::Int32 Field_6_4; // 0xEC
		::System::Boolean _selectItemOnFocus; // 0xF0
		::System::Int32 _resetIndexOnFocus; // 0xF4
		::System::Boolean _cancelSelectOnLostFocus; // 0xF8
		::System::Boolean _isListTab; // 0xF9
		::System::Collections::Generic::List_1<::MoleMole::MonoGamepadBaseList_Enum_3_6C1E9FEFBB20CCF2>* _itemSelectOperations; // 0x100
		::MonoUITableScrollV2* _scrollView; // 0x108
		::System::Boolean _getSelectableInChildren; // 0x110
		::System::Boolean _disableLostFocusItemAnim; // 0x111
		::MoleMole::InputLogicEventType _upItemEvent; // 0x114
		::MoleMole::InputLogicEventType _downItemEvent; // 0x118
		::MoleMole::InputLogicEventType _leftItemEvent; // 0x11C
		::MoleMole::InputLogicEventType _rightItemEvent; // 0x120
		::MoleMole::InputLogicEventType _clickItemEvent; // 0x124
		::System::Boolean _allowLoop; // 0x128
		::System::Boolean Field_6_19; // 0x129
		::System::Boolean _ignoreNavigateIfEmpty; // 0x12A
		::Enum_3_EAD3226AE1EAD7C4 _selectedIndexSourceType; // 0x12C
		::Enum_3_387AB7483855231E _drivenType; // 0x130
		::System::Boolean Field_6_23; // 0x134
		::System::Int32 Field_6_24; // 0x138
		::Enum_3_D0F2373931CC685D Field_6_25; // 0x13C
		::System::Nullable_1<::System::Int32> Field_6_26; // 0x140
		::System::Int32 Field_6_27; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST__CCTOR_OFFSET))();
		}

		::System::Int32 get_cachedSelectedIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GET_CACHEDSELECTEDINDEX_OFFSET))(this);
		}

		::System::Void ChangeResetIndexOnFocus(::MoleMole::UIBaseController* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_CHANGERESETINDEXONFOCUS_OFFSET))(this, a1, a2);
		}

		::MonoUITableScrollV2* get_scrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GET_SCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean get_isHandleByNestedListDelegate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET))(this);
		}

		::System::Void set_isHandleByNestedListDelegate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SET_ISHANDLEBYNESTEDLISTDELEGATE_OFFSET))(this, a1);
		}

		::System::Boolean ListIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_LISTISEMPTY_OFFSET))(this);
		}

		::System::Void SetAllowLoop(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETALLOWLOOP_OFFSET))(this, a1);
		}

		::System::Void Method_6_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_B1936CE4DA97AA45_OFFSET))(this);
		}

		::Enum_3_9F36F0CF0780ECE5 Method_6_E8B56723988BA453(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E8B56723988BA453_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_BBB2CB9B2C1D9711(::MoleMole::MonoGamepadBaseList_Enum_3_6C1E9FEFBB20CCF2 a1, ::System::Int32 a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadBaseList_Enum_3_6C1E9FEFBB20CCF2, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_BBB2CB9B2C1D9711_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_6_491D44226596AEA3(::System::Int32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_491D44226596AEA3_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_6_6B707ED7E427E085(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_6B707ED7E427E085_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_AF14DA40989B84AA(::System::Int32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_AF14DA40989B84AA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_1FB330E3F81EE55F(::System::Int32 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_1FB330E3F81EE55F_OFFSET))(this, a1, a2, a3, a4);
		}

		::MoleMole::MonoGamepadSelectable* Method_6_84024AA3B92C6350(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_84024AA3B92C6350_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D Method_6_6A7DFCE9E3822F30()
		{
			return ((::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_6A7DFCE9E3822F30_OFFSET))(this);
		}

		::System::Boolean IsListTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISLISTTAB_OFFSET))(this);
		}

		::System::Boolean IsUseSelectedIndexFromScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISUSESELECTEDINDEXFROMSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean IsDrivenByScrollView()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISDRIVENBYSCROLLVIEW_OFFSET))(this);
		}

		::System::Boolean IsAllowLoopByInput(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ISALLOWLOOPBYINPUT_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_23A91AD216EE3DAE(::System::Int32 a1, ::UnityEngine::Vector2 a2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_23A91AD216EE3DAE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetSelectedIndexForUser(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETSELECTEDINDEXFORUSER_OFFSET))(this, a1, a2);
		}

		::System::Void SetMuteSelectAutoClickItem(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETMUTESELECTAUTOCLICKITEM_OFFSET))(this, a1);
		}

		::System::Int32 GetIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_GETINDEX_OFFSET))(this);
		}

		::System::Void AddItemSelectOperation(::MoleMole::MonoGamepadBaseList_Enum_3_6C1E9FEFBB20CCF2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadBaseList_Enum_3_6C1E9FEFBB20CCF2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_ADDITEMSELECTOPERATION_OFFSET))(this, a1);
		}

		::System::Void ResetKeepIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_RESETKEEPINDEX_OFFSET))(this);
		}

		::System::Void SetScrollView(::MonoUITableScrollV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETSCROLLVIEW_OFFSET))(this, a1);
		}

		::System::Void MuteCacheSelectedIndex(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_MUTECACHESELECTEDINDEX_OFFSET))(this, a1);
		}

		::System::Void SetCacheSelectedIndexEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_SETCACHESELECTEDINDEXENABLED_OFFSET))(this, a1);
		}

		::System::Void TryCacheSelectedIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_TRYCACHESELECTEDINDEX_OFFSET))(this);
		}

		::System::Void ClearCacheSelectedIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_CLEARCACHESELECTEDINDEX_OFFSET))(this);
		}

		::System::Void UpdateNavEvent(::MoleMole::InputLogicEventType a1, ::MoleMole::InputLogicEventType a2, ::MoleMole::InputLogicEventType a3, ::MoleMole::InputLogicEventType a4, ::MoleMole::InputLogicEventType a5, ::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::MoleMole::InputLogicEventType, ::System::Collections::Generic::List_1<::MoleMole::GamepadNavDirConfig>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_UPDATENAVEVENT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::MoleMole::MonoGamepadSelectable* __base_GetGamepadSelectable(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST___BASE_GETGAMEPADSELECTABLE_OFFSET))(this, a1);
		}

		::Enum_3_9F36F0CF0780ECE5 __base_LogicEventToNavDir(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_9F36F0CF0780ECE5(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST___BASE_LOGICEVENTTONAVDIR_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST___BASE_ONMODULECLEAR_OFFSET))(this);
		}

		::System::Boolean __base_SetBtnFocusState(::UnityEngine::Transform* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST___BASE_SETBTNFOCUSSTATE_OFFSET))(this, a1, a2, a3);
		}

		::Enum_3_D0F2373931CC685D Method_6_6C84A58A15601E10()
		{
			return ((::Enum_3_D0F2373931CC685D(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_6C84A58A15601E10_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_D8B63DBB24B374A4(::System::Int32 a1, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_D8B63DBB24B374A4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_8715A2F9EE93B07F(::Enum_3_D0F2373931CC685D a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D0F2373931CC685D))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_8715A2F9EE93B07F_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_CBE6C06BFBD16B25(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D a3, ::System::Boolean a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::MonoGamepadBaseList_Struct_2_1A82DD538E15537D, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_CBE6C06BFBD16B25_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_20487879979618C8(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_20487879979618C8_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_8B637789328B6E08(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::InputActionEvent a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_8B637789328B6E08_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_88D1101B5D710834(::System::Nullable_1<::System::Int32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_88D1101B5D710834_OFFSET))(this, a1);
		}

		::System::Void Method_6_20487879979618C8_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_20487879979618C8_1_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadBaseList_Enum_3_DEF326BBD0C22D5B Method_6_1DC460290C5CAF79(::MonoUITableScrollV2_LayoutMeta_LayoutType a1)
		{
			return ((::MoleMole::MonoGamepadBaseList_Enum_3_DEF326BBD0C22D5B(*)(::PVOID, ::MonoUITableScrollV2_LayoutMeta_LayoutType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_1DC460290C5CAF79_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_126EC2032660D76C(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_126EC2032660D76C_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Boolean> Method_6_49D3E821006373F3(::Enum_3_D0F2373931CC685D a1)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::Enum_3_D0F2373931CC685D))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_49D3E821006373F3_OFFSET))(this, a1);
		}

		::System::Int32 Method_6_E0F43AEFBFDEBC67()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E0F43AEFBFDEBC67_OFFSET))(this);
		}

		::System::Int32 Method_6_E0F43AEFBFDEBC67_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E0F43AEFBFDEBC67_1_OFFSET))(this);
		}

		::System::Boolean Method_6_631089883ED84009(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_631089883ED84009_OFFSET))(this, a1);
		}

		::System::Void Method_6_C50A2293958CA940(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_C50A2293958CA940_OFFSET))(this, a1);
		}

		::Enum_3_D0F2373931CC685D Method_6_E8B56723988BA453_1(::MoleMole::InputLogicEventType a1)
		{
			return ((::Enum_3_D0F2373931CC685D(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_E8B56723988BA453_1_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Int32> Method_6_38E7EA0094712D4D()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADBASELIST_METHOD_6_38E7EA0094712D4D_OFFSET))(this);
		}
	};
}
