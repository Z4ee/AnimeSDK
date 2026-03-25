#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_7D61F42E75174C96_OFFSET UNITYSDK_OFFSET(0x16F246D0)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_A89502EA419E1368_OFFSET UNITYSDK_OFFSET(0x16F24600)
#define RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F24680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByCheckFarmElementActive_TypeDefinitionIndex = 20454;

	class AdvByCheckFarmElementActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A89502EA419E1368(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckFarmElementActive*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckFarmElementActive*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_A89502EA419E1368_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7D61F42E75174C96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByCheckFarmElementActive* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByCheckFarmElementActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYCHECKFARMELEMENTACTIVE_METHOD_4_7D61F42E75174C96_OFFSET))(a1, a2);
		}
	};
}
