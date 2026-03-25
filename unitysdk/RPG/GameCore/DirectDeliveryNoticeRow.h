#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DIRECTDELIVERYNOTICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x171720D0)
#define RPG_GAMECORE_DIRECTDELIVERYNOTICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17172280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DirectDeliveryNoticeRow_TypeDefinitionIndex = 11991;

	class DirectDeliveryNoticeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::UInt32 ActivityModule; // 0x18
		::System::UInt32 UnlockQuestId; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIRECTDELIVERYNOTICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DirectDeliveryNoticeRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DirectDeliveryNoticeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIRECTDELIVERYNOTICEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
