#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_343859AB814CB7DE_AnimatedItem;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19395180)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x193951C0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_0_OFFSET UNITYSDK_OFFSET(0x193951D0)
#define RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_1_OFFSET UNITYSDK_OFFSET(0x193951F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUParticleTransformLoopAnim___c_TypeDefinitionIndex = 70280;

	class GPUParticleTransformLoopAnim___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_3_343859AB814CB7DE_AnimatedItem*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_3_343859AB814CB7DE_AnimatedItem*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(GPUParticleTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0x18A00);
		}
		static ::System::Func_2<::Class_3_343859AB814CB7DE_AnimatedItem*, ::UnityEngine::Mesh*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_3_343859AB814CB7DE_AnimatedItem*, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(GPUParticleTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0x18A08);
		}
		static ::RPG::Client::GPUParticleTransformLoopAnim___c** StaticGet___9()
		{
			return (::RPG::Client::GPUParticleTransformLoopAnim___c**)Il2CppClass::FromTypeDefinitionIndex(GPUParticleTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0x18A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* _get_RenderBudgetData_b__19_0(::Class_3_343859AB814CB7DE_AnimatedItem* a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::Class_3_343859AB814CB7DE_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* _get_RenderBudgetData_b__19_1(::Class_3_343859AB814CB7DE_AnimatedItem* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID, ::Class_3_343859AB814CB7DE_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUPARTICLETRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__19_1_OFFSET))(this, a1);
		}
	};
}
