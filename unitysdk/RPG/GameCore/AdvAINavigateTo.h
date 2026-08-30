#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NavigateTargetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVAINAVIGATETO_METHOD_3_824DBF1ED57B2245_OFFSET UNITYSDK_OFFSET(0x1D6A69D0)
#define RPG_GAMECORE_ADVAINAVIGATETO_METHOD_3_D17736E5B6275209_OFFSET UNITYSDK_OFFSET(0x1D6A6980)
#define RPG_GAMECORE_ADVAINAVIGATETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A69C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvAINavigateTo_TypeDefinitionIndex = 19769;

	class AdvAINavigateTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NavigateTargetMode Mode; // 0x20
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x24
		::RPG::GameCore::TargetEvaluator* NavigateTarget; // 0x28
		::RPG::MVector3 NavigatePosition; // 0x30
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x40
		::System::Boolean WaitFinish; // 0x48
		::System::Boolean TurnInPlaceInStart; // 0x49
		::System::Boolean TurnInPlaceInEnd; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAINAVIGATETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D17736E5B6275209(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAINavigateTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAINavigateTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAINAVIGATETO_METHOD_3_D17736E5B6275209_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_824DBF1ED57B2245(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvAINavigateTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvAINavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAINAVIGATETO_METHOD_3_824DBF1ED57B2245_OFFSET))(a1, a2);
		}
	};
}
