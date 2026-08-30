#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PINBALLPUZZLELAUNCH_METHOD_3_3CF7D1FE614814CC_OFFSET UNITYSDK_OFFSET(0x1D32F9A0)
#define RPG_GAMECORE_PINBALLPUZZLELAUNCH_METHOD_3_8FC78A66366AE287_OFFSET UNITYSDK_OFFSET(0x1D32F9E0)
#define RPG_GAMECORE_PINBALLPUZZLELAUNCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32F9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PinballPuzzleLaunch_TypeDefinitionIndex = 21759;

	class PinballPuzzleLaunch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLELAUNCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3CF7D1FE614814CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PinballPuzzleLaunch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PinballPuzzleLaunch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLELAUNCH_METHOD_3_3CF7D1FE614814CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FC78A66366AE287(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PinballPuzzleLaunch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PinballPuzzleLaunch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINBALLPUZZLELAUNCH_METHOD_3_8FC78A66366AE287_OFFSET))(a1, a2);
		}
	};
}
