#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIButtonSizeHandler_Enum_3_608988A2A0052BE9.h"
#include "unitysdk/MoleMole/UIButtonSizeHandler_Enum_3_697FB47520476257.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x158C3390)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYUGUIMINMAX_OFFSET UNITYSDK_OFFSET(0x158C2870)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x158C1300)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x158C2C80)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x158C3940)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_293D61F1DB5EB198_OFFSET UNITYSDK_OFFSET(0x158C2A60)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x158C2670)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_5A19431060A597D2_OFFSET UNITYSDK_OFFSET(0x158C3A40)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_6426CAFBEED664F1_OFFSET UNITYSDK_OFFSET(0x158C1CE0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_674D580DCE26571A_OFFSET UNITYSDK_OFFSET(0x158C39D0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_9E570C2DADF4691D_OFFSET UNITYSDK_OFFSET(0x158C3FE0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A8270C103EB5FD67_OFFSET UNITYSDK_OFFSET(0x158C1FA0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B23CD8C5FBDECFD9_1_OFFSET UNITYSDK_OFFSET(0x158C3DF0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B23CD8C5FBDECFD9_OFFSET UNITYSDK_OFFSET(0x158C3C10)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B6B10A3BCDE37B6E_OFFSET UNITYSDK_OFFSET(0x158C20C0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B8F56BD3150D8B1B_OFFSET UNITYSDK_OFFSET(0x158C1F40)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x158C3A30)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158C4610)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x158C3FD0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F95FBE5CF2CC8D6E_OFFSET UNITYSDK_OFFSET(0x158C37A0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x158C10D0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x158C0FC0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x158C11E0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x158C0F30)
#define MOLEMOLE_UIBUTTONSIZEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x158C3800)
#define MOLEMOLE_UIBUTTONSIZEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x158C37B0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x158C3820)
#define MOLEMOLE_UIBUTTONSIZEHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x158C38B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonSizeHandler_TypeDefinitionIndex = 52524;

	class UIButtonSizeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_Field_6_6()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIButtonSizeHandler_TypeDefinitionIndex)->GetStaticField(0x10CF0);
		}
		static ::System::Single* StaticGet_Field_6_7()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonSizeHandler_TypeDefinitionIndex)->GetStaticField(0x10CF8);
		}
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x18
		::MoleMole::ConfigUICommon_Input_SceneType _sceneTypeV2; // 0x1C
		::MoleMole::ConfigUICommon_Input_PositionType _positionTypeV2; // 0x20
		::System::Single _xSize; // 0x24
		::System::Single _ySize; // 0x28
		::MoleMole::UIButtonSizeHandler_Enum_3_697FB47520476257 _constraintSizeType; // 0x2C
		::UnityEngine::Canvas* Field_6_8; // 0x30
		::System::Boolean Field_6_9; // 0x38
		::System::Boolean Field_6_10; // 0x39
		::System::Boolean Field_6_11; // 0x3A
		::System::Boolean Field_6_12; // 0x3B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER__CCTOR_OFFSET))();
		}

		::System::Void SetButtonType(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONTYPE_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult(::System::Single a1)
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_GETLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void ApplyUguiMinMax(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYUGUIMINMAX_OFFSET))(this, a1, a2);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo Method_6_B6B10A3BCDE37B6E()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B6B10A3BCDE37B6E_OFFSET))(this);
		}

		::System::Single Method_6_293D61F1DB5EB198()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_293D61F1DB5EB198_OFFSET))(this);
		}

		::System::Boolean Method_6_6426CAFBEED664F1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_6426CAFBEED664F1_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType Method_6_A8270C103EB5FD67(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A8270C103EB5FD67_OFFSET))(a1);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* Method_6_5A19431060A597D2()
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_5A19431060A597D2_OFFSET))(this);
		}

		::MoleMole::UIButtonSizeHandler_Enum_3_608988A2A0052BE9 Method_6_B8F56BD3150D8B1B()
		{
			return ((::MoleMole::UIButtonSizeHandler_Enum_3_608988A2A0052BE9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B8F56BD3150D8B1B_OFFSET))(this);
		}

		::System::Int32 Method_6_09B8F368BEF6ADA5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_F95FBE5CF2CC8D6E()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F95FBE5CF2CC8D6E_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_9E570C2DADF4691D()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_9E570C2DADF4691D_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_B23CD8C5FBDECFD9()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B23CD8C5FBDECFD9_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_B23CD8C5FBDECFD9_1()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B23CD8C5FBDECFD9_1_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_6_674D580DCE26571A()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_674D580DCE26571A_OFFSET))(this);
		}
	};
}
