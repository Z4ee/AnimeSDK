#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Config { class EtherEyesInteractableVariationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_CLOSEVISION_OFFSET UNITYSDK_OFFSET(0x14272050)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x142727B0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_2839AE123F8ECAA7_OFFSET UNITYSDK_OFFSET(0x14272800)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_1_OFFSET UNITYSDK_OFFSET(0x142736B0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_2_OFFSET UNITYSDK_OFFSET(0x142736E0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_3_OFFSET UNITYSDK_OFFSET(0x14273710)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_4_OFFSET UNITYSDK_OFFSET(0x142737D0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x14273620)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_1_OFFSET UNITYSDK_OFFSET(0x14271500)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_OFFSET UNITYSDK_OFFSET(0x14271870)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x14270900)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x14273680)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0x14273740)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_3_OFFSET UNITYSDK_OFFSET(0x14273770)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_4_OFFSET UNITYSDK_OFFSET(0x142737A0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x14273650)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14271BE0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x142714B0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x142708B0)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_OPENVISION_OFFSET UNITYSDK_OFFSET(0x14271C30)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER_TRIGGERINTERACT_OFFSET UNITYSDK_OFFSET(0x14272480)
#define MOLEMOLE_ETHEREYEINTERACTABLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x142733D0)

namespace MoleMole
{
	inline static constexpr unsigned int EtherEyeInteractableRenderer_TypeDefinitionIndex = 55990;

	class EtherEyeInteractableRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Foundation::AssetRequestHandle* StaticGet_Field_5_5()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x459E0);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_3()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x45A00);
		}
		static ::UnityEngine::Material** StaticGet_Field_5_4()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x45A08);
		}
		static ::Foundation::AssetRequestHandle* StaticGet_Field_5_6()
		{
			return (::Foundation::AssetRequestHandle*)Il2CppClass::FromTypeDefinitionIndex(EtherEyeInteractableRenderer_TypeDefinitionIndex)->GetStaticField(0x45A10);
		}
		// static const ::System::String* Field_5_18; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_0; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* SurfaceObject; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_2; // 0x28
		::UnityEngine::Material* tempMat; // 0x30
		::UnityEngine::Material* SurfaceTempMat; // 0x38
		::System::Single Field_5_9; // 0x40
		::System::Single Field_5_10; // 0x44
		::System::Single openTransitionTime; // 0x48
		::System::Single closeTransitionTime; // 0x4C
		::System::Single triggerTransitionTime; // 0x50
		::UnityEngine::AnimationCurve* openCurve; // 0x58
		::UnityEngine::AnimationCurve* closeCurve; // 0x60
		::UnityEngine::AnimationCurve* triggerCurve; // 0x68
		::MoleMole::Config::EtherEyesObjectSize testObjectSize; // 0x70
		::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EtherEyesObjectSize, ::MoleMole::Config::EtherEyesInteractableVariationConfig*>* Field_5_19; // 0x78
		::System::Int32 Field_5_20; // 0x80
		::System::Int32 Field_5_21; // 0x84
		::System::Int32 Field_5_22; // 0x88
		::System::Int32 Field_5_23; // 0x8C
		::System::Int32 Field_5_24; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OpenVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_OPENVISION_OFFSET))(this);
		}

		::System::Void CloseVision()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_CLOSEVISION_OFFSET))(this);
		}

		::System::Void TriggerInteract(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_TRIGGERINTERACT_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_INITIALIZE_OFFSET))(this);
		}

		::System::Void Method_5_B2C52ACF9D9B435B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_B2C52ACF9D9B435B_OFFSET))(this);
		}

		::System::Void Method_5_660474B0F8C5FECE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_OFFSET))(this);
		}

		::System::Void Method_5_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_OFFSET))(this, a1);
		}

		::System::Single Method_5_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_1_OFFSET))(this);
		}

		::System::Void Method_5_660474B0F8C5FECE_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_660474B0F8C5FECE_1_OFFSET))(this);
		}

		::System::Void Method_5_3C927B51D2142A24_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_3C927B51D2142A24_2(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_3C927B51D2142A24_3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_3_OFFSET))(this, a1);
		}

		::System::Single Method_5_FB4BE762B6186C23_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_2_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23_3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_3_OFFSET))(this);
		}

		::System::Single Method_5_FB4BE762B6186C23_4()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_FB4BE762B6186C23_4_OFFSET))(this);
		}

		::System::Void Method_5_3C927B51D2142A24_4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_3C927B51D2142A24_4_OFFSET))(this, a1);
		}

		::System::Void Method_5_2839AE123F8ECAA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ETHEREYEINTERACTABLERENDERER_METHOD_5_2839AE123F8ECAA7_OFFSET))(this);
		}
	};
}
