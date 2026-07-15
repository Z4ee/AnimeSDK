#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B86B1EABA6E666F2;
namespace RPG::GameCore { class FiveDimContactEventEmitterConfig; }

#define CLASS_1_F9F003D6AE4C8C22_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B17D470)
#define CLASS_1_F9F003D6AE4C8C22__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17D4D0)

inline static constexpr unsigned int Class_1_F9F003D6AE4C8C22_TypeDefinitionIndex = 40725;

class Class_1_F9F003D6AE4C8C22 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimContactEventEmitterConfig* Field_1_0; // 0x10
	::Class_1_B86B1EABA6E666F2* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9F003D6AE4C8C22__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9F003D6AE4C8C22_CLEAR_OFFSET))(this);
	}
};
