#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_94FC18A4F8CB9F99_OFFSET UNITYSDK_OFFSET(0x1873BBD0)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE_METHOD_4_D0B886BCD4283765_OFFSET UNITYSDK_OFFSET(0x1873BB00)
#define RPG_GAMECORE_BYCOMPARESOMATOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1873BB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareSomatoType_TypeDefinitionIndex = 22720;

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
	};
}
