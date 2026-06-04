#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_60E1BEC55B96577C__CTOR_OFFSET UNITYSDK_OFFSET(0xAC06930)

inline static constexpr unsigned int Class_2_60E1BEC55B96577C_TypeDefinitionIndex = 65679;

class Class_2_60E1BEC55B96577C : public ::System::Attribute
{
public:
	::RPG::Client::NotifyType Field_2_0; // 0x10

	::System::Void _ctor(::RPG::Client::NotifyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + CLASS_2_60E1BEC55B96577C__CTOR_OFFSET))(this, a1);
	}
};
