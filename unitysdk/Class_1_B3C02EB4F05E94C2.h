#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetAliasPrecedence.h"
#include "unitysdk/System/Object.h"

class Class_1_B3C02EB4F05E94C2_Class_3_9A1ADE0F4CE714BA;

#define CLASS_1_B3C02EB4F05E94C2__CTOR_OFFSET UNITYSDK_OFFSET(0x142667F0)

inline static constexpr unsigned int Class_1_B3C02EB4F05E94C2_TypeDefinitionIndex = 55198;

class Class_1_B3C02EB4F05E94C2 : public ::System::Object
{
public:
	::Class_1_B3C02EB4F05E94C2_Class_3_9A1ADE0F4CE714BA* Field_1_0; // 0x10
	::Class_1_B3C02EB4F05E94C2_Class_3_9A1ADE0F4CE714BA* Field_1_1; // 0x18
	::RPG::GameCore::TargetAliasPrecedence Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3C02EB4F05E94C2__CTOR_OFFSET))(this);
	}
};
