#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SWITCHSTORYLINE_METHOD_3_41D97AE6CCE88BE3_OFFSET UNITYSDK_OFFSET(0x18EC0250)
#define RPG_GAMECORE_SWITCHSTORYLINE_METHOD_3_FC2EB1EE424E848A_OFFSET UNITYSDK_OFFSET(0x18EC02D0)
#define RPG_GAMECORE_SWITCHSTORYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC02A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchStoryLine_TypeDefinitionIndex = 19745;

	class SwitchStoryLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryLineID; // 0x18
		::System::UInt32 EntryID; // 0x1C
		::System::UInt32 LoadingType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHSTORYLINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_41D97AE6CCE88BE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchStoryLine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchStoryLine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHSTORYLINE_METHOD_3_41D97AE6CCE88BE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC2EB1EE424E848A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchStoryLine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchStoryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHSTORYLINE_METHOD_3_FC2EB1EE424E848A_OFFSET))(a1, a2);
		}
	};
}
