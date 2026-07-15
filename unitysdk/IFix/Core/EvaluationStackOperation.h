#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class NewFieldInfo; }
namespace IFix::Core { class TypeInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define IFIX_CORE_EVALUATIONSTACKOPERATION_MGET_OFFSET UNITYSDK_OFFSET(0x1B5362B0)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_MSET_OFFSET UNITYSDK_OFFSET(0x1B5368A0)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_PUSHOBJECT_OFFSET UNITYSDK_OFFSET(0x1B533C20)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1B533030)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_UNBOXPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1B535C30)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_UPDATEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B535100)

namespace IFix::Core
{
	inline static constexpr unsigned int EvaluationStackOperation_TypeDefinitionIndex = 9787;

	class EvaluationStackOperation : public ::System::Object
	{
	public:
		static ::System::Void UnboxPrimitive(::IFix::Core::Value* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::IFix::Core::Value*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_UNBOXPRIMITIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Object* mGet(::System::Boolean a1, ::System::Object* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Reflection::FieldInfo*>* a5, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* a6)
		{
			return ((::System::Object*(*)(::System::Boolean, ::System::Object*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_MGET_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void mSet(::System::Boolean a1, ::System::Object* a2, ::System::Object* a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5, ::Il2CppArray<::System::Reflection::FieldInfo*>* a6, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* a7)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::Object*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_MSET_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Object* ToObject(::IFix::Core::Value* a1, ::IFix::Core::Value* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Type* a4, ::IFix::Core::VirtualMachine* a5, ::System::Boolean a6)
		{
			return ((::System::Object*(*)(::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::IFix::Core::VirtualMachine*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_TOOBJECT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void PushObject(::IFix::Core::Value* a1, ::IFix::Core::Value* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Object* a4, ::System::Type* a5, ::IFix::Core::TypeInfo* a6)
		{
			return ((::System::Void(*)(::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::System::Type*, ::IFix::Core::TypeInfo*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_PUSHOBJECT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void UpdateReference(::IFix::Core::Value* a1, ::IFix::Core::Value* a2, ::Il2CppArray<::System::Object*>* a3, ::System::Object* a4, ::IFix::Core::VirtualMachine* a5, ::System::Type* a6)
		{
			return ((::System::Void(*)(::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::IFix::Core::VirtualMachine*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_UPDATEREFERENCE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
