#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_AlignMeta.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Enum_3_3FE364E632E4313C.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Enum_3_7E8FD0171553CC05.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class UIPhysicalSizeHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIPHYSICALPOSHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x16745460)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x16742360)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x167426D0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_1_OFFSET UNITYSDK_OFFSET(0x16742F00)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x16745890)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_GETPOSHANDLER_OFFSET UNITYSDK_OFFSET(0x167420C0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x167425A0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0x16745CD0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_3422201382CE593B_1_OFFSET UNITYSDK_OFFSET(0x16742D00)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x16742E00)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16746ED0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x16745AC0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_6426CAFBEED664F1_OFFSET UNITYSDK_OFFSET(0x167428A0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x16742AF0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x167460F0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x16746FE0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16746F60)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_1_OFFSET UNITYSDK_OFFSET(0x16746D30)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_OFFSET UNITYSDK_OFFSET(0x16746B90)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_DBA008A0E0AB2ECC_OFFSET UNITYSDK_OFFSET(0x16746810)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16746FD0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F4B69C1853FCB2B5_OFFSET UNITYSDK_OFFSET(0x16745950)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x167424F0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16742430)
#define MOLEMOLE_UIPHYSICALPOSHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16745EB0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16745E50)
#define MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x16745F40)
#define MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16745FD0)
#define MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16746060)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalPosHandler_TypeDefinitionIndex = 84044;

	class UIPhysicalPosHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::MoleMole::UIPhysicalPosHandler*>** StaticGet_Field_6_16()
		{
			return (::System::Collections::Generic::List_1<::MoleMole::UIPhysicalPosHandler*>**)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x51AD0);
		}
		static ::UnityEngine::Vector2* StaticGet_Field_6_12()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x12E10);
		}
		static ::System::Single* StaticGet_Field_6_19()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalPosHandler_TypeDefinitionIndex)->GetStaticField(0x12E18);
		}
		::System::String* _name; // 0x18
		::MoleMole::UIPhysicalPosHandler_AlignMeta _horizontalAlignMeta; // 0x20
		::MoleMole::UIPhysicalPosHandler_Enum_3_7E8FD0171553CC05 _horizontalEdge; // 0x38
		::MoleMole::UIPhysicalPosHandler_Enum_3_7E8FD0171553CC05 _horizontalAlignEdge; // 0x3C
		::System::Single _horizontalDistanceWithMillimeter; // 0x40
		::System::Single _minHorizontalDistanceWithMillimeter; // 0x44
		::System::Boolean _horizontalUsePhysicalRatio; // 0x48
		::MoleMole::UIPhysicalPosHandler_AlignMeta _verticalAlignMeta; // 0x50
		::MoleMole::UIPhysicalPosHandler_Enum_3_3FE364E632E4313C _verticalEdge; // 0x68
		::MoleMole::UIPhysicalPosHandler_Enum_3_3FE364E632E4313C _verticalAlignEdge; // 0x6C
		::System::Single _verticalDistanceWithMillimeter; // 0x70
		::System::Single _minVerticalDistanceWithMillimeter; // 0x74
		::System::Boolean _verticalUsePhysicalRatio; // 0x78
		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD Field_6_18; // 0x7C
		::MoleMole::UIPhysicalSizeHandler* Field_6_17; // 0xD8
		::UnityEngine::Canvas* Field_6_23; // 0xE0
		::System::Boolean Field_6_22; // 0xE8
		::System::Boolean Field_6_21; // 0xE9
		::System::Boolean Field_6_20; // 0xEA
		::System::Boolean Field_6_27; // 0xEB
		::System::Boolean Field_6_26; // 0xEC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER__CCTOR_OFFSET))();
		}

		static ::MoleMole::UIPhysicalPosHandler* GetPosHandler(::System::String* a1)
		{
			return ((::MoleMole::UIPhysicalPosHandler*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETPOSHANDLER_OFFSET))(a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult()
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult_1(::System::Single a1, ::System::Single a2)
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_GETLAYOUTRESULT_1_OFFSET))(this, a1, a2);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void __base_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_AWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_6_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_7744894CEC41BF06_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_DBA008A0E0AB2ECC(::UnityEngine::RectTransform* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_DBA008A0E0AB2ECC_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single Method_6_D3CDDBF95A81E584()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_OFFSET))();
		}

		::System::Single Method_6_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_3422201382CE593B_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Boolean Method_6_6426CAFBEED664F1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_6426CAFBEED664F1_OFFSET))(this);
		}

		::System::Single Method_6_3422201382CE593B_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_3422201382CE593B_1_OFFSET))(this);
		}

		static ::System::Single Method_6_D3CDDBF95A81E584_1()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_D3CDDBF95A81E584_1_OFFSET))();
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::System::Void Method_6_7744894CEC41BF06_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_7744894CEC41BF06_1_OFFSET))(this);
		}

		::System::Single Method_6_F4B69C1853FCB2B5(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALPOSHANDLER_METHOD_6_F4B69C1853FCB2B5_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
