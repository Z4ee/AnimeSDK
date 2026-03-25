#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_719;

#define RPG_CLIENT_ROGUEAEONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA2EB330)
#define RPG_CLIENT_ROGUEAEONDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0xA2EB410)
#define RPG_CLIENT_ROGUEAEONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA2EB400)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAeonData_TypeDefinitionIndex = 54980;

	class RogueAeonData : public ::System::Object
	{
	public:
		::System::UInt32 Level; // 0x10
		::System::UInt32 AeonID; // 0x14
		::System::UInt32 MaxLevel; // 0x18
		::System::UInt32 Exp; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueAeonData* Create(::Class_1_FA4F4A67B1C04320_719* proto)
		{
			return ((::RPG::Client::RogueAeonData*(*)(::Class_1_FA4F4A67B1C04320_719*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_CREATE_OFFSET))(proto);
		}

		::System::Void Refresh(::Class_1_FA4F4A67B1C04320_719* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_719*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONDATA_REFRESH_OFFSET))(this, proto);
		}
	};
}
