#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_086EF979BE80AA06_OFFSET UNITYSDK_OFFSET(0x1DCAD4C0)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_0A0F444FEAC5D6B8_OFFSET UNITYSDK_OFFSET(0x1DCAD360)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_44EA7C921DD05EE7_OFFSET UNITYSDK_OFFSET(0x1DCAD320)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_685933B36DB43CF1_OFFSET UNITYSDK_OFFSET(0x1DCAD490)
#define RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCAD350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorCustomFloatConfig_TypeDefinitionIndex = 18067;

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

		static ::System::Void Method_3_685933B36DB43CF1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_685933B36DB43CF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_086EF979BE80AA06(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::FloorCustomFloatConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORCUSTOMFLOATCONFIG_METHOD_3_086EF979BE80AA06_OFFSET))(a1, a2);
		}
	};
}
