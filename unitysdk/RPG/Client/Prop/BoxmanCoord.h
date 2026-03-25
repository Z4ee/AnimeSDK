#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_PROP_BOXMANCOORD_METHOD_2_1F6A322CBE32A536_OFFSET UNITYSDK_OFFSET(0xA016F30)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanCoord_TypeDefinitionIndex = 64291;

	struct alignas(4) BoxmanCoord
	{
		::System::Int32 Col; // 0x10
		::System::Int32 Row; // 0x14

		static ::RPG::Client::Prop::BoxmanCoord Method_2_1F6A322CBE32A536(::RPG::Client::Prop::BoxmanCoord a1, ::RPG::Client::Prop::BoxmanCoord a2)
		{
			return ((::RPG::Client::Prop::BoxmanCoord(*)(::RPG::Client::Prop::BoxmanCoord, ::RPG::Client::Prop::BoxmanCoord))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANCOORD_METHOD_2_1F6A322CBE32A536_OFFSET))(a1, a2);
		}
	};
}
