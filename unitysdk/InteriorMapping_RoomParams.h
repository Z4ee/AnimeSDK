#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define INTERIORMAPPING_ROOMPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E813470)

inline static constexpr unsigned int InteriorMapping_RoomParams_TypeDefinitionIndex = 34644;

class InteriorMapping_RoomParams : public ::System::Object
{
public:
	::System::Int32 x; // 0x10
	::System::Int32 y; // 0x14
	::System::Single depth; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INTERIORMAPPING_ROOMPARAMS__CTOR_OFFSET))(this);
	}
};
