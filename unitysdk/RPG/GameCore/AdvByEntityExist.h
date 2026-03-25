#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_75ED997B58287AB0_OFFSET UNITYSDK_OFFSET(0x16F26590)
#define RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_9C28652AF0061B1E_OFFSET UNITYSDK_OFFSET(0x16F26660)
#define RPG_GAMECORE_ADVBYENTITYEXIST__CTOR_OFFSET UNITYSDK_OFFSET(0x16F26610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvByEntityExist_TypeDefinitionIndex = 20436;

	class AdvByEntityExist : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_75ED997B58287AB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntityExist*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntityExist*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_75ED997B58287AB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9C28652AF0061B1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvByEntityExist* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvByEntityExist*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVBYENTITYEXIST_METHOD_4_9C28652AF0061B1E_OFFSET))(a1, a2);
		}
	};
}
