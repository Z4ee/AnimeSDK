#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Gradient; }

#define MOLEMOLE_LEVEL_BANGBOOFINDOBJCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16051FB0)

namespace MoleMole::Level
{
	inline static constexpr unsigned int BangbooFindObjConfig_TypeDefinitionIndex = 58167;

	class BangbooFindObjConfig : public ::System::Object
	{
	public:
		::UnityEngine::Gradient* outlineColorGradient; // 0x10
		::System::String* matPath; // 0x18
		::System::Boolean needGradientData; // 0x20
		::System::Single outlineAnimLifetime; // 0x24
		::System::Single outlineColorIntensity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_BANGBOOFINDOBJCONFIG__CTOR_OFFSET))(this);
		}
	};
}
