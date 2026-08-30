#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_168A06130EDC2DF6_OFFSET UNITYSDK_OFFSET(0x1CBB41D0)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_4F71478528B23EB8_OFFSET UNITYSDK_OFFSET(0x1CBB4190)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_BAD4C89873E84214_OFFSET UNITYSDK_OFFSET(0x1CBB3FE0)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_FA7EC3616CD59615_OFFSET UNITYSDK_OFFSET(0x1CBB3F90)
#define RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB3FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureByPropShowInfoId_TypeDefinitionIndex = 20237;

	class AdventureByPropShowInfoId : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::UInt32 TextureID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FA7EC3616CD59615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPropShowInfoId*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPropShowInfoId*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_FA7EC3616CD59615_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BAD4C89873E84214(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_BAD4C89873E84214_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_4F71478528B23EB8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_4F71478528B23EB8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_168A06130EDC2DF6(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdventureByPropShowInfoId* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdventureByPropShowInfoId*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREBYPROPSHOWINFOID_METHOD_4_168A06130EDC2DF6_OFFSET))(a1, a2);
		}
	};
}
