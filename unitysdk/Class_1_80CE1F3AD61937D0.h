#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SomatoCommonCameraConfig; }

#define CLASS_1_80CE1F3AD61937D0__CTOR_OFFSET UNITYSDK_OFFSET(0x163D1750)

inline static constexpr unsigned int Class_1_80CE1F3AD61937D0_TypeDefinitionIndex = 56675;

class Class_1_80CE1F3AD61937D0 : public ::System::Object
{
public:
	::RPG::GameCore::SomatoCommonCameraConfig* MHDMKLFLCCB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80CE1F3AD61937D0__CTOR_OFFSET))(this);
	}
};
