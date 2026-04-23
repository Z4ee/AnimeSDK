#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ADFD80)
#define RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ADFEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsConditionRow_TypeDefinitionIndex = 13675;

	class MessageContactsConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 FakeContactID; // 0x10
		::System::UInt32 TruthMissionCondition; // 0x14
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MessageContactsConditionRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MessageContactsConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
