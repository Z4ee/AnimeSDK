#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NodeCanvas::Framework::Internal { class BBObjectParameter; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C63AB80)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63ABC0)
#define NODECANVAS_TASKS_ACTIONS_EXECUTESTATICFUNCTION_MULTIPLATFORM___C__ONEXECUTE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C63ABD0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int ExecuteStaticFunction_Multiplatform___c_TypeDefinitionIndex = 30280;

	class ExecuteStaticFunction_Multiplatform___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NodeCanvas::Framework::Internal::BBObjectParameter*, ::System::Object*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::NodeCanvas::Framework::Internal::BBObjectParameter*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ExecuteStaticFunction_Multiplatform___c_TypeDefinitionIndex)->GetStaticField(0x23BA0);
		}
		static ::NodeCanvas::Tasks::Actions::ExecuteStaticFunction_Multiplatform___c** StaticGet___9()
		{
			return (::NodeCanvas::Tasks::Actions::ExecuteStaticFunction_Multiplatform___c**)Il2CppClass::FromTypeDefinitionIndex(ExecuteStaticFunction_Multiplatform___c_TypeDefinitionIndex)->GetStaticField(0x23BA8);
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
