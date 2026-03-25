#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define SRF_HELPERS_METHODREFERENCE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18467190)
#define SRF_HELPERS_METHODREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x184671B0)
#define SRF_HELPERS_METHODREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18467180)
#define SRF_HELPERS_METHODREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x184670F0)

namespace SRF::Helpers
{
	inline static constexpr unsigned int MethodReference_TypeDefinitionIndex = 27710;

	class MethodReference : public ::System::Object
	{
	public:
		::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>* _method; // 0x10

		::System::Void _ctor(::System::Object* target, ::System::Reflection::MethodInfo* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE__CTOR_OFFSET))(this, target, method);
		}

		::System::Void _ctor_1(::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE__CTOR_1_OFFSET))(this, method);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* parameters)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE_INVOKE_OFFSET))(this, parameters);
		}

		static ::SRF::Helpers::MethodReference* op_Implicit(::System::Action* action)
		{
			return ((::SRF::Helpers::MethodReference*(*)(::System::Action*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE_OP_IMPLICIT_OFFSET))(action);
		}
	};
}
