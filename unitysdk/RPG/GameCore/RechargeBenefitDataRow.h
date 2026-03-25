#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RECHARGEBENEFITDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17584930)
#define RPG_GAMECORE_RECHARGEBENEFITDATAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17584B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeBenefitDataRow_TypeDefinitionIndex = 13343;

	class RechargeBenefitDataRow : public ::System::Object
	{
	public:
		::System::UInt32 Reward; // 0x10
		::System::UInt32 BenefitID; // 0x14
		::System::UInt32 ConsumeNum; // 0x18
		::RPG::Client::TextID GiftName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITDATAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RechargeBenefitDataRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RechargeBenefitDataRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITDATAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
