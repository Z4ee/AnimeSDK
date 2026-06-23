#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19131640)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_Config_TypeDefinitionIndex = 87220;

	class ParticleSection_Config : public ::System::Object
	{
	public:
		::System::String* particlePath; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CONFIG__CTOR_OFFSET))(this);
		}
	};
}
