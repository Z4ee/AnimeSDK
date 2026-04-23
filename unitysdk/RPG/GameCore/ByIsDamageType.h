#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_3238A7661D414756_OFFSET UNITYSDK_OFFSET(0x187510D0)
#define RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_D6706E5127EB29D6_OFFSET UNITYSDK_OFFSET(0x18751000)
#define RPG_GAMECORE_BYISDAMAGETYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x18751080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageType_TypeDefinitionIndex = 22486;

	class ByIsDamageType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* DamageTypeList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6706E5127EB29D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_D6706E5127EB29D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3238A7661D414756(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsDamageType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsDamageType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGETYPE_METHOD_4_3238A7661D414756_OFFSET))(a1, a2);
		}
	};
}
