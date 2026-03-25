#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_3947FBDA61BDB682_OFFSET UNITYSDK_OFFSET(0x170183C0)
#define RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_DB250444F20A9FBE_OFFSET UNITYSDK_OFFSET(0x170182F0)
#define RPG_GAMECORE_BYCOMPARESTAGEID__CTOR_OFFSET UNITYSDK_OFFSET(0x17018370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareStageID_TypeDefinitionIndex = 20753;

	class ByCompareStageID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* StageID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_DB250444F20A9FBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageID*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageID*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_DB250444F20A9FBE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3947FBDA61BDB682(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareStageID* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareStageID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESTAGEID_METHOD_4_3947FBDA61BDB682_OFFSET))(a1, a2);
		}
	};
}
