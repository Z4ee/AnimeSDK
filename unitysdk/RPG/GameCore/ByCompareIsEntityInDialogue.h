#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_89EFB39455EF7E96_OFFSET UNITYSDK_OFFSET(0x1700C730)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_B522C25022764568_OFFSET UNITYSDK_OFFSET(0x1700C660)
#define RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1700C6E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsEntityInDialogue_TypeDefinitionIndex = 19209;

	class ByCompareIsEntityInDialogue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B522C25022764568(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsEntityInDialogue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_B522C25022764568_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_89EFB39455EF7E96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsEntityInDialogue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsEntityInDialogue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISENTITYINDIALOGUE_METHOD_4_89EFB39455EF7E96_OFFSET))(a1, a2);
		}
	};
}
