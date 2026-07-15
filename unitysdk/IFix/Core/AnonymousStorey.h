#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System { class Type; }

#define IFIX_CORE_ANONYMOUSSTOREY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B533FD0)
#define IFIX_CORE_ANONYMOUSSTOREY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B534640)
#define IFIX_CORE_ANONYMOUSSTOREY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B534340)
#define IFIX_CORE_ANONYMOUSSTOREY_GET_OFFSET UNITYSDK_OFFSET(0x1B532FD0)
#define IFIX_CORE_ANONYMOUSSTOREY_LDFLD_OFFSET UNITYSDK_OFFSET(0x1B532DD0)
#define IFIX_CORE_ANONYMOUSSTOREY_OBJECTEQUALS_OFFSET UNITYSDK_OFFSET(0x1B533FC0)
#define IFIX_CORE_ANONYMOUSSTOREY_OBJECTGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B534330)
#define IFIX_CORE_ANONYMOUSSTOREY_OBJECTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1B5344C0)
#define IFIX_CORE_ANONYMOUSSTOREY_SET_OFFSET UNITYSDK_OFFSET(0x1B533BC0)
#define IFIX_CORE_ANONYMOUSSTOREY_STFLD_OFFSET UNITYSDK_OFFSET(0x1B532EE0)
#define IFIX_CORE_ANONYMOUSSTOREY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B5344D0)
#define IFIX_CORE_ANONYMOUSSTOREY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B532A90)

namespace IFix::Core
{
	inline static constexpr unsigned int AnonymousStorey_TypeDefinitionIndex = 9768;

	class AnonymousStorey : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* managedFields; // 0x10
		::IFix::Core::VirtualMachine* virtualMachine; // 0x18
		::Il2CppArray<::IFix::Core::Value>* unmanagedFields; // 0x20
		::System::Int32 finalizeMethodId; // 0x28
		::System::Int32 getHashCodeMethodId; // 0x2C
		::System::Int32 toStringMethodId; // 0x30
		::System::Int32 typeId; // 0x34
		::System::Int32 equalMethodId; // 0x38

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::IFix::Core::VirtualMachine* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Ldfld(::System::Int32 a1, ::IFix::Core::Value* a2, ::IFix::Core::Value* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_LDFLD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Stfld(::System::Int32 a1, ::IFix::Core::Value* a2, ::IFix::Core::Value* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_STFLD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* Get(::System::Int32 a1, ::System::Type* a2, ::IFix::Core::VirtualMachine* a3, ::System::Boolean a4)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*, ::IFix::Core::VirtualMachine*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_GET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Set(::System::Int32 a1, ::System::Object* a2, ::System::Type* a3, ::IFix::Core::VirtualMachine* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Type*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_SET_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ObjectEquals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_OBJECTEQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 ObjectGetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_OBJECTGETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ObjectToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_OBJECTTOSTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_TOSTRING_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_FINALIZE_OFFSET))(this);
		}
	};
}
