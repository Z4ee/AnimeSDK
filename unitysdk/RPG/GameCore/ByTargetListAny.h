#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_373CF37507C948F4_OFFSET UNITYSDK_OFFSET(0x1703CFB0)
#define RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_9C8B1B47BF9557E4_OFFSET UNITYSDK_OFFSET(0x1703CEE0)
#define RPG_GAMECORE_BYTARGETLISTANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1703CF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetListAny_TypeDefinitionIndex = 22071;

	class ByTargetListAny : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9C8B1B47BF9557E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAny*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAny*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_9C8B1B47BF9557E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_373CF37507C948F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetListAny* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetListAny*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETLISTANY_METHOD_4_373CF37507C948F4_OFFSET))(a1, a2);
		}
	};
}
