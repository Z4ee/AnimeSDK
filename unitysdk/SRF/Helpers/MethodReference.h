#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class MethodInfo; }

#define SRF_HELPERS_METHODREFERENCE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E6A8B70)
#define SRF_HELPERS_METHODREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E6A8BA0)
#define SRF_HELPERS_METHODREFERENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6A8B60)
#define SRF_HELPERS_METHODREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A8AA0)

namespace SRF::Helpers
{
	inline static constexpr unsigned int MethodReference_TypeDefinitionIndex = 34754;

	class MethodReference : public ::System::Object
	{
	public:
		::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>* _method; // 0x10

		::System::Void _ctor(::System::Object* a1, ::System::Reflection::MethodInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::Il2CppArray<::System::Object*>*, ::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Object* Invoke(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE_INVOKE_OFFSET))(this, a1);
		}

		static ::SRF::Helpers::MethodReference* op_Implicit(::System::Action* a1)
		{
			return ((::SRF::Helpers::MethodReference*(*)(::System::Action*))((::PBYTE)hIl2Cpp + SRF_HELPERS_METHODREFERENCE_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
