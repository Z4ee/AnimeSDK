#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BatchAnimPlayState.h"
#include "unitysdk/System/Object.h"

#define BATCHANIMATIONGRAPHPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x180F9EC0)

inline static constexpr unsigned int BatchAnimationGraphPlayable_TypeDefinitionIndex = 34847;

class BatchAnimationGraphPlayable : public ::System::Object
{
public:
	::System::Int32 clipIndex; // 0x10
	::System::Single speed; // 0x14
	::System::Boolean cache; // 0x18
	::System::Int32 fadeInFrame; // 0x1C
	::BatchAnimPlayState playState; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BATCHANIMATIONGRAPHPLAYABLE__CTOR_OFFSET))(this);
	}
};
