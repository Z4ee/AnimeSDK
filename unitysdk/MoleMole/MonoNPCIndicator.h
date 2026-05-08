#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F2DAD7F45F518868;
class MonoNPCCrowdPlatModelComponent;
namespace MoleMole { class MonoNPCIndicator_Class_1_39154B8B2AA98D66_3; }
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONONPCINDICATOR_GETSIZESTR_OFFSET UNITYSDK_OFFSET(0x11770010)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_1D46598A3E62CA28_OFFSET UNITYSDK_OFFSET(0x117744D0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_2037352EAF908A74_OFFSET UNITYSDK_OFFSET(0x117736B0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_229549BCF85E5823_OFFSET UNITYSDK_OFFSET(0x117734B0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_285D7D868D433323_OFFSET UNITYSDK_OFFSET(0x11773810)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_322660C1A07434B2_OFFSET UNITYSDK_OFFSET(0x117704D0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_3FED7693819A8F5F_OFFSET UNITYSDK_OFFSET(0x11770B20)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_4B214700971975B6_OFFSET UNITYSDK_OFFSET(0x1176FFB0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x11770E10)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_5CA29213EC7E3393_OFFSET UNITYSDK_OFFSET(0x117714C0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x11773970)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_B1332D80F5399328_OFFSET UNITYSDK_OFFSET(0x11772C90)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_C05400DAFC1AFBB1_OFFSET UNITYSDK_OFFSET(0x11774880)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_C9A5C2BF80BD7440_OFFSET UNITYSDK_OFFSET(0x11772450)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_D533D18F8A922312_OFFSET UNITYSDK_OFFSET(0x11772050)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x11772A90)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x11774310)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_FC09D4DA04E20B7B_OFFSET UNITYSDK_OFFSET(0x11770380)
#define MOLEMOLE_MONONPCINDICATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1176E930)
#define MOLEMOLE_MONONPCINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1176FC80)
#define MOLEMOLE_MONONPCINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11770220)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_TypeDefinitionIndex = 71115;

	class MonoNPCIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int64 Field_5_13 = 0x100000; // 0x0
		::UnityEngine::UI::Text* CrowdCountText; // 0x18
		::UnityEngine::UI::Text* CrowdTextureMemoryText; // 0x20
		::UnityEngine::UI::Text* CrowdMeshMemoryText; // 0x28
		::UnityEngine::UI::Text* CrowdAnimationMemoryText; // 0x30
		::UnityEngine::UI::Text* CrowdGPUAnimationBufferMemoryText; // 0x38
		::UnityEngine::UI::Text* CrowdLODInfoText; // 0x40
		::UnityEngine::UI::Text* NormalNPCCountText; // 0x48
		::UnityEngine::UI::Text* NormalNPCTextureMemoryText; // 0x50
		::UnityEngine::UI::Text* NormalNPCMeshMemoryText; // 0x58
		::UnityEngine::UI::Text* NormalNPCAnimationMemoryText; // 0x60
		::UnityEngine::UI::Text* NPCPerformanceText; // 0x68
		::UnityEngine::UI::Text* NPCCountText; // 0x70
		::System::Single Field_5_12; // 0x78
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdAnimationInstancerRuntimeData*>* Field_5_14; // 0x80
		::System::Collections::Generic::List_1<::Class_3_F2DAD7F45F518868*>* Field_5_15; // 0x88
		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_5_16; // 0x90
		::System::Collections::Generic::List_1<::MonoNPCCrowdPlatModelComponent*>* Field_5_17; // 0x98
		::Nap::NapECS::EcsFilter* Field_5_18; // 0xA0
		::System::Text::StringBuilder* Field_5_19; // 0xA8
		::MoleMole::MonoNPCIndicator_Class_1_39154B8B2AA98D66_3* Field_5_20; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* Field_5_21; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_UPDATE_OFFSET))(this);
		}

		static ::System::String* GetSizeStr(::System::Int64 a1)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_GETSIZESTR_OFFSET))(a1);
		}

		::System::Int64 Method_5_FC09D4DA04E20B7B()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_FC09D4DA04E20B7B_OFFSET))(this);
		}

		::System::Void Method_5_322660C1A07434B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_322660C1A07434B2_OFFSET))(this);
		}

		::System::Int64 Method_5_3FED7693819A8F5F()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_3FED7693819A8F5F_OFFSET))(this);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Int64 Method_5_5CA29213EC7E3393()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_5CA29213EC7E3393_OFFSET))(this);
		}

		::System::Int64 Method_5_229549BCF85E5823()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_229549BCF85E5823_OFFSET))(this);
		}

		::System::Void Method_5_2037352EAF908A74(::Nap::NapECS::EcsEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_2037352EAF908A74_OFFSET))(this, a1);
		}

		::System::Int64 Method_5_B1332D80F5399328(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_B1332D80F5399328_OFFSET))(this, a1);
		}

		::System::Int64 Method_5_C9A5C2BF80BD7440()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_C9A5C2BF80BD7440_OFFSET))(this);
		}

		::System::Void Method_5_285D7D868D433323(::Nap::NapECS::EcsEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_285D7D868D433323_OFFSET))(this, a1);
		}

		::System::Int64 Method_5_D533D18F8A922312()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_D533D18F8A922312_OFFSET))(this);
		}

		::System::Void Method_5_AE80CBC984AADFD5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_AE80CBC984AADFD5_OFFSET))(this);
		}

		::System::Void Method_5_DDA8A2337932DF10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_DDA8A2337932DF10_OFFSET))(this);
		}

		::System::Void Method_5_4B214700971975B6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_4B214700971975B6_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_5_C05400DAFC1AFBB1(::Class_3_F2DAD7F45F518868* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_C05400DAFC1AFBB1_OFFSET))(this, a1);
		}

		::System::Int64 Method_5_1D46598A3E62CA28()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_1D46598A3E62CA28_OFFSET))(this);
		}
	};
}
