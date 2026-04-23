#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RTPOINTSHAPECONFIG_METHOD_3_2C7244414219FEF7_OFFSET UNITYSDK_OFFSET(0x18DCC8D0)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG_METHOD_3_582719EFFF7D7506_OFFSET UNITYSDK_OFFSET(0x18DD5270)
#define RPG_GAMECORE_RTPOINTSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCC8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtPointShapeConfig_TypeDefinitionIndex = 16761;

	class RtPointShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_582719EFFF7D7506(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtPointShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtPointShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_METHOD_3_582719EFFF7D7506_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C7244414219FEF7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtPointShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtPointShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPOINTSHAPECONFIG_METHOD_3_2C7244414219FEF7_OFFSET))(a1, a2);
		}
	};
}
