#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateReijuDataItem; }

#define RPG_CLIENT_FATEREIJUSELECTSLOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA35A660)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuSelectSlotData_TypeDefinitionIndex = 58987;

	class FateReijuSelectSlotData : public ::System::Object
	{
	public:
		::RPG::Client::FateReijuDataItem* Reiju; // 0x10
		::System::UInt32 RerollCount; // 0x18

		::System::Void _ctor(::System::UInt32 reijuId, ::System::UInt32 rerollCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUSELECTSLOTDATA__CTOR_OFFSET))(this, reijuId, rerollCount);
		}
	};
}
