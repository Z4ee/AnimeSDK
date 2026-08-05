#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoParabolicMotion; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoParabolicMotion_Class_1_873D74741F264BDF; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x118E2360)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x118E2A30)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x118E2A90)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x118E2A40)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x118E2350)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E__CTOR_OFFSET UNITYSDK_OFFSET(0x118E2340)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoParabolicMotion_Class_1_E6C6D0AA39179D6E_TypeDefinitionIndex = 65303;

	class MonoParabolicMotion_Class_1_E6C6D0AA39179D6E : public ::System::Object
	{
	public:
		::MoleMole::MiniGame::BangbooPartyGame::MonoParabolicMotion_Class_1_873D74741F264BDF* Field_1_14; // 0x10
		::MoleMole::MiniGame::BangbooPartyGame::MonoParabolicMotion_Class_1_873D74741F264BDF* Field_1_13; // 0x18
		::MoleMole::MiniGame::BangbooPartyGame::MonoParabolicMotion* Field_1_7; // 0x20
		::System::Object* Field_1_0; // 0x28
		::System::Single Field_1_15; // 0x30
		::System::Single Field_1_9; // 0x34
		::UnityEngine::Vector3 Field_1_4; // 0x38
		::System::Int32 Field_1_1; // 0x44
		::UnityEngine::Vector3 Field_1_11; // 0x48
		::UnityEngine::Vector3 Field_1_6; // 0x54
		::System::Single Field_1_8; // 0x60
		::UnityEngine::Vector3 Field_1_10; // 0x64
		::UnityEngine::Vector3 Field_1_5; // 0x70

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
