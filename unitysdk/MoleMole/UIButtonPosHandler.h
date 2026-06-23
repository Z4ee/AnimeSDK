#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_AlignMeta.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_Enum_3_EC9AE06EDE4B4C42.h"
#include "unitysdk/MoleMole/UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace MoleMole { class UIButtonSizeHandler; }
namespace MoleMole { class UserLocalDataItem_OverrideMobileButtonPanel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIBUTTONPOSHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x15B5E530)
#define MOLEMOLE_UIBUTTONPOSHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x15B5A9A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x15B5AF00)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_1_OFFSET UNITYSDK_OFFSET(0x15B5CED0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x15B5E960)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GETPOSHANDLER_OFFSET UNITYSDK_OFFSET(0x15B5A6F0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_BUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x15B5A630)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_POSITIONTYPE_OFFSET UNITYSDK_OFFSET(0x15B5A650)
#define MOLEMOLE_UIBUTTONPOSHANDLER_GET_SCENETYPE_OFFSET UNITYSDK_OFFSET(0x15B5A640)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET UNITYSDK_OFFSET(0x15B601F0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0x15B5F0F0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_2F117730B6ABAEDE_OFFSET UNITYSDK_OFFSET(0x15B605A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x15B60B80)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x15B5C630)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_4BCD51618C77AD95_OFFSET UNITYSDK_OFFSET(0x15B5F430)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5304726C363652C1_OFFSET UNITYSDK_OFFSET(0x15B5CCD0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5A19431060A597D2_OFFSET UNITYSDK_OFFSET(0x15B5FCC0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5DEA19B34BC85FA0_OFFSET UNITYSDK_OFFSET(0x15B5BFA0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_74166AE1162C06DF_1_OFFSET UNITYSDK_OFFSET(0x15B5C840)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_74166AE1162C06DF_OFFSET UNITYSDK_OFFSET(0x15B5C9C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_882649FD9513E63E_OFFSET UNITYSDK_OFFSET(0x15B5CB40)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_8A9A7CCD2DCA2CF8_1_OFFSET UNITYSDK_OFFSET(0x15B609A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_8A9A7CCD2DCA2CF8_OFFSET UNITYSDK_OFFSET(0x15B5F4C0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_9E570C2DADF4691D_1_OFFSET UNITYSDK_OFFSET(0x15B60C10)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_9E570C2DADF4691D_OFFSET UNITYSDK_OFFSET(0x15B5F690)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_A8270C103EB5FD67_OFFSET UNITYSDK_OFFSET(0x15B5BE80)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x15B5BBC0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_B6B10A3BCDE37B6E_OFFSET UNITYSDK_OFFSET(0x15B5BFF0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_BBB00239B96BCEDC_1_OFFSET UNITYSDK_OFFSET(0x15B5EDC0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_BBB00239B96BCEDC_OFFSET UNITYSDK_OFFSET(0x15B5EA80)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C1016C3FD846CDBF_1_OFFSET UNITYSDK_OFFSET(0x15B60280)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C1016C3FD846CDBF_OFFSET UNITYSDK_OFFSET(0x15B5FED0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x15B61090)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15B5FE90)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_E1A38AE09BB51EC6_OFFSET UNITYSDK_OFFSET(0x15B5BE20)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15B60B70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F95FBE5CF2CC8D6E_1_OFFSET UNITYSDK_OFFSET(0x15B5EA70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F95FBE5CF2CC8D6E_OFFSET UNITYSDK_OFFSET(0x15B5EDB0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15B5AC20)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15B5AA70)
#define MOLEMOLE_UIBUTTONPOSHANDLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15B5ADD0)
#define MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONTYPE_OFFSET UNITYSDK_OFFSET(0x15B5A660)
#define MOLEMOLE_UIBUTTONPOSHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B5F1F0)
#define MOLEMOLE_UIBUTTONPOSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15B5F1A0)
#define MOLEMOLE_UIBUTTONPOSHANDLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x15B5F280)
#define MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x15B5F310)
#define MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15B5F3A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIButtonPosHandler_TypeDefinitionIndex = 71414;

	class UIButtonPosHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>** StaticGet_Field_6_9()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIButtonPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x4C010);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_6_6()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x12290);
		}
		static ::System::Single* StaticGet_Field_6_7()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIButtonPosHandler_TypeDefinitionIndex)->GetStaticField(0x12298);
		}
		::System::String* _name; // 0x18
		::MoleMole::ConfigUICommon_Input_ButtonType _buttonTypeV2; // 0x20
		::MoleMole::ConfigUICommon_Input_SceneType _sceneTypeV2; // 0x24
		::MoleMole::ConfigUICommon_Input_PositionType _positionTypeV2; // 0x28
		::MoleMole::UIButtonPosHandler_AlignMeta _horizontalAlignMeta; // 0x30
		::MoleMole::UIButtonPosHandler_AlignMeta _verticalAlignMeta; // 0x58
		::MoleMole::UIButtonSizeHandler* Field_6_8; // 0x80
		::UnityEngine::Canvas* Field_6_10; // 0x88
		::System::Boolean Field_6_11; // 0x90
		::System::Boolean Field_6_12; // 0x91
		::System::Boolean Field_6_13; // 0x92
		::System::Boolean Field_6_14; // 0x93
		::System::Boolean Field_6_15; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER__CCTOR_OFFSET))();
		}

		::MoleMole::ConfigUICommon_Input_ButtonType get_ButtonType()
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_BUTTONTYPE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_SceneType get_SceneType()
		{
			return ((::MoleMole::ConfigUICommon_Input_SceneType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_SCENETYPE_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_PositionType get_PositionType()
		{
			return ((::MoleMole::ConfigUICommon_Input_PositionType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GET_POSITIONTYPE_OFFSET))(this);
		}

		::System::Void SetButtonType(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_SETBUTTONTYPE_OFFSET))(this, a1);
		}

		static ::MoleMole::UIButtonPosHandler* GetPosHandler(::System::String* a1)
		{
			return ((::MoleMole::UIButtonPosHandler*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETPOSHANDLER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F GetLayoutResult()
		{
			return ((::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F GetLayoutResult_1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_GETLAYOUTRESULT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIButtonPosHandler_Struct_2_729FF1F0AF3FEB7F))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Single Method_6_882649FD9513E63E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_882649FD9513E63E_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType Method_6_A8270C103EB5FD67(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_A8270C103EB5FD67_OFFSET))(a1);
		}

		::UnityEngine::Vector2 Method_6_9E570C2DADF4691D()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_9E570C2DADF4691D_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_C1016C3FD846CDBF()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C1016C3FD846CDBF_OFFSET))(this);
		}

		::MoleMole::UIButtonPosHandler_Enum_3_EC9AE06EDE4B4C42 Method_6_E1A38AE09BB51EC6()
		{
			return ((::MoleMole::UIButtonPosHandler_Enum_3_EC9AE06EDE4B4C42(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_E1A38AE09BB51EC6_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_F95FBE5CF2CC8D6E()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F95FBE5CF2CC8D6E_OFFSET))(this);
		}

		::System::Int32 Method_6_09B8F368BEF6ADA5()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_09B8F368BEF6ADA5_OFFSET))(this);
		}

		::System::Int32 Method_6_4BCD51618C77AD95()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_4BCD51618C77AD95_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_F95FBE5CF2CC8D6E_1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F95FBE5CF2CC8D6E_1_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_2F117730B6ABAEDE()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_2F117730B6ABAEDE_OFFSET))(this);
		}

		::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel* Method_6_C1016C3FD846CDBF_1()
		{
			return ((::MoleMole::UserLocalDataItem_OverrideMobileButtonPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C1016C3FD846CDBF_1_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo Method_6_B6B10A3BCDE37B6E()
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_B6B10A3BCDE37B6E_OFFSET))(this);
		}

		::System::Single Method_6_74166AE1162C06DF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_74166AE1162C06DF_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Single Method_6_5304726C363652C1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5304726C363652C1_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* Method_6_5A19431060A597D2()
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5A19431060A597D2_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_BBB00239B96BCEDC()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_BBB00239B96BCEDC_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_BBB00239B96BCEDC_1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_BBB00239B96BCEDC_1_OFFSET))(this);
		}

		::System::Single Method_6_74166AE1162C06DF_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_74166AE1162C06DF_1_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_6_8A9A7CCD2DCA2CF8()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_8A9A7CCD2DCA2CF8_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		static ::MoleMole::ConfigUICommon_Input_ButtonType Method_6_5DEA19B34BC85FA0(::MoleMole::ConfigUICommon_Input_ButtonType a1)
		{
			return ((::MoleMole::ConfigUICommon_Input_ButtonType(*)(::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_5DEA19B34BC85FA0_OFFSET))(a1);
		}

		::System::Boolean Method_6_A871253BFD471C99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_A871253BFD471C99_OFFSET))(this);
		}

		::System::Int32 Method_6_37D0382D0C30A2DC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_37D0382D0C30A2DC_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_9E570C2DADF4691D_1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_9E570C2DADF4691D_1_OFFSET))(this);
		}

		::UnityEngine::Vector2Int Method_6_8A9A7CCD2DCA2CF8_1()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_8A9A7CCD2DCA2CF8_1_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBUTTONPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}
	};
}
