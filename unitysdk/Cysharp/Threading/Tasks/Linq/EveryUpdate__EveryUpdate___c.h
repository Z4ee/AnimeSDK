#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0D09F0)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0D0A30)
#define CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F0D0A40)

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int EveryUpdate__EveryUpdate___c_TypeDefinitionIndex = 45714;

	class EveryUpdate__EveryUpdate___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(EveryUpdate__EveryUpdate___c_TypeDefinitionIndex)->GetStaticField(0x1120);
		}
		static ::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Linq::EveryUpdate__EveryUpdate___c**)Il2CppClass::FromTypeDefinitionIndex(EveryUpdate__EveryUpdate___c_TypeDefinitionIndex)->GetStaticField(0x1128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__4_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_EVERYUPDATE__EVERYUPDATE___C___CTOR_B__4_0_OFFSET))(this, a1);
		}
	};
}
