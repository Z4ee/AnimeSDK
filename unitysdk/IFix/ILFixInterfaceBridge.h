#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"

namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define IFIX_ILFIXINTERFACEBRIDGE_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x123D5400)
#define IFIX_ILFIXINTERFACEBRIDGE_REFASYNCBUILDERSTARTMETHOD_OFFSET UNITYSDK_OFFSET(0x123D6480)
#define IFIX_ILFIXINTERFACEBRIDGE_REFAWAITUNSAFEONCOMPLETEMETHOD_OFFSET UNITYSDK_OFFSET(0x123D6350)
#define IFIX_ILFIXINTERFACEBRIDGE_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x123D5520)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x123D5D90)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x123D5F70)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x123D5960)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x123D5BB0)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x123D5660)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x123D5530)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x123D5840)
#define IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x123D5A90)
#define IFIX_ILFIXINTERFACEBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x123D6150)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_TypeDefinitionIndex = 95378;

	class ILFixInterfaceBridge : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_4; // 0x40
		::System::Int32 methodId_8; // 0x44
		::System::Int32 methodId_1; // 0x48
		::System::Int32 methodId_2; // 0x4C
		::System::Int32 methodId_7; // 0x50
		::System::Int32 methodId_0; // 0x54
		::System::Int32 methodId_5; // 0x58
		::System::Int32 methodId_6; // 0x5C
		::System::Int32 methodId_3; // 0x60
		::System::Int32 methodId_9; // 0x64

		::System::Void _ctor(::System::Int32 fieldNum, ::Il2CppArray<::System::Int32>* fieldTypes, ::System::Int32 typeIndex, ::Il2CppArray<::System::Int32>* vTable, ::Il2CppArray<::System::Int32>* methodIdArray, ::IFix::Core::VirtualMachine* virtualMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE__CTOR_OFFSET))(this, fieldNum, fieldTypes, typeIndex, vTable, methodIdArray, virtualMachine);
		}

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SETSTATEMACHINE_OFFSET))(this, P0);
		}

		::System::Boolean System_Collections_IEnumerator_MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerable_System_Object__GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_OBJECT__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void RefAwaitUnsafeOnCompleteMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_REFAWAITUNSAFEONCOMPLETEMETHOD_OFFSET))(this);
		}

		::System::Void RefAsyncBuilderStartMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_REFASYNCBUILDERSTARTMETHOD_OFFSET))(this);
		}
	};
}
