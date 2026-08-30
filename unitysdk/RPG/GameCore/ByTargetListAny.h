#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_0D131FF2AD00E1AC_OFFSET UNITYSDK_OFFSET(0x1CDC8E40)
#define RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_373CF37507C948F4_OFFSET UNITYSDK_OFFSET(0x1CDC8C50)
#define RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_639A97BE4716DAF1_OFFSET UNITYSDK_OFFSET(0x1CDC8C10)
#define RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_CF27809E503167A2_OFFSET UNITYSDK_OFFSET(0x1CDC8E10)
#define RPG_GAMECORE_BYTARGETLISTANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDC8C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListAny_TypeDefinitionIndex = 23524;

	class ByTargetListAny : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_639A97BE4716DAF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAny*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_639A97BE4716DAF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_373CF37507C948F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_373CF37507C948F4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CF27809E503167A2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_CF27809E503167A2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0D131FF2AD00E1AC(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_0D131FF2AD00E1AC_OFFSET))(a1, a2);
		}
	};
}
