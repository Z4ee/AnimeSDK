#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_2C1BB56590FB1A60_OFFSET UNITYSDK_OFFSET(0x1CCEC450)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_3FE7DB56596427A7_OFFSET UNITYSDK_OFFSET(0x1CCEC500)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_5638064EFEFB10A2_OFFSET UNITYSDK_OFFSET(0x1CCE2C20)
#define RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_EC72B2FDEFF21D74_OFFSET UNITYSDK_OFFSET(0x1CCE3290)
#define RPG_GAMECORE_RTRECTSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCE2B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtRectShapeConfig_TypeDefinitionIndex = 17444;

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

		static ::System::Void Method_3_EC72B2FDEFF21D74(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_EC72B2FDEFF21D74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3FE7DB56596427A7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtRectShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtRectShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTRECTSHAPECONFIG_METHOD_3_3FE7DB56596427A7_OFFSET))(a1, a2);
		}
	};
}
