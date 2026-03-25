#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_7EB68258E8154814_OFFSET UNITYSDK_OFFSET(0x1702DE00)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_DB436A1AB89C214F_OFFSET UNITYSDK_OFFSET(0x1702DF20)
#define RPG_GAMECORE_BYISFAKESKILLBYNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1702DEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsFakeSkillByName_TypeDefinitionIndex = 21214;

	class ByIsFakeSkillByName : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::String* TriggerKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7EB68258E8154814(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillByName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillByName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_7EB68258E8154814_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DB436A1AB89C214F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsFakeSkillByName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsFakeSkillByName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISFAKESKILLBYNAME_METHOD_4_DB436A1AB89C214F_OFFSET))(a1, a2);
		}
	};
}
