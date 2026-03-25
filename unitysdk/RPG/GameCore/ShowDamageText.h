#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ShowDamageTextType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SHOWDAMAGETEXT_METHOD_3_4E6208DFEB83981B_OFFSET UNITYSDK_OFFSET(0x176F8120)
#define RPG_GAMECORE_SHOWDAMAGETEXT_METHOD_3_C4EA692CD5193770_OFFSET UNITYSDK_OFFSET(0x176F80A0)
#define RPG_GAMECORE_SHOWDAMAGETEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x176F80F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowDamageText_TypeDefinitionIndex = 21798;

	class ShowDamageText : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ShowDamageTextType Type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDAMAGETEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C4EA692CD5193770(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDamageText*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDamageText*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDAMAGETEXT_METHOD_3_C4EA692CD5193770_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_4E6208DFEB83981B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDamageText* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDamageText*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDAMAGETEXT_METHOD_3_4E6208DFEB83981B_OFFSET))(a1, a2);
		}
	};
}
