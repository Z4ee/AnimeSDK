#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_2C1BB56590FB1A60_OFFSET UNITYSDK_OFFSET(0x19BEF540)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_5638064EFEFB10A2_OFFSET UNITYSDK_OFFSET(0x19BE5EC0)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_9621A7EB95C742F0_OFFSET UNITYSDK_OFFSET(0x19BEF5F0)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_EA0782E7522602E1_OFFSET UNITYSDK_OFFSET(0x19BE6400)
#define RPG_GAMECORE_RTRECTSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BE5E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtRectShapeConfig_TypeDefinitionIndex = 16780;

	class RtRectShapeConfig : public ::RPG::GameCore::RtCollision2DShapeConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* x; // 0x10
		::RPG::GameCore::DynamicFloat* y; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C1BB56590FB1A60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtRectShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtRectShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_2C1BB56590FB1A60_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5638064EFEFB10A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_5638064EFEFB10A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EA0782E7522602E1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_EA0782E7522602E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9621A7EB95C742F0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_9621A7EB95C742F0_OFFSET))(a1, a2);
		}
	};
}
