#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading::Tasks { class Task; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASTASK_B__35_0_OFFSET UNITYSDK_OFFSET(0x1CE18AB0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASUNITASK_B__33_0_OFFSET UNITYSDK_OFFSET(0x1CE18930)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE188E0)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE18920)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__48_0_OFFSET UNITYSDK_OFFSET(0x1CE18CB0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c_TypeDefinitionIndex = 42825;

	class UniTaskExtensions___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__48_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x62AB0);
		}
		static ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>** StaticGet___9__33_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x62AB8);
		}
		static ::Cysharp::Threading::Tasks::UniTaskExtensions___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTaskExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x62AC0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__35_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x62AC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Void _AsUniTask_b__33_0(::System::Threading::Tasks::Task* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASUNITASK_B__33_0_OFFSET))(this, a1, a2);
		}

		::System::Void _AsTask_b__35_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__ASTASK_B__35_0_OFFSET))(this, a1);
		}

		::System::Void _Forget_b__48_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__48_0_OFFSET))(this, a1);
		}
	};
}
