#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }

#define RPG_GAMECORE_CHECKPREDICATEAXIS_METHOD_3_6914687B9E3F5717_OFFSET UNITYSDK_OFFSET(0x1E003A20)
#define RPG_GAMECORE_CHECKPREDICATEAXIS_METHOD_3_AC2552AB9FD42F3A_OFFSET UNITYSDK_OFFSET(0x1E003A60)
#define RPG_GAMECORE_CHECKPREDICATEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E003A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckPredicateAxis_TypeDefinitionIndex = 15341;

	class CheckPredicateAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::PredicateConfig* Predicate; // 0x10
		::RPG::GameCore::FixPoint SuccessScore; // 0x18
		::RPG::GameCore::FixPoint FailScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKPREDICATEAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6914687B9E3F5717(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckPredicateAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckPredicateAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKPREDICATEAXIS_METHOD_3_6914687B9E3F5717_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AC2552AB9FD42F3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckPredicateAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckPredicateAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKPREDICATEAXIS_METHOD_3_AC2552AB9FD42F3A_OFFSET))(a1, a2);
		}
	};
}
