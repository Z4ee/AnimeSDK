#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_REPLACECHARACTEREMOTION_METHOD_3_10FCC374DC1D0542_OFFSET UNITYSDK_OFFSET(0x1DB8FFD0)
#define RPG_GAMECORE_REPLACECHARACTEREMOTION_METHOD_3_AB7027DF4DC1543D_OFFSET UNITYSDK_OFFSET(0x1DB8FF90)
#define RPG_GAMECORE_REPLACECHARACTEREMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8FFC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReplaceCharacterEmotion_TypeDefinitionIndex = 22164;

	class ReplaceCharacterEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* UniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACECHARACTEREMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AB7027DF4DC1543D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceCharacterEmotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceCharacterEmotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACECHARACTEREMOTION_METHOD_3_AB7027DF4DC1543D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_10FCC374DC1D0542(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReplaceCharacterEmotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReplaceCharacterEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REPLACECHARACTEREMOTION_METHOD_3_10FCC374DC1D0542_OFFSET))(a1, a2);
		}
	};
}
