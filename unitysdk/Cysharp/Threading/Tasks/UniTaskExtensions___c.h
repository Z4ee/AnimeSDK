#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB43600)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB43640)
#define CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__41_0_OFFSET UNITYSDK_OFFSET(0x1FB43650)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions___c_TypeDefinitionIndex = 31917;

	class UniTaskExtensions___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTaskExtensions___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::UniTaskExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x27310);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__41_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UniTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x27318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Void _Forget_b__41_0(::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKEXTENSIONS___C__FORGET_B__41_0_OFFSET))(this, state);
		}
	};
}
