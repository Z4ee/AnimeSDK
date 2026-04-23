#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_METHOD_3_B310E5395281EFF8_OFFSET UNITYSDK_OFFSET(0x18DCC670)
#define RPG_GAMECORE_RTCIRCLESHAPECONFIG_METHOD_3_DA3B7D8B4ED68245_OFFSET UNITYSDK_OFFSET(0x18DCC800)
#define RPG_GAMECORE_RTCIRCLESHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18DCC7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCircleShapeConfig_TypeDefinitionIndex = 16762;

	class RtCircleShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Radius; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B310E5395281EFF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCircleShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCircleShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_METHOD_3_B310E5395281EFF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA3B7D8B4ED68245(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCircleShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCircleShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCIRCLESHAPECONFIG_METHOD_3_DA3B7D8B4ED68245_OFFSET))(a1, a2);
		}
	};
}
