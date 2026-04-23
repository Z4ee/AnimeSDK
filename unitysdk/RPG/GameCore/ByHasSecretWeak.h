#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_589660E036E34D29_OFFSET UNITYSDK_OFFSET(0x187493E0)
#define RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_BA34A453944E37B6_OFFSET UNITYSDK_OFFSET(0x187492C0)
#define RPG_GAMECORE_BYHASSECRETWEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x18749360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasSecretWeak_TypeDefinitionIndex = 21952;

	class ByHasSecretWeak : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BA34A453944E37B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSecretWeak*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSecretWeak*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_BA34A453944E37B6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_589660E036E34D29(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByHasSecretWeak* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByHasSecretWeak*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASSECRETWEAK_METHOD_4_589660E036E34D29_OFFSET))(a1, a2);
		}
	};
}
