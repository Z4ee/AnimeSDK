#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_489337A3B778C013_OFFSET UNITYSDK_OFFSET(0x1CCE2DC0)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_52ABC70D781638D5_OFFSET UNITYSDK_OFFSET(0x1CCD3740)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_745A8FC696CAB3AA_OFFSET UNITYSDK_OFFSET(0x1CCE2D60)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_8F79A3B93A9F8012_OFFSET UNITYSDK_OFFSET(0x1CCE3340)
#define RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD30F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtCollision2DShapeConfig_TypeDefinitionIndex = 17441;

	class RtCollision2DShapeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_52ABC70D781638D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCollision2DShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCollision2DShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_52ABC70D781638D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_745A8FC696CAB3AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_745A8FC696CAB3AA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_489337A3B778C013(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_489337A3B778C013_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_8F79A3B93A9F8012(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtCollision2DShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtCollision2DShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOLLISION2DSHAPECONFIG_METHOD_2_8F79A3B93A9F8012_OFFSET))(a1, a2);
		}
	};
}
