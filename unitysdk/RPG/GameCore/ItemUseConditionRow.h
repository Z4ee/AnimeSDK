#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }

#define RPG_GAMECORE_ITEMUSECONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19866540)
#define RPG_GAMECORE_ITEMUSECONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19866B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ItemUseConditionRow_TypeDefinitionIndex = 13235;

	class ItemUseConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x10
		::System::UInt32 ItemID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSECONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ItemUseConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ItemUseConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMUSECONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
