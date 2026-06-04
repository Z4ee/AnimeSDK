#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_0A0F444FEAC5D6B8_OFFSET UNITYSDK_OFFSET(0x19760D90)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_44EA7C921DD05EE7_OFFSET UNITYSDK_OFFSET(0x19760D50)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_4E5A3A43FA0B1B4B_OFFSET UNITYSDK_OFFSET(0x19760EC0)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_643D1015B1A24648_OFFSET UNITYSDK_OFFSET(0x19760EF0)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19760D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomFloatConfig_TypeDefinitionIndex = 17376;

	class FloorCustomFloatConfig : public ::RPG::GameCore::FloorCustomValueConfig
	{
	public:
		::System::Single DefaultValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_44EA7C921DD05EE7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomFloatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomFloatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_44EA7C921DD05EE7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A0F444FEAC5D6B8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_0A0F444FEAC5D6B8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E5A3A43FA0B1B4B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_4E5A3A43FA0B1B4B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_643D1015B1A24648(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_643D1015B1A24648_OFFSET))(a1, a2);
		}
	};
}
