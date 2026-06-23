#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::MiniGame::BangbooPartyGame { class MonoParabolicMotion; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoParabolicMotion_Class_1_873D74741F264BDF; }

#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x182F9C50)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182FA340)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x182FA3A0)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x182FA350)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x182F9C40)
#define MOLEMOLE_MINIGAME_BANGBOOPARTYGAME_MONOPARABOLICMOTION_CLASS_1_E6C6D0AA39179D6E__CTOR_OFFSET UNITYSDK_OFFSET(0x182F9C30)

namespace MoleMole::MiniGame::BangbooPartyGame
{
	inline static constexpr unsigned int MonoParabolicMotion_Class_1_E6C6D0AA39179D6E_TypeDefinitionIndex = 44636;

	class MonoParabolicMotion_Class_1_E6C6D0AA39179D6E : public ::System::Object
	{
	public:
		::MoleMole::MiniGame::BangbooPartyGame::MonoParabolicMotion_Class_1_873D74741F264BDF* Field_1_11; // 0x10
		::MoleMole::MiniGame::BangbooPartyGame::MonoParabolicMotion_Class_1_873D74741F264BDF* Field_1_12; // 0x18
		::System::Object* Field_1_1; // 0x20
		::MoleMole::MiniGame::BangbooPartyGame::MonoParabolicMotion* Field_1_2; // 0x28
		::UnityEngine::Vector3 Field_1_6; // 0x30
		::System::Single Field_1_9; // 0x3C
		::System::Int32 Field_1_0; // 0x40
		::System::Single Field_1_8; // 0x44
		::UnityEngine::Vector3 Field_1_3; // 0x48
		::UnityEngine::Vector3 Field_1_4; // 0x54
		::UnityEngine::Vector3 Field_1_7; // 0x60
		::System::Single Field_1_10; // 0x6C
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
