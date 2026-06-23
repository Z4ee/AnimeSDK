#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_FEVERV3MATERIALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x11603A50)

namespace MoleMole
{
	inline static constexpr unsigned int FeverV3MaterialParam_TypeDefinitionIndex = 55040;

	class FeverV3MaterialParam : public ::System::Object
	{
	public:
		::System::String* LevelShowTextKey; // 0x10
		::System::Single ColorMoveSpeed; // 0x18
		::UnityEngine::Color DarkRampColorB; // 0x1C
		::UnityEngine::Color DarkRampColorA; // 0x2C
		::UnityEngine::Color RampColorB; // 0x3C
		::UnityEngine::Color RampColorA; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERV3MATERIALPARAM__CTOR_OFFSET))(this);
		}
	};
}
