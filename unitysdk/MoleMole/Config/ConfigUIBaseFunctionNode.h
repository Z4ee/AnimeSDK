#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define MOLEMOLE_CONFIG_CONFIGUIBASEFUNCTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIBaseFunctionNode_TypeDefinitionIndex = 75703;

	class ConfigUIBaseFunctionNode : public ::System::Object
	{
	public:
		::UnityEngine::Vector2 DrawPosition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIBASEFUNCTIONNODE__CTOR_OFFSET))(this);
		}
	};
}
