#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_955621D44B53D133_OFFSET UNITYSDK_OFFSET(0x175794D0)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_C4500D5780F49227_OFFSET UNITYSDK_OFFSET(0x17579400)
#define RPG_GAMECORE_RA_BYCONTAINENTITYTAG__CTOR_OFFSET UNITYSDK_OFFSET(0x17579480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_ByContainEntityTag_TypeDefinitionIndex = 18322;

	class RA_ByContainEntityTag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::EntityTag>* EntityTags; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C4500D5780F49227(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByContainEntityTag*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByContainEntityTag*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_C4500D5780F49227_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_955621D44B53D133(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RA_ByContainEntityTag* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RA_ByContainEntityTag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_BYCONTAINENTITYTAG_METHOD_4_955621D44B53D133_OFFSET))(a1, a2);
		}
	};
}
