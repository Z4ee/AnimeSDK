#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Subway/AirshipSubwayEmitter_SubData.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::Subway
{
	inline static constexpr unsigned int AirshipSubwayEmitter_SubPrefab_TypeDefinitionIndex = 64529;

	struct alignas(8) AirshipSubwayEmitter_SubPrefab
	{
		::System::Single Weight; // 0x10
		::Il2CppArray<::RPG::Client::Subway::AirshipSubwayEmitter_SubData>* Subs; // 0x18
	};
}
