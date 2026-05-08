#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/Value.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System { class Type; }

#define IFIX_CORE_ANONYMOUSSTOREY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A78B270)
#define IFIX_CORE_ANONYMOUSSTOREY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A78B930)
#define IFIX_CORE_ANONYMOUSSTOREY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A78B550)
#define IFIX_CORE_ANONYMOUSSTOREY_GET_OFFSET UNITYSDK_OFFSET(0x1A78A420)
#define IFIX_CORE_ANONYMOUSSTOREY_LDFLD_OFFSET UNITYSDK_OFFSET(0x1A78A180)
#define IFIX_CORE_ANONYMOUSSTOREY_OBJECTEQUALS_OFFSET UNITYSDK_OFFSET(0x1A78B260)
#define IFIX_CORE_ANONYMOUSSTOREY_OBJECTGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A78B540)
#define IFIX_CORE_ANONYMOUSSTOREY_OBJECTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1A78B6D0)
#define IFIX_CORE_ANONYMOUSSTOREY_SET_OFFSET UNITYSDK_OFFSET(0x1A78AEE0)
#define IFIX_CORE_ANONYMOUSSTOREY_STFLD_OFFSET UNITYSDK_OFFSET(0x1A78A2E0)
#define IFIX_CORE_ANONYMOUSSTOREY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A78B710)
#define IFIX_CORE_ANONYMOUSSTOREY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A789E30)

namespace IFix::Core
{
	inline static constexpr unsigned int AnonymousStorey_TypeDefinitionIndex = 6793;

	class AnonymousStorey : public ::System::Object
	{
	public:
		::Il2CppArray<::IFix::Core::Value>* unmanagedFields; // 0x10
		::Il2CppArray<::System::Object*>* managedFields; // 0x18
		::System::Int32 typeId; // 0x20
		::IFix::Core::VirtualMachine* virtualMachine; // 0x28
		::System::Int32 equalMethodId; // 0x30
		::System::Int32 finalizeMethodId; // 0x34
		::System::Int32 getHashCodeMethodId; // 0x38
		::System::Int32 toStringMethodId; // 0x3C

		::System::Void _ctor(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeID, ::Il2CppArray<::System::Int32>* vTable, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY__CTOR_OFFSET))(this, fieldNum, fieldTypes, typeID, vTable, virtualMachine);
		}

		::System::Void Ldfld(::System::Int32 fieldIndex, ::IFix::Core::Value* evaluationStackBase, ::IFix::Core::Value* evaluationStackPointer, ::Il2CppArray<::System::Object*>* managedStack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_LDFLD_OFFSET))(this, fieldIndex, evaluationStackBase, evaluationStackPointer, managedStack);
		}

		::System::Void Stfld(::System::Int32 fieldIndex, ::IFix::Core::Value* evaluationStackBase, ::IFix::Core::Value* evaluationStackPointer, ::Il2CppArray<::System::Object*>* managedStack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::IFix::Core::Value*, ::IFix::Core::Value*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_STFLD_OFFSET))(this, fieldIndex, evaluationStackBase, evaluationStackPointer, managedStack);
		}

		::System::Object* Get(::System::Int32 fieldIndex, ::System::Type* type, ::IFix::Core::VirtualMachine* virtualMachine, ::System::Boolean valueTypeClone)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*, ::IFix::Core::VirtualMachine*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_GET_OFFSET))(this, fieldIndex, type, virtualMachine, valueTypeClone);
		}

		::System::Void Set(::System::Int32 fieldIndex, ::System::Object* obj, ::System::Type* type, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Type*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_SET_OFFSET))(this, fieldIndex, obj, type, virtualMachine);
		}

		::System::Boolean ObjectEquals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_OBJECTEQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFIX_CORE_ANONYMOUSSTOREY_EQUALS_OFFSET))(this, obj);
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
