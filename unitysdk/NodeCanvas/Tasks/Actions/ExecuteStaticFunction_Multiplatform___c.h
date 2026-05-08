#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A20EBA0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20EBE0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__ONEXECUTE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1A20EBF0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteStaticFunction_Multiplatform___c_TypeDefinitionIndex = 27135;

	class ExecuteStaticFunction_Multiplatform___c : public ::System::Object
	{
	public:
		static ::NodeCanvas::Tasks::Actions::ExecuteStaticFunction_Multiplatform___c** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Actions::ExecuteStaticFunction_Multiplatform___c**)Il2CppClass::FromTypeDefinitionIndex(ExecuteStaticFunction_Multiplatform___c_TypeDefinitionIndex)->GetStaticField(0x1FE10);
		}
		static ::System::Func_2<::NodeCanvas::Framework::Internal::BBObjectParameter*, ::System::Object*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Internal::BBObjectParameter*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteStaticFunction_Multiplatform___c_TypeDefinitionIndex)->GetStaticField(0x1FE18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__CTOR_OFFSET))(this);
		}

		::System::Object* _OnExecute_b__9_0(::NodeCanvas::Framework::Internal::BBObjectParameter* p)
		{
			return ((::System::Object*(*)(::PVOID, ::NodeCanvas::Framework::Internal::BBObjectParameter*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__ONEXECUTE_B__9_0_OFFSET))(this, p);
		}
	};
}
