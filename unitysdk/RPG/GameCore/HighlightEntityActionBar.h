#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_METHOD_3_C93C9E074B08201F_OFFSET UNITYSDK_OFFSET(0x1B685350)
#define RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_METHOD_3_FFFE3DA12FCADB44_OFFSET UNITYSDK_OFFSET(0x1B685390)
#define RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B685380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HighlightEntityActionBar_TypeDefinitionIndex = 22845;

	class HighlightEntityActionBar : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C93C9E074B08201F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HighlightEntityActionBar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HighlightEntityActionBar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_METHOD_3_C93C9E074B08201F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFFE3DA12FCADB44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HighlightEntityActionBar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HighlightEntityActionBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIGHLIGHTENTITYACTIONBAR_METHOD_3_FFFE3DA12FCADB44_OFFSET))(a1, a2);
		}
	};
}
