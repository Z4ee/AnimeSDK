#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_0D9CF3E739A130D6_OFFSET UNITYSDK_OFFSET(0x1CF49190)
#define RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_1D37C2F5DA72A900_OFFSET UNITYSDK_OFFSET(0x1CF491C0)
#define RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_796D736E12C2FA33_OFFSET UNITYSDK_OFFSET(0x1CF48FD0)
#define RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_D0F453910F8CA67A_OFFSET UNITYSDK_OFFSET(0x1CF49010)
#define RPG_GAMECORE_BYISSPLITDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF49000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsSplitDamage_TypeDefinitionIndex = 22751;

	class ByIsSplitDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_796D736E12C2FA33(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSplitDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSplitDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_796D736E12C2FA33_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0F453910F8CA67A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_D0F453910F8CA67A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D9CF3E739A130D6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_0D9CF3E739A130D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1D37C2F5DA72A900(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsSplitDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsSplitDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSPLITDAMAGE_METHOD_4_1D37C2F5DA72A900_OFFSET))(a1, a2);
		}
	};
}
