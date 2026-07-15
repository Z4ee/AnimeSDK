#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_907;

#define RPG_CLIENT_ROGUEAEONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x173B0000)
#define RPG_CLIENT_ROGUEAEONDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x173B00E0)
#define RPG_CLIENT_ROGUEAEONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x173B00D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAeonData_TypeDefinitionIndex = 64468;

	class RogueAeonData : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 MaxLevel; // 0x14
		::System::UInt32 Exp; // 0x18
		::System::UInt32 AeonID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueAeonData* Create(::Class_1_D17272E82AE804C2_907* a1)
		{
			return ((::RPG::Client::RogueAeonData*(*)(::Class_1_D17272E82AE804C2_907*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Refresh(::Class_1_D17272E82AE804C2_907* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_907*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_REFRESH_OFFSET))(this, a1);
		}
	};
}
