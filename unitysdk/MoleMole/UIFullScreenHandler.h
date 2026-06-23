#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIFullScreenHandler_Enum_3_FDE3C35692169540.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/EventSystems/UIBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_03F1CD50928B7BED_OFFSET UNITYSDK_OFFSET(0x19DB4F10)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x19DB4EB0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x19DB5680)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x19DB3DD0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x19DB4E70)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_4B72F72501001F72_OFFSET UNITYSDK_OFFSET(0x19DB6240)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_6B6F54163E59B1A5_OFFSET UNITYSDK_OFFSET(0x19DB5710)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x19DB4670)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x19DB5E00)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_C5045C8922E9AC72_OFFSET UNITYSDK_OFFSET(0x19DB58F0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19DB56D0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x19DB4AB0)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x19DB6020)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_F530CA3FA28BEDE8_OFFSET UNITYSDK_OFFSET(0x19DB5580)
#define MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_FF8DCC945805E32B_OFFSET UNITYSDK_OFFSET(0x19DB4760)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x19DB4110)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19DB40C0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19DB3F70)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19DB3EB0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x19DB3FE0)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x19DB4050)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x19DB3D80)
#define MOLEMOLE_UIFULLSCREENHANDLER_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x19DB3F20)
#define MOLEMOLE_UIFULLSCREENHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB4160)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x19DB41F0)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x19DB4280)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19DB4310)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19DB43A0)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x19DB4430)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x19DB44C0)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x19DB4550)
#define MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x19DB45E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenHandler_TypeDefinitionIndex = 69312;

	class UIFullScreenHandler : public ::UnityEngine::EventSystems::UIBehaviour
	{
	public:
		::MoleMole::UIFullScreenHandler_Enum_3_FDE3C35692169540 _axisType; // 0x18
		::System::Single _overDraw; // 0x1C
		::System::Nullable_1<::System::Boolean> Field_6_2; // 0x20
		::UnityEngine::Canvas* Field_6_3; // 0x28
		::System::Boolean Field_6_4; // 0x30
		::System::Boolean Field_6_5; // 0x31
		::Il2CppArray<::UnityEngine::Vector3>* Field_6_6; // 0x38
		::System::Boolean Field_6_7; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnBeforeTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONBEFORETRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnLightweightDeactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void __base_OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void __base_OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER___BASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Boolean Method_6_ABFE6A357B89C69A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_ABFE6A357B89C69A_OFFSET))(this);
		}

		::System::Boolean Method_6_D2809205008ACF99()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_D2809205008ACF99_OFFSET))(this);
		}

		::System::Boolean Method_6_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_6_19CCC07C980409E4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_19CCC07C980409E4_OFFSET))(this, a1);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_03F1CD50928B7BED(::UnityEngine::Canvas* a1, ::UnityEngine::RectTransform* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_03F1CD50928B7BED_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean Method_6_1D4018D4200358D0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_1D4018D4200358D0_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_30A2382C3FCC5386()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_30A2382C3FCC5386_OFFSET))(this);
		}

		static ::System::Boolean Method_6_FF8DCC945805E32B(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_FF8DCC945805E32B_OFFSET))(a1);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_6B6F54163E59B1A5(::UnityEngine::Canvas* a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_6B6F54163E59B1A5_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2> Method_6_C5045C8922E9AC72(::UnityEngine::Canvas* a1, ::UnityEngine::RectTransform* a2, ::MoleMole::UIFullScreenHandler_Enum_3_FDE3C35692169540 a3, ::System::Single a4, ::System::Boolean a5)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>(*)(::UnityEngine::Canvas*, ::UnityEngine::RectTransform*, ::MoleMole::UIFullScreenHandler_Enum_3_FDE3C35692169540, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_C5045C8922E9AC72_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Method_6_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::UnityEngine::Canvas* Method_6_4B72F72501001F72()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_4B72F72501001F72_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Int32, ::System::Int32> Method_6_F530CA3FA28BEDE8(::System::Boolean a1)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_F530CA3FA28BEDE8_OFFSET))(a1);
		}

		::System::Void Method_6_E41B6A823556FEEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENHANDLER_METHOD_6_E41B6A823556FEEA_OFFSET))(this);
		}
	};
}
