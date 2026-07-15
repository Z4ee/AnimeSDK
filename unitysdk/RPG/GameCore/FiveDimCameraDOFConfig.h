#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG_METHOD_2_4F22FC7EAFD5F733_OFFSET UNITYSDK_OFFSET(0x1BA8AF90)
#define RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA8BED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraDOFConfig_TypeDefinitionIndex = 17888;

	class FiveDimCameraDOFConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableDOF; // 0x10
		::System::Single NearFocalRegion; // 0x14
		::System::Single FarFocalRegion; // 0x18
		::System::Single NearTransitionRegion; // 0x1C
		::System::Single FarTransitionRegion; // 0x20
		::System::Single DampDuration; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4F22FC7EAFD5F733(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimCameraDOFConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimCameraDOFConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERADOFCONFIG_METHOD_2_4F22FC7EAFD5F733_OFFSET))(a1, a2);
		}
	};
}
