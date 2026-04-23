#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define RPG_CLIENT_CAKEBUBBLEOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0xD4E60)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeBubbleOffset_TypeDefinitionIndex = 57994;

	struct alignas(4) CakeBubbleOffset
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single Z; // 0x18

		::System::Void _ctor(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKEBUBBLEOFFSET__CTOR_OFFSET))(this, x, y, z);
		}
	};
}
