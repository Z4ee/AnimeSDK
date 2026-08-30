#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGFESITEMRULEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E015AB0)
#define RPG_GAMECORE_CHENLINGFESITEMRULEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1E015C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesItemRuleGroupRow_TypeDefinitionIndex = 11088;

	class ChenLingFesItemRuleGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ItemRareWeight; // 0x10
		::Il2CppArray<::System::UInt32>* ItemList; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMRULEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesItemRuleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESITEMRULEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
