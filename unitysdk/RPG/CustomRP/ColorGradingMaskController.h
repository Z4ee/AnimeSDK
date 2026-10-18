#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/ColorGradingMaskController_DrawItem.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_CLEARALLRENDERERMASKVALUES_OFFSET UNITYSDK_OFFSET(0x1CC1E3C0)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_CLEARRENDERERMASKVALUE_OFFSET UNITYSDK_OFFSET(0x1CC1E350)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_COLLECTRENDERERSFROMROOT_OFFSET UNITYSDK_OFFSET(0x1CC1E260)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1CC1E010)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CC1DE10)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CC1DC00)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CC1D880)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_SETRENDERERMASKVALUE_OFFSET UNITYSDK_OFFSET(0x1CC1E290)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC1EB90)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__CLEARMATERIALINSTANCES_OFFSET UNITYSDK_OFFSET(0x1CC1DE80)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC1EA20)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__INITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CC1D8D0)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__REBUILDDRAWLIST_OFFSET UNITYSDK_OFFSET(0x1CC1E090)
#define RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__RESOLVEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CC1E420)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ColorGradingMaskController_TypeDefinitionIndex = 37765;

	class ColorGradingMaskController : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__DissolveSTProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CE0);
		}
		static ::System::Int32* StaticGet__UseDitherAlphaProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CE4);
		}
		static ::System::Int32* StaticGet__DistortionSTProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CE8);
		}
		static ::System::Int32* StaticGet__DissolveMapAddProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CEC);
		}
		static ::System::Int32* StaticGet__DissolveDistIntProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CF0);
		}
		static ::System::Int32* StaticGet__DissolveUVSpeedProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CF4);
		}
		static ::System::Int32* StaticGet__DissolveRateProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CF8);
		}
		static ::System::Int32* StaticGet__DitherAlphaProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9CFC);
		}
		static ::System::Int32* StaticGet__customOutputPropID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9D00);
		}
		static ::System::Int32* StaticGet__DissolveUVProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9D04);
		}
		static ::System::Int32* StaticGet__DissolveOnProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9D08);
		}
		static ::System::Int32* StaticGet__DissolveMapProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ColorGradingMaskController_TypeDefinitionIndex)->GetStaticField(0x9D0C);
		}
		::Il2CppArray<::UnityEngine::Renderer*>* MaskRenderers; // 0x18
		::UnityEngine::GameObject* RendererRoot; // 0x20
		::System::Boolean InvertMask; // 0x28
		::System::Collections::Generic::List_1<::RPG::CustomRP::ColorGradingMaskController_DrawItem>* DrawList; // 0x30
		::UnityEngine::Material* _maskMat; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _materialInstances; // 0x40
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::Single>* _customMaskValues; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CollectRenderersFromRoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_COLLECTRENDERERSFROMROOT_OFFSET))(this);
		}

		::System::Void SetRendererMaskValue(::UnityEngine::Renderer* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_SETRENDERERMASKVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void ClearRendererMaskValue(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_CLEARRENDERERMASKVALUE_OFFSET))(this, a1);
		}

		::System::Void ClearAllRendererMaskValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER_CLEARALLRENDERERMASKVALUES_OFFSET))(this);
		}

		::System::Void _RebuildDrawList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__REBUILDDRAWLIST_OFFSET))(this);
		}

		::UnityEngine::Material* _ResolveMaterial(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__RESOLVEMATERIAL_OFFSET))(this, a1, a2);
		}

		::System::Void _InitMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__INITMATERIAL_OFFSET))(this);
		}

		::System::Void _ClearMaterialInstances()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_COLORGRADINGMASKCONTROLLER__CLEARMATERIALINSTANCES_OFFSET))(this);
		}
	};
}
