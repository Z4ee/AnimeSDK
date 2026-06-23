#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Battle { class CurveMoveComponent_Config; }

#define MOLEMOLE_MONOMOVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12644570)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMoveData_TypeDefinitionIndex = 45274;

	class MonoMoveData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Battle::CurveMoveComponent_Config* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMOVEDATA__CTOR_OFFSET))(this);
		}
	};
}
