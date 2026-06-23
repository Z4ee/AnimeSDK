#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E664950)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E664990)
#define CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C___CTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x1E6649A0)

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int PlayerLoopRunner___c_TypeDefinitionIndex = 31477;

	class PlayerLoopRunner___c : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c** StaticGet___9()
		{
			return (::Cysharp::Threading::Tasks::Internal::PlayerLoopRunner___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopRunner___c_TypeDefinitionIndex)->GetStaticField(0x25970);
		}
		static ::System::Action_1<::System::Exception*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::System::Exception*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerLoopRunner___c_TypeDefinitionIndex)->GetStaticField(0x25978);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__9_0(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_PLAYERLOOPRUNNER___C___CTOR_B__9_0_OFFSET))(this, ex);
		}
	};
}
