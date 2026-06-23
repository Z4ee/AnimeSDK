#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1F713AA900B1B313.h"
#include "unitysdk/Enum_3_28B5103092BACC03.h"
#include "unitysdk/Enum_3_5C479A27E77426F1.h"
#include "unitysdk/Enum_3_6C281556EA30AF06.h"
#include "unitysdk/Enum_3_8A26C2BFE91AB35C.h"
#include "unitysdk/Enum_3_9E803CCC6037CBF9.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_468;
class Class_0_16E4307DCC419505_469;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class MonoGamepadVirtualCursor_CCursorTransitionParam; }
namespace MoleMole { class MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam; }
namespace MoleMole { class MonoGamepadVirtualCursor_Class_3_3975FE64F3AD5C39; }
namespace MoleMole { class MonoGamepadVirtualCursor_Class_3_48C4D135D5293DF5; }
namespace MoleMole { class MonoGamepadVirtualCursor_Class_3_62D1EA86F94FBFC6; }
namespace MoleMole { class MonoGamepadVirtualCursor_Class_3_AA184B8BCCAE9D27; }
namespace MoleMole { class MonoGamepadVirtualCursor_Class_3_EC22137A5AE21E1C_3; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Graphic; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTCURSORSCREENPOS_OFFSET UNITYSDK_OFFSET(0x16CD0A10)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTSELECTABLE_OFFSET UNITYSDK_OFFSET(0x16CD0A00)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_SCROLLVIEWWRAPPER_OFFSET UNITYSDK_OFFSET(0x16CD07C0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_ISRAYSEGMENTINTERSECT_OFFSET UNITYSDK_OFFSET(0x16CD5990)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALREFRESHALLSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x16CD5620)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALRESETPOS_OFFSET UNITYSDK_OFFSET(0x16CD2AD0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x16CD11C0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_14246CEAE2B2DA69_OFFSET UNITYSDK_OFFSET(0x16CD1010)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_16795D52109A6C43_OFFSET UNITYSDK_OFFSET(0x16CD8E40)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_1E8AEE8D9D242023_OFFSET UNITYSDK_OFFSET(0x16CD86A0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_357CC795E551368B_OFFSET UNITYSDK_OFFSET(0x16CD7B40)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x16CD1540)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_4AF3A50A92CC492C_OFFSET UNITYSDK_OFFSET(0x16CD2A20)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_56BE2B738E535346_OFFSET UNITYSDK_OFFSET(0x16CD4770)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_59E9ABF4634513FE_OFFSET UNITYSDK_OFFSET(0x16CD0BE0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_672E3DECEBB4A051_OFFSET UNITYSDK_OFFSET(0x16CD2B90)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_67CEDED9BD8F2DA6_OFFSET UNITYSDK_OFFSET(0x16CD8120)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x16CD3F70)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_833E61AA8ABCFDD8_OFFSET UNITYSDK_OFFSET(0x16CD6C60)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_84024AA3B92C6350_OFFSET UNITYSDK_OFFSET(0x16CD56B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x16CD18E0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x16CD0E50)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_9741A7A0642405F1_OFFSET UNITYSDK_OFFSET(0x16CD66E0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x16CD2860)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_B7A138FF7998A4AC_OFFSET UNITYSDK_OFFSET(0x16CD3E50)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_BC3D63492246CA32_OFFSET UNITYSDK_OFFSET(0x16CD3D00)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_BFCBCC58B41174A0_OFFSET UNITYSDK_OFFSET(0x16CD29B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_C48187169E33825B_OFFSET UNITYSDK_OFFSET(0x16CD2EB0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16CD30E0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_CDE4B97094B8D1CF_OFFSET UNITYSDK_OFFSET(0x16CD6350)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_D4E0886303081325_OFFSET UNITYSDK_OFFSET(0x16CD1AF0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_EBE339A3EBBAC21A_OFFSET UNITYSDK_OFFSET(0x16CD6730)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_EFF8666A3EE7A9A3_OFFSET UNITYSDK_OFFSET(0x16CD3140)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_F34C7D12CD06208F_1_OFFSET UNITYSDK_OFFSET(0x16CD8E90)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_F34C7D12CD06208F_OFFSET UNITYSDK_OFFSET(0x16CD84A0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_FB44E56B032AA9DE_OFFSET UNITYSDK_OFFSET(0x16CD66A0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_FD1D91E1FE54EABE_OFFSET UNITYSDK_OFFSET(0x16CD50A0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETCURSORTOSELECTBLE_OFFSET UNITYSDK_OFFSET(0x16CD4A20)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATEANDLOCKSELECT_OFFSET UNITYSDK_OFFSET(0x16CD1730)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATE_OFFSET UNITYSDK_OFFSET(0x16CD1940)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETLOCKSELECT_OFFSET UNITYSDK_OFFSET(0x16CD3DA0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SET_SCROLLVIEWWRAPPER_OFFSET UNITYSDK_OFFSET(0x16CD07D0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD5CA0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x16CD6020)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ISWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0x16CD60B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16CD6140)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x16CD61F0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULEINIT_OFFSET UNITYSDK_OFFSET(0x16CD6200)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULELATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16CD6290)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x16CD6340)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_TypeDefinitionIndex = 51349;

	class MonoGamepadVirtualCursor : public ::MoleMole::MonoGamepadModule
	{
	public:
		::UnityEngine::GameObject* CursorGa; // 0xE8
		::UnityEngine::RectTransform* Viewport; // 0xF0
		::Enum_3_1F713AA900B1B313 ItemType; // 0xF8
		::UnityEngine::RectTransform* ItemRoot; // 0x100
		::UnityEngine::Component* ScrollView; // 0x108
		::System::Single Speed; // 0x110
		::Enum_3_6C281556EA30AF06 MoveMode; // 0x114
		::Enum_3_28B5103092BACC03 AlignType; // 0x118
		::System::Single NearAlignDistance; // 0x11C
		::System::Single AlignSpeed; // 0x120
		::Enum_3_8A26C2BFE91AB35C PriorityMode; // 0x124
		::System::Single CheckEdgeHorizontal; // 0x128
		::System::Single CheckEdgeVertical; // 0x12C
		::System::Single MoveSpeed; // 0x130
		::System::Boolean DirectMove; // 0x134
		::System::Boolean DirectMoveThenMoveCursor; // 0x135
		::System::Boolean CanHideCursorMode; // 0x136
		::System::Boolean LockSelectMode; // 0x137
		::System::Single LockSelectModeMinSpeed; // 0x138
		::System::Single LockSelectModeMaxDis; // 0x13C
		::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* CursorTransitionParam; // 0x140
		::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* SelectTransitionParam; // 0x148
		::System::Boolean GetSelectableInChildren; // 0x150
		::Enum_3_5C479A27E77426F1 ResetMode; // 0x154
		::MoleMole::InputLogicEventType AxisEvent; // 0x158
		::MoleMole::InputLogicEventType UpEvent; // 0x15C
		::MoleMole::InputLogicEventType DownEvent; // 0x160
		::MoleMole::InputLogicEventType LeftEvent; // 0x164
		::MoleMole::InputLogicEventType RightEvent; // 0x168
		::MoleMole::InputLogicEventType ClickItemEvent; // 0x16C
		::MoleMole::InputLogicEventType HideCursorEvent; // 0x170
		::MoleMole::InputLogicEventType ReshowCursorEvent; // 0x174
		::MoleMole::MonoGamepadVirtualCursor_Class_3_AA184B8BCCAE9D27* CustomGetItemPosFunc; // 0x178
		::MoleMole::MonoGamepadVirtualCursor_Class_3_62D1EA86F94FBFC6* CustomCollectAllItemFunc; // 0x180
		::System::Func_3<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Int32>* CustomCompareSelectItemFunc; // 0x188
		::MoleMole::MonoGamepadVirtualCursor_Class_3_3975FE64F3AD5C39* CustomSetItemSelectStateFunc; // 0x190
		::System::Action* CustomOnSelectEmptyFunc; // 0x198
		::System::Action_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* CustomUpdateCurrentSelectFunc; // 0x1A0
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* CustomConvertCursorPosFunc; // 0x1A8
		::System::Func_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>* CustomUIPosFunc; // 0x1B0
		::System::Action_2<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single>* CustomAutoMoveToFunc; // 0x1B8
		::System::Func_3<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::System::Single, ::System::Boolean>* CustomCheckRaycastItem; // 0x1C0
		::MoleMole::MonoGamepadVirtualCursor_Class_3_48C4D135D5293DF5* CustomCheckEdgeFunc; // 0x1C8
		::MoleMole::MonoGamepadVirtualCursor_Class_3_EC22137A5AE21E1C_3* CustomOnClickItemFunc; // 0x1D0
		::System::Boolean Field_6_44; // 0x1D8
		::System::Boolean Field_6_45; // 0x1D9
		::Enum_3_9E803CCC6037CBF9 Field_6_46; // 0x1DC
		::UnityEngine::RectTransform* Field_6_47; // 0x1E0
		::UnityEngine::UI::Graphic* Field_6_48; // 0x1E8
		::UnityEngine::Animation* Field_6_49; // 0x1F0
		::UnityEngine::Vector2 Field_6_50; // 0x1F8
		::UnityEngine::Vector2 Field_6_51; // 0x200
		::System::Single Field_6_52; // 0x208
		::UnityEngine::Vector2 Field_6_53; // 0x20C
		::UnityEngine::Vector2 Field_6_54; // 0x214
		::UnityEngine::Vector2 Field_6_55; // 0x21C
		::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F Field_6_56; // 0x228
		::UnityEngine::Vector2 Field_6_57; // 0x288
		::Il2CppArray<::UnityEngine::Vector2>* Field_6_58; // 0x290
		::Il2CppArray<::UnityEngine::Vector2>* Field_6_59; // 0x298
		::System::Single Field_6_60; // 0x2A0
		::System::Single Field_6_61; // 0x2A4
		::System::Boolean Field_6_62; // 0x2A8
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_63; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::Component* get_ScrollViewWrapper()
		{
			return ((::UnityEngine::Component*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_SCROLLVIEWWRAPPER_OFFSET))(this);
		}

		::System::Void set_ScrollViewWrapper(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SET_SCROLLVIEWWRAPPER_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_468* get_CurrentSelectable()
		{
			return ((::Class_0_16E4307DCC419505_468*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTSELECTABLE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CurrentCursorScreenPos()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_GET_CURRENTCURSORSCREENPOS_OFFSET))(this);
		}

		::System::Boolean Method_6_59E9ABF4634513FE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_59E9ABF4634513FE_OFFSET))(this);
		}

		::System::Void Method_6_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_9681042564541CD6_OFFSET))(this);
		}

		::System::Void SetHideCursorStateAndLockSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATEANDLOCKSELECT_OFFSET))(this);
		}

		::System::Void SetHideCursorState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETHIDECURSORSTATE_OFFSET))(this, a1);
		}

		::System::Void Method_6_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void ManualResetPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALRESETPOS_OFFSET))(this);
		}

		::System::Void Method_6_672E3DECEBB4A051(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_672E3DECEBB4A051_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_EFF8666A3EE7A9A3(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_EFF8666A3EE7A9A3_OFFSET))(this, a1);
		}

		::System::Void SetLockSelect(::Enum_3_9E803CCC6037CBF9 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_9E803CCC6037CBF9, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETLOCKSELECT_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_735EE20B25F86BF4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_735EE20B25F86BF4_OFFSET))(this);
		}

		::System::Void SetCursorToSelectble(::Class_0_16E4307DCC419505_468* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_468*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_SETCURSORTOSELECTBLE_OFFSET))(this, a1);
		}

		::System::Void ManualRefreshAllSelectState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_MANUALREFRESHALLSELECTSTATE_OFFSET))(this, a1);
		}

		::MoleMole::MonoGamepadSelectable* Method_6_84024AA3B92C6350(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_84024AA3B92C6350_OFFSET))(this, a1);
		}

		::System::Boolean IsRaySegmentIntersect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2& a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_ISRAYSEGMENTINTERSECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MoleMole::MonoGamepadSelectable* __base_GetGamepadSelectable(::UnityEngine::Transform* a1)
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_GETGAMEPADSELECTABLE_OFFSET))(this, a1);
		}

		::System::Boolean __base_IsWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ISWORKABLEINNER_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void __base_OnModuleFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULEFOCUS_OFFSET))(this);
		}

		::System::Void __base_OnModuleInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULEINIT_OFFSET))(this);
		}

		::System::Void __base_OnModuleLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULELATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnModuleLostFocus(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR___BASE_ONMODULELOSTFOCUS_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_6_CDE4B97094B8D1CF(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_CDE4B97094B8D1CF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_078D85152011B919()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_078D85152011B919_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_469* Method_6_FB44E56B032AA9DE()
		{
			return ((::Class_0_16E4307DCC419505_469*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_FB44E56B032AA9DE_OFFSET))(this);
		}

		::System::Void Method_6_C48187169E33825B(::Class_0_16E4307DCC419505_468* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_468*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_C48187169E33825B_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_9741A7A0642405F1(::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_9741A7A0642405F1_OFFSET))(this, a1);
		}

		::System::Void Method_6_D4E0886303081325(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_D4E0886303081325_OFFSET))(this, a1);
		}

		::System::Void Method_6_4AF3A50A92CC492C(::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* a1, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam*, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_4AF3A50A92CC492C_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_6_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_6_84516C3E776F194F(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_84516C3E776F194F_OFFSET))(this, a1);
		}

		::System::Boolean Method_6_67CEDED9BD8F2DA6(::UnityEngine::Transform* a1, ::MoleMole::MonoGamepadSelectable* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::MoleMole::MonoGamepadSelectable*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_67CEDED9BD8F2DA6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_F34C7D12CD06208F(::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_F34C7D12CD06208F_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_56BE2B738E535346(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_56BE2B738E535346_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 Method_6_1E8AEE8D9D242023(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_1E8AEE8D9D242023_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_833E61AA8ABCFDD8(::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_833E61AA8ABCFDD8_OFFSET))(this, a1, a2);
		}

		::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F Method_6_16795D52109A6C43()
		{
			return ((::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_16795D52109A6C43_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_BC3D63492246CA32(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_BC3D63492246CA32_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_B7A138FF7998A4AC(::UnityEngine::Vector2 a1, ::System::Boolean a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_B7A138FF7998A4AC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_6_EBE339A3EBBAC21A(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_EBE339A3EBBAC21A_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Method_6_BFCBCC58B41174A0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_BFCBCC58B41174A0_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_FD1D91E1FE54EABE(::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_FD1D91E1FE54EABE_OFFSET))(this, a1);
		}

		::System::Void Method_6_357CC795E551368B(::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CCursorTransitionParam*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_357CC795E551368B_OFFSET))(this, a1);
		}

		::System::Void Method_6_14246CEAE2B2DA69(::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_14246CEAE2B2DA69_OFFSET))(this, a1);
		}

		::System::Void Method_6_F34C7D12CD06208F_1(::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam* a1, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_CIMonoGamepadSelectableTransitionParam*, ::MoleMole::MonoGamepadVirtualCursor_Struct_2_6D728CF44190FF2F))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_METHOD_6_F34C7D12CD06208F_1_OFFSET))(this, a1, a2);
		}
	};
}
