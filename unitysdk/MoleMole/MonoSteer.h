#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_D33A7AE9308D51C5;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_MONOSTEER_GETSTEER_OFFSET UNITYSDK_OFFSET(0x129D4630)
#define MOLEMOLE_MONOSTEER__CTOR_OFFSET UNITYSDK_OFFSET(0x129D4A00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSteer_TypeDefinitionIndex = 82997;

	class MonoSteer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTEER__CTOR_OFFSET))(this);
		}

		::Class_1_D33A7AE9308D51C5* GetSteer(::MoleMole::Battle::Entity* a1)
		{
			return ((::Class_1_D33A7AE9308D51C5*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTEER_GETSTEER_OFFSET))(this, a1);
		}
	};
}
