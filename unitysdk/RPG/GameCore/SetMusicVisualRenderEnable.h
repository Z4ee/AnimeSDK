#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MusicVisualizeSourceType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_METHOD_3_7D67D31B9877EFF2_OFFSET UNITYSDK_OFFSET(0x1D5092D0)
#define RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_METHOD_3_DE13FAE8152F4CEC_OFFSET UNITYSDK_OFFSET(0x1D509250)
#define RPG_GAMECORE_SETMUSICVISUALRENDERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5092A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetMusicVisualRenderEnable_TypeDefinitionIndex = 22064;

	class SetMusicVisualRenderEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::RPG::GameCore::MusicVisualizeSourceType SourceType; // 0x1C
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICVISUALRENDERENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE13FAE8152F4CEC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMusicVisualRenderEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMusicVisualRenderEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_METHOD_3_DE13FAE8152F4CEC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D67D31B9877EFF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetMusicVisualRenderEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetMusicVisualRenderEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETMUSICVISUALRENDERENABLE_METHOD_3_7D67D31B9877EFF2_OFFSET))(a1, a2);
		}
	};
}
