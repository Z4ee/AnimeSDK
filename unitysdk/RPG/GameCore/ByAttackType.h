#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYATTACKTYPE_METHOD_4_BBDCB21837290D52_OFFSET UNITYSDK_OFFSET(0x1871F140)
#define RPG_GAMECORE_BYATTACKTYPE_METHOD_4_FB6181DFE4F159C1_OFFSET UNITYSDK_OFFSET(0x1871F260)
#define RPG_GAMECORE_BYATTACKTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1871F1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByAttackType_TypeDefinitionIndex = 22478;

	class ByAttackType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackType>* AttackTypes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BBDCB21837290D52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_METHOD_4_BBDCB21837290D52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_FB6181DFE4F159C1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByAttackType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByAttackType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYATTACKTYPE_METHOD_4_FB6181DFE4F159C1_OFFSET))(a1, a2);
		}
	};
}
