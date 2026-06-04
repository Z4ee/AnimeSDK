#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtCollision2DShapeConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_1B958FE25279B729_OFFSET UNITYSDK_OFFSET(0x19BD6CC0)
#define RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_2D7C71A76F6C2887_OFFSET UNITYSDK_OFFSET(0x19BD6A00)
#define RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_795F8C9780E4F652_OFFSET UNITYSDK_OFFSET(0x19BD6810)
#define RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_F13782A43962CDCB_OFFSET UNITYSDK_OFFSET(0x19BD6BB0)
#define RPG_GAMECORE_RTARCSHAPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BD6920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtArcShapeConfig_TypeDefinitionIndex = 16781;

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

		static ::System::Void Method_3_795F8C9780E4F652(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtArcShapeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtArcShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_795F8C9780E4F652_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D7C71A76F6C2887(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_2D7C71A76F6C2887_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F13782A43962CDCB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_F13782A43962CDCB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B958FE25279B729(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::RtArcShapeConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::RtArcShapeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTARCSHAPECONFIG_METHOD_3_1B958FE25279B729_OFFSET))(a1, a2);
		}
	};
}
