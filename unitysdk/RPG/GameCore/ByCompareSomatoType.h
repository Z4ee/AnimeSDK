#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_69022A3173672BF5_OFFSET UNITYSDK_OFFSET(0x19532240)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_94FC18A4F8CB9F99_OFFSET UNITYSDK_OFFSET(0x19532070)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_D0B886BCD4283765_OFFSET UNITYSDK_OFFSET(0x19531FA0)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_F89974A49E0102C2_OFFSET UNITYSDK_OFFSET(0x195322C0)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x19532020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSomatoType_TypeDefinitionIndex = 22432;

	class ByCompareSomatoType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::Il2CppArray<::RPG::GameCore::CharacterSomatoType>* SomatoTypes; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D0B886BCD4283765(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSomatoType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSomatoType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_D0B886BCD4283765_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_94FC18A4F8CB9F99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_94FC18A4F8CB9F99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_69022A3173672BF5(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_69022A3173672BF5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F89974A49E0102C2(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareSomatoType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareSomatoType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_F89974A49E0102C2_OFFSET))(a1, a2);
		}
	};
}
