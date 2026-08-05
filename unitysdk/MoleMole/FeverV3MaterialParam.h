#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define MOLEMOLE_FEVERV3MATERIALPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x19238BB0)

namespace MoleMole
{
	inline static constexpr unsigned int FeverV3MaterialParam_TypeDefinitionIndex = 87319;

	class FeverV3MaterialParam : public ::System::Object
	{
	public:
		::System::String* LevelShowTextKey; // 0x10
		::UnityEngine::Color RampColorB; // 0x18
		::UnityEngine::Color RampColorA; // 0x28
		::UnityEngine::Color DarkRampColorA; // 0x38
		::UnityEngine::Color DarkRampColorB; // 0x48
		::System::Single ColorMoveSpeed; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERV3MATERIALPARAM__CTOR_OFFSET))(this);
		}
	};
}
