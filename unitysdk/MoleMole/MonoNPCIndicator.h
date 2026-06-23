#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoNPCIndicator_Struct_2_1BCAE928E2A4A392.h"
#include "unitysdk/MoleMole/MonoNPCIndicator_Struct_2_1BCAE928E2A4A392_1.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_3_F2DAD7F45F518868;
class MonoNPCCrowdPlatModelComponent;
namespace MoleMole { class MonoNPCIndicator_Class_1_39154B8B2AA98D66_4; }
namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd { class NPCPathGraphManager; }
namespace NPCCrowd::AI { class PopulationRuntime; }
namespace NPCCrowd::AI { class SpawnPointConfig; }
namespace NPCCrowd::AI { class SpawnPointGroup; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationInstancerRuntimeData; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONONPCINDICATOR_GETSIZESTR_OFFSET UNITYSDK_OFFSET(0x173E7E40)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_1D46598A3E62CA28_OFFSET UNITYSDK_OFFSET(0x173E9800)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_2037352EAF908A74_OFFSET UNITYSDK_OFFSET(0x173EE7B0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_229549BCF85E5823_OFFSET UNITYSDK_OFFSET(0x173EE3E0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_27CB73288DD7C6C1_OFFSET UNITYSDK_OFFSET(0x173E8B10)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_285D7D868D433323_OFFSET UNITYSDK_OFFSET(0x173EC6C0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_322660C1A07434B2_OFFSET UNITYSDK_OFFSET(0x173EE910)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_3FED7693819A8F5F_OFFSET UNITYSDK_OFFSET(0x173EA670)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_4668C6EEAD557C90_OFFSET UNITYSDK_OFFSET(0x173E8700)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x173E9FC0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_5CA29213EC7E3393_OFFSET UNITYSDK_OFFSET(0x173EA960)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_660FEC0231F95883_OFFSET UNITYSDK_OFFSET(0x173E8D70)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_759C47B3AA9ADA61_OFFSET UNITYSDK_OFFSET(0x173E83B0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_7746E66F7B910FC0_OFFSET UNITYSDK_OFFSET(0x173E8470)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_B1332D80F5399328_OFFSET UNITYSDK_OFFSET(0x173EBE00)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x173E7DE0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_C05400DAFC1AFBB1_OFFSET UNITYSDK_OFFSET(0x173EE1E0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_C35D08445D722D95_OFFSET UNITYSDK_OFFSET(0x173ECDF0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_C9A5C2BF80BD7440_OFFSET UNITYSDK_OFFSET(0x173EB4E0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_D533D18F8A922312_OFFSET UNITYSDK_OFFSET(0x173E9BB0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x173EC820)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_DDA8A2337932DF10_OFFSET UNITYSDK_OFFSET(0x173E81B0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x173EE5F0)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_EE1CF24CA62108D7_OFFSET UNITYSDK_OFFSET(0x173EC620)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_FC09D4DA04E20B7B_OFFSET UNITYSDK_OFFSET(0x173EE290)
#define MOLEMOLE_MONONPCINDICATOR_METHOD_5_FCF84256B8A0D908_OFFSET UNITYSDK_OFFSET(0x173EBB20)
#define MOLEMOLE_MONONPCINDICATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173E6760)
#define MOLEMOLE_MONONPCINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x173E7AB0)
#define MOLEMOLE_MONONPCINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x173E8050)

namespace MoleMole
{
	inline static constexpr unsigned int MonoNPCIndicator_TypeDefinitionIndex = 55100;

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
		::MoleMole::MonoNPCIndicator_Class_1_39154B8B2AA98D66_4* Field_5_20; // 0xB0
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

		::System::Void Method_5_DDA8A2337932DF10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_DDA8A2337932DF10_OFFSET))(this);
		}

		static ::System::Void Method_5_759C47B3AA9ADA61(::NPCCrowd::AI::SpawnPointGroup* a1, ::MoleMole::MonoNPCIndicator_Struct_2_1BCAE928E2A4A392& a2)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::SpawnPointGroup*, ::MoleMole::MonoNPCIndicator_Struct_2_1BCAE928E2A4A392&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_759C47B3AA9ADA61_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>* Method_5_7746E66F7B910FC0(::NPCCrowd::AI::SpawnPointConfig* a1, ::NPCCrowd::NPCPathGraphManager* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*(*)(::NPCCrowd::AI::SpawnPointConfig*, ::NPCCrowd::NPCPathGraphManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_7746E66F7B910FC0_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_5_27CB73288DD7C6C1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::ProtoScript::TimePeriodType a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_27CB73288DD7C6C1_OFFSET))(a1, a2);
		}

		::System::Int64 Method_5_1D46598A3E62CA28()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_1D46598A3E62CA28_OFFSET))(this);
		}

		::System::Int64 Method_5_D533D18F8A922312()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_D533D18F8A922312_OFFSET))(this);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Method_5_FCF84256B8A0D908(::NPCCrowd::AI::SpawnPointConfig* a1, ::NPCCrowd::NPCPathGraphManager* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*(*)(::NPCCrowd::AI::SpawnPointConfig*, ::NPCCrowd::NPCPathGraphManager*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_FCF84256B8A0D908_OFFSET))(a1, a2);
		}

		::System::Int64 Method_5_B1332D80F5399328(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_B1332D80F5399328_OFFSET))(this, a1);
		}

		static ::ProtoScript::TimePeriodType Method_5_EE1CF24CA62108D7()
		{
			return ((::ProtoScript::TimePeriodType(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_EE1CF24CA62108D7_OFFSET))();
		}

		::System::Int64 Method_5_C9A5C2BF80BD7440()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_C9A5C2BF80BD7440_OFFSET))(this);
		}

		::System::Void Method_5_285D7D868D433323(::Nap::NapECS::EcsEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_285D7D868D433323_OFFSET))(this, a1);
		}

		::System::Void Method_5_DA37DFE3A5BDA9F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_DA37DFE3A5BDA9F4_OFFSET))(this);
		}

		::System::Void Method_5_C35D08445D722D95(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_C35D08445D722D95_OFFSET))(this, a1);
		}

		::System::Void Method_5_C05400DAFC1AFBB1(::Class_3_F2DAD7F45F518868* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F2DAD7F45F518868*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_C05400DAFC1AFBB1_OFFSET))(this, a1);
		}

		static ::System::Void Method_5_4668C6EEAD557C90(::NPCCrowd::AI::SpawnPointGroup* a1, ::MoleMole::MonoNPCIndicator_Struct_2_1BCAE928E2A4A392_1& a2)
		{
			return ((::System::Void(*)(::NPCCrowd::AI::SpawnPointGroup*, ::MoleMole::MonoNPCIndicator_Struct_2_1BCAE928E2A4A392_1&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_4668C6EEAD557C90_OFFSET))(a1, a2);
		}

		::System::Int64 Method_5_5CA29213EC7E3393()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_5CA29213EC7E3393_OFFSET))(this);
		}

		::System::Int64 Method_5_FC09D4DA04E20B7B()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_FC09D4DA04E20B7B_OFFSET))(this);
		}

		::System::Int64 Method_5_3FED7693819A8F5F()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_3FED7693819A8F5F_OFFSET))(this);
		}

		::System::Int64 Method_5_229549BCF85E5823()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_229549BCF85E5823_OFFSET))(this);
		}

		::System::Void Method_5_E7EF6BC52B28648C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_E7EF6BC52B28648C_OFFSET))(this);
		}

		::System::Void Method_5_2037352EAF908A74(::Nap::NapECS::EcsEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_2037352EAF908A74_OFFSET))(this, a1);
		}

		static ::System::Int32 Method_5_660FEC0231F95883(::NPCCrowd::AI::PopulationRuntime* a1, ::ProtoScript::TimePeriodType a2)
		{
			return ((::System::Int32(*)(::NPCCrowd::AI::PopulationRuntime*, ::ProtoScript::TimePeriodType))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_660FEC0231F95883_OFFSET))(a1, a2);
		}

		::System::Void Method_5_322660C1A07434B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_322660C1A07434B2_OFFSET))(this);
		}

		::System::Void Method_5_B961D33AD47A2113()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONONPCINDICATOR_METHOD_5_B961D33AD47A2113_OFFSET))(this);
		}
	};
}
