#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collision; }

#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__BUILDENTITYCOMPONENT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B4E4EB0)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4E4E60)
#define MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E4EA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HackerLittleRobotTrait___c_TypeDefinitionIndex = 77334;

	class HackerLittleRobotTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::HackerLittleRobotTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::HackerLittleRobotTrait___c**)Il2CppClass::FromTypeDefinitionIndex(HackerLittleRobotTrait___c_TypeDefinitionIndex)->GetStaticField(0x36590);
		}
		static ::System::Action_2<::MoleMole::EntityHandle, ::UnityEngine::Collision*>** StaticGet___9__11_0()
		{
			return (::System::Action_2<::MoleMole::EntityHandle, ::UnityEngine::Collision*>**)Il2CppClass::FromTypeDefinitionIndex(HackerLittleRobotTrait___c_TypeDefinitionIndex)->GetStaticField(0x36598);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Void _BuildEntityComponent_b__11_0(::MoleMole::EntityHandle entityHandle, ::UnityEngine::Collision* collision)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Collision*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HACKERLITTLEROBOTTRAIT___C__BUILDENTITYCOMPONENT_B__11_0_OFFSET))(this, entityHandle, collision);
		}
	};
}
