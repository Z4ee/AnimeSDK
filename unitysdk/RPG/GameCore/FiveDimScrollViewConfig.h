#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimScrollViewType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MRect.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_METHOD_3_7A7DC23F44E44D92_OFFSET UNITYSDK_OFFSET(0x17207FF0)
#define RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_METHOD_3_7A9E306ECE7247D5_OFFSET UNITYSDK_OFFSET(0x17207F80)
#define RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17207FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimScrollViewConfig_TypeDefinitionIndex = 17012;

	class FiveDimScrollViewConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::FiveDimScrollViewType ScrollViewType; // 0x10
		::RPG::MRect HardRect; // 0x14
		::RPG::MRect SoftRect; // 0x24
		::RPG::MRect ViewRect; // 0x34
		::RPG::MVector2 InitScrollValue; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7A9E306ECE7247D5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimScrollViewConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimScrollViewConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_METHOD_3_7A9E306ECE7247D5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A7DC23F44E44D92(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimScrollViewConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimScrollViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLVIEWCONFIG_METHOD_3_7A7DC23F44E44D92_OFFSET))(a1, a2);
		}
	};
}
