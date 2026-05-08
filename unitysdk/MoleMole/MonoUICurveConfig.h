#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoUICurveData; }

#define MOLEMOLE_MONOUICURVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13EAA170)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUICurveConfig_TypeDefinitionIndex = 74643;

	class MonoUICurveConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::MoleMole::MonoUICurveData*>* curveDatas; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUICURVECONFIG__CTOR_OFFSET))(this);
		}
	};
}
