#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseSortConfig.h"
#include "unitysdk/RPG/GameCore/ResolveMultiValueType.h"
#include "unitysdk/RPG/GameCore/SortRuleType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_METHOD_3_A4A183812FCEAB30_OFFSET UNITYSDK_OFFSET(0x18E74330)
#define RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_METHOD_3_EE157DAECBF6D6A6_OFFSET UNITYSDK_OFFSET(0x18E742D0)
#define RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x18E74320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SortByModifierDynamicFloat_TypeDefinitionIndex = 17349;

	class SortByModifierDynamicFloat : public ::RPG::GameCore::BaseSortConfig
	{
	public:
		::RPG::GameCore::SortRuleType SortRule; // 0x10
		::RPG::GameCore::ResolveMultiValueType ResolveType; // 0x14
		::System::String* ModifierName; // 0x18
		::System::String* DynamicFloatKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EE157DAECBF6D6A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SortByModifierDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SortByModifierDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_METHOD_3_EE157DAECBF6D6A6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4A183812FCEAB30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SortByModifierDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SortByModifierDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SORTBYMODIFIERDYNAMICFLOAT_METHOD_3_A4A183812FCEAB30_OFFSET))(a1, a2);
		}
	};
}
