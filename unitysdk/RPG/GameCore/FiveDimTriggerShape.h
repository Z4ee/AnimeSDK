#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_METHOD_3_0DF9C32F54D75735_OFFSET UNITYSDK_OFFSET(0x18923630)
#define RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_METHOD_3_22C96C8C929895F9_OFFSET UNITYSDK_OFFSET(0x1890A210)
#define RPG_GAMECORE_FIVEDIMTRIGGERSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18923610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerShape_TypeDefinitionIndex = 17599;

	class FiveDimTriggerShape : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean UseTriggerFromView; // 0x10
		::System::String* TriggerName; // 0x18
		::RPG::GameCore::LevelTriggerInfo* TriggerInfo; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSHAPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22C96C8C929895F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerShape*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerShape*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_METHOD_3_22C96C8C929895F9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0DF9C32F54D75735(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerShape* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerShape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGERSHAPE_METHOD_3_0DF9C32F54D75735_OFFSET))(a1, a2);
		}
	};
}
