#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_METHOD_3_2DF6457012E4C843_OFFSET UNITYSDK_OFFSET(0x1D3C8680)
#define RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_METHOD_3_8DE496EE864E5680_OFFSET UNITYSDK_OFFSET(0x1D3C86C0)
#define RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C86B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyCacheCharacterAtlasFaceEmotion_TypeDefinitionIndex = 20628;

	class ApplyCacheCharacterAtlasFaceEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2DF6457012E4C843(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_METHOD_3_2DF6457012E4C843_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DE496EE864E5680(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_METHOD_3_8DE496EE864E5680_OFFSET))(a1, a2);
		}
	};
}
