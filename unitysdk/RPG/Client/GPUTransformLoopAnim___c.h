#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_64CAD3999A9F2A59_AnimatedItem;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x974DC00)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x974DC40)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0x974DC50)
#define RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_1_OFFSET UNITYSDK_OFFSET(0x974DC70)

namespace RPG::Client
{
	inline static constexpr unsigned int GPUTransformLoopAnim___c_TypeDefinitionIndex = 57562;

	class GPUTransformLoopAnim___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GPUTransformLoopAnim___c** StaticGet___9()
		{
			return (::RPG::Client::GPUTransformLoopAnim___c**)Il2CppClass::FromTypeDefinitionIndex(GPUTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0xEDE0);
		}
		static ::System::Func_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::UnityEngine::Mesh*>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(GPUTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0xEDE8);
		}
		static ::System::Func_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::Class_3_64CAD3999A9F2A59_AnimatedItem*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*>**)Il2CppClass::FromTypeDefinitionIndex(GPUTransformLoopAnim___c_TypeDefinitionIndex)->GetStaticField(0xEDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Mesh* _get_RenderBudgetData_b__22_0(::Class_3_64CAD3999A9F2A59_AnimatedItem* i)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_0_OFFSET))(this, i);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>* _get_RenderBudgetData_b__22_1(::Class_3_64CAD3999A9F2A59_AnimatedItem* i)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Material*>*(*)(::PVOID, ::Class_3_64CAD3999A9F2A59_AnimatedItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GPUTRANSFORMLOOPANIM___C__GET_RENDERBUDGETDATA_B__22_1_OFFSET))(this, i);
		}
	};
}
