#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_73954AF3A8FEBBA4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SECTR_MONOSECTRLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B15ED0)

namespace MoleMole::SECTR
{
	inline static constexpr unsigned int MonoSectrLayer_TypeDefinitionIndex = 74633;

	class MonoSectrLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Enum_3_73954AF3A8FEBBA4 layerType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SECTR_MONOSECTRLAYER__CTOR_OFFSET))(this);
		}
	};
}
