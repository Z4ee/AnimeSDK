#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_122067D0A8418347_OFFSET UNITYSDK_OFFSET(0x18D832F0)
#define RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_2D7C71A76F6C2887_OFFSET UNITYSDK_OFFSET(0x18DC0210)
#define RPG_GAMECORE_RTARCSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC03C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtArcShapeConfig_TypeDefinitionIndex = 16764;

	class RtArcShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* RadiusMin; // 0x10
		::RPG::GameCore::DynamicFloat* RadiusMax; // 0x18
		::RPG::GameCore::DynamicFloat* Angle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_122067D0A8418347(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtArcShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtArcShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_122067D0A8418347_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D7C71A76F6C2887(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_2D7C71A76F6C2887_OFFSET))(a1, a2);
		}
	};
}
