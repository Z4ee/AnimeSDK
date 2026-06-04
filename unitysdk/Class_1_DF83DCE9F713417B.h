#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EGameDevPhasePage.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_DF83DCE9F713417B__CTOR_OFFSET UNITYSDK_OFFSET(0x134D9EB0)

inline static constexpr unsigned int Class_1_DF83DCE9F713417B_TypeDefinitionIndex = 57129;

class Class_1_DF83DCE9F713417B : public ::System::Object
{
public:
	::RPG::Client::EGameDevPhasePage Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF83DCE9F713417B__CTOR_OFFSET))(this);
	}
};
