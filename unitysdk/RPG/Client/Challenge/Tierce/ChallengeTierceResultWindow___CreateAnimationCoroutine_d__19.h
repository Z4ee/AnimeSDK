#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceResultWindow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xCA03CD0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCA04C60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xCA04CC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xCA04C70)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA03CC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0xCA03A70)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceResultWindow___CreateAnimationCoroutine_d__19_TypeDefinitionIndex = 80214;

	class ChallengeTierceResultWindow___CreateAnimationCoroutine_d__19 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceResultWindow* __4__this; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* _newlyFinishedTargetIndices_5__2; // 0x18
		::System::Object* __2__current; // 0x20
		::System::Int32 __1__state; // 0x28
		::System::Single _remainingSeconds_5__3; // 0x2C
		::System::Int32 _i_5__4; // 0x30

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERESULTWINDOW___CREATEANIMATIONCOROUTINE_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
