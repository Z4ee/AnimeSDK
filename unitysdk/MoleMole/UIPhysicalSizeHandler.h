#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD.h"
#include "unitysdk/MoleMole/UIPhysicalSizeHandler_Enum_3_CC8EE595E9E2E280.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Canvas; }

#define MOLEMOLE_UIPHYSICALSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x152A17E0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_CALCULATELAYOUT_OFFSET UNITYSDK_OFFSET(0x152A0110)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_GETLAYOUTRESULT_OFFSET UNITYSDK_OFFSET(0x152A08D0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1529FFF0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_115AC51E73D999C8_OFFSET UNITYSDK_OFFSET(0x152A02C0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET UNITYSDK_OFFSET(0x152A1D40)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x152A2380)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x152A1DF0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x152A0500)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x152A2180)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x152A2160)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x152A2100)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x152A2170)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F4B69C1853FCB2B5_OFFSET UNITYSDK_OFFSET(0x152A1BD0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F7AB163354E6802C_OFFSET UNITYSDK_OFFSET(0x152A0700)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1529FFA0)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x152A2050)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x152A2000)
#define MOLEMOLE_UIPHYSICALSIZEHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x152A2070)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhysicalSizeHandler_TypeDefinitionIndex = 79739;

	class UIPhysicalSizeHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_Field_6_5()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalSizeHandler_TypeDefinitionIndex)->GetStaticField(0xE5A0);
		}
		static ::System::Single* StaticGet_Field_6_6()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIPhysicalSizeHandler_TypeDefinitionIndex)->GetStaticField(0xE5A8);
		}
		::System::Boolean _needConstraintXSize; // 0x18
		::System::Single _xSize; // 0x1C
		::System::Boolean _needConstraintYSize; // 0x20
		::System::Single _ySize; // 0x24
		::MoleMole::UIPhysicalSizeHandler_Enum_3_CC8EE595E9E2E280 _constraintSizeType; // 0x28
		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD Field_6_7; // 0x2C
		::UnityEngine::Canvas* Field_6_8; // 0x88
		::System::Boolean Field_6_9; // 0x90
		::System::Boolean Field_6_10; // 0x91
		::System::Boolean Field_6_11; // 0x92
		::System::Boolean Field_6_12; // 0x93

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_CALCULATELAYOUT_OFFSET))(this);
		}

		::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD GetLayoutResult(::System::Single a1)
		{
			return ((::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_GETLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void ApplyLayoutResult(::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIPhysicalPosHandler_Struct_2_D246F7D888B87AFD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_APPLYLAYOUTRESULT_OFFSET))(this, a1);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_C74E50CBD41F0264(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_C74E50CBD41F0264_OFFSET))(this, a1);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_6_1CCA9681CE0AE7A7(::System::Single a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_1CCA9681CE0AE7A7_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_6_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::Single Method_6_F7AB163354E6802C()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F7AB163354E6802C_OFFSET))(this);
		}

		::System::Void Method_6_7744894CEC41BF06()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_7744894CEC41BF06_OFFSET))(this);
		}

		::System::Void Method_6_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Boolean Method_6_115AC51E73D999C8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_115AC51E73D999C8_OFFSET))(this);
		}

		::System::Single Method_6_F4B69C1853FCB2B5(::System::Single a1, ::System::Single a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_F4B69C1853FCB2B5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_6_7744894CEC41BF06_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHYSICALSIZEHANDLER_METHOD_6_7744894CEC41BF06_1_OFFSET))(this);
		}
	};
}
