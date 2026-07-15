#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_STOPWINDOWSTAGE_METHOD_3_0141049C4E853747_OFFSET UNITYSDK_OFFSET(0x1B0C6AA0)
#define RPG_GAMECORE_STOPWINDOWSTAGE_METHOD_3_24527129CDD6508C_OFFSET UNITYSDK_OFFSET(0x1B0C6AE0)
#define RPG_GAMECORE_STOPWINDOWSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0C6AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopWindowStage_TypeDefinitionIndex = 20488;

	class StopWindowStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LittleGame; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPWINDOWSTAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0141049C4E853747(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopWindowStage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopWindowStage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPWINDOWSTAGE_METHOD_3_0141049C4E853747_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_24527129CDD6508C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StopWindowStage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StopWindowStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPWINDOWSTAGE_METHOD_3_24527129CDD6508C_OFFSET))(a1, a2);
		}
	};
}
