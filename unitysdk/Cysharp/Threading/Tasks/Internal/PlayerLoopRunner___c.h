#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D74F020)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D74F050)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1D74F060)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PlayerLoopRunner___c_TypeDefinitionIndex = 43077;

	class PlayerLoopRunner___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopRunner___c_TypeDefinitionIndex)->GetStaticField(0x61A80);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopRunner___c_TypeDefinitionIndex)->GetStaticField(0x61A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__9_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C___CTOR_B__9_0_OFFSET))(this, a1);
		}
	};
}
