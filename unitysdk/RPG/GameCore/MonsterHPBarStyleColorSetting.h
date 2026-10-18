#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING_METHOD_2_8491CEC2D2302090_OFFSET UNITYSDK_OFFSET(0x1D8B6870)
#define RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterHPBarStyleColorSetting_TypeDefinitionIndex = 17154;

	class MonsterHPBarStyleColorSetting : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LeftColor; // 0x10
		::System::String* RightColor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_8491CEC2D2302090(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterHPBarStyleColorSetting*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterHPBarStyleColorSetting*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERHPBARSTYLECOLORSETTING_METHOD_2_8491CEC2D2302090_OFFSET))(a1, a2);
		}
	};
}
