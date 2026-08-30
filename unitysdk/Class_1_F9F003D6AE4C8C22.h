#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B86B1EABA6E666F2;
namespace RPG::GameCore { class FiveDimContactEventEmitterConfig; }

#define CLASS_1_F9F003D6AE4C8C22_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BC96E20)
#define CLASS_1_F9F003D6AE4C8C22__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC96E80)

inline static constexpr unsigned int Class_1_F9F003D6AE4C8C22_TypeDefinitionIndex = 41678;

class Class_1_F9F003D6AE4C8C22 : public ::System::Object
{
public:
	::Class_1_B86B1EABA6E666F2* BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimContactEventEmitterConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9F003D6AE4C8C22__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9F003D6AE4C8C22_CLEAR_OFFSET))(this);
	}
};
