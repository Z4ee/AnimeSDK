#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_88DFF3A54E5DC81A_OFFSET UNITYSDK_OFFSET(0x16F27680)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_D9DD872FC9DD16D4_OFFSET UNITYSDK_OFFSET(0x16F275B0)
#define RPG_GAMECORE_ADVBYISINPHANTOMFROZEN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F27630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByIsInPhantomFrozen_TypeDefinitionIndex = 18901;

	class AdvByIsInPhantomFrozen : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D9DD872FC9DD16D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsInPhantomFrozen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_D9DD872FC9DD16D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88DFF3A54E5DC81A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByIsInPhantomFrozen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByIsInPhantomFrozen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYISINPHANTOMFROZEN_METHOD_4_88DFF3A54E5DC81A_OFFSET))(a1, a2);
		}
	};
}
