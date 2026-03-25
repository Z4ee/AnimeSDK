#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_09D2C9D48E4787C6_OFFSET UNITYSDK_OFFSET(0x17015EF0)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_BFBC711682BA2846_OFFSET UNITYSDK_OFFSET(0x17015FC0)
#define RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x17015F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareScepterFuncType_TypeDefinitionIndex = 21330;

	class ByCompareScepterFuncType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::RogueMagicScepterFuncType Type; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_09D2C9D48E4787C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterFuncType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterFuncType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_09D2C9D48E4787C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFBC711682BA2846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareScepterFuncType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareScepterFuncType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESCEPTERFUNCTYPE_METHOD_4_BFBC711682BA2846_OFFSET))(a1, a2);
		}
	};
}
