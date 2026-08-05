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

#define MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x19575310)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_APPLYUGUIMINMAX_OFFSET UNITYSDK_OFFSET(0x19574810)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x19573200)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x19574BF0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x19575B00)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_293D61F1DB5EB198_OFFSET UNITYSDK_OFFSET(0x195749D0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x19574610)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_5DEA19B34BC85FA0_OFFSET UNITYSDK_OFFSET(0x19573F90)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_6426CAFBEED664F1_OFFSET UNITYSDK_OFFSET(0x19573C50)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_674D580DCE26571A_OFFSET UNITYSDK_OFFSET(0x195758D0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_9E570C2DADF4691D_OFFSET UNITYSDK_OFFSET(0x19575F60)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A19744BDC4B8D47C_1_OFFSET UNITYSDK_OFFSET(0x19575D80)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A19744BDC4B8D47C_OFFSET UNITYSDK_OFFSET(0x19575BA0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A8270C103EB5FD67_OFFSET UNITYSDK_OFFSET(0x19573F10)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B6B10A3BCDE37B6E_OFFSET UNITYSDK_OFFSET(0x19573FE0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B8F56BD3150D8B1B_OFFSET UNITYSDK_OFFSET(0x19573EB0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x195765F0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x195765B0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_EB1FBCCF65ECC7D3_OFFSET UNITYSDK_OFFSET(0x19575930)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x195758C0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F95FBE5CF2CC8D6E_OFFSET UNITYSDK_OFFSET(0x19575720)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19572F90)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19572E40)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x195730E0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER_SETBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x19572DB0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19575780)
#define MOLEMOLE_UIBUTTONSIZEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19575730)
#define MOLEMOLE_UIBUTTONSIZEHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x195757A0)
#define MOLEMOLE_UIBUTTONSIZEHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19575830)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonSizeHandler_TypeDefinitionIndex = 62111;

	class UIButtonSizeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Single* StaticGet_Field_6_10()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonSizeHandler_TypeDefinitionIndex)->GetStaticField(0x12610);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_6_11()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIButtonSizeHandler_TypeDefinitionIndex)->GetStaticField(0x12614);
		}
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x18
		::MoleMole::ConfigUICommon_Input_SceneType _sceneTypeV2; // 0x1C
		::MoleMole::ConfigUICommon_Input_PositionType _positionTypeV2; // 0x20
		::System::Single _xSize; // 0x24
		::System::Single _ySize; // 0x28
		::MoleMole::UIButtonSizeHandler_Enum_3_697FB47520476257 _constraintSizeType; // 0x2C
		::UnityEngine::Canvas* Field_6_9; // 0x30
		::System::Boolean Field_6_8; // 0x38
		::System::Boolean Field_6_15; // 0x39
		::System::Boolean Field_6_14; // 0x3A
		::System::Boolean Field_6_13; // 0x3B

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

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_6_674D580DCE26571A()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_674D580DCE26571A_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* Method_6_EB1FBCCF65ECC7D3()
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_EB1FBCCF65ECC7D3_OFFSET))(this);
		}

		::System::Single Method_6_293D61F1DB5EB198()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_293D61F1DB5EB198_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo Method_6_B6B10A3BCDE37B6E()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B6B10A3BCDE37B6E_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType Method_6_5DEA19B34BC85FA0(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_5DEA19B34BC85FA0_OFFSET))(a1);
		}

		::System::Boolean Method_6_6426CAFBEED664F1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_6426CAFBEED664F1_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_A19744BDC4B8D47C()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A19744BDC4B8D47C_OFFSET))(this);
		}

		::System::Int32 Method_6_09B8F368BEF6ADA5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET))(this);
		}

		::MoleMole::UIButtonSizeHandler_Enum_3_608988A2A0052BE9 Method_6_B8F56BD3150D8B1B()
		{
			return ((::MoleMole::UIButtonSizeHandler_Enum_3_608988A2A0052BE9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_B8F56BD3150D8B1B_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_9E570C2DADF4691D()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_9E570C2DADF4691D_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_F95FBE5CF2CC8D6E()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_F95FBE5CF2CC8D6E_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType Method_6_A8270C103EB5FD67(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A8270C103EB5FD67_OFFSET))(a1);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_A19744BDC4B8D47C_1()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_A19744BDC4B8D47C_1_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}
	};
}
