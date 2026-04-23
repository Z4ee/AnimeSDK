#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuff; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_METHOD_3_40CD5B3E2A165DCD_OFFSET UNITYSDK_OFFSET(0x190C7F70)
#define RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_METHOD_3_4BDC7F65FE396F74_OFFSET UNITYSDK_OFFSET(0x190C7EF0)
#define RPG_GAMECORE_TRIGGERMAZEBUFFSELECT__CTOR_OFFSET UNITYSDK_OFFSET(0x190C7F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMazeBuffSelect_TypeDefinitionIndex = 19370;

	class TriggerMazeBuffSelect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MazeBuff*>* BuffList; // 0x18
		::Il2CppArray<::System::String*>* CustomStringList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEBUFFSELECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4BDC7F65FE396F74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeBuffSelect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeBuffSelect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_METHOD_3_4BDC7F65FE396F74_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_40CD5B3E2A165DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerMazeBuffSelect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerMazeBuffSelect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAZEBUFFSELECT_METHOD_3_40CD5B3E2A165DCD_OFFSET))(a1, a2);
		}
	};
}
