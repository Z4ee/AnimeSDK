#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SCREENPLAYERUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x143B6140)

inline static constexpr unsigned int ScreenPlayerUtil_TypeDefinitionIndex = 54983;

class ScreenPlayerUtil : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCREENPLAYERUTIL__CTOR_OFFSET))(this);
	}
};
