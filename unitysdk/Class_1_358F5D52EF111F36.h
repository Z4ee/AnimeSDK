#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B8CD4F1CB8207431;
namespace RPG::GameCore { class FiveDimGravitySwitchLineConfig; }

#define CLASS_1_358F5D52EF111F36_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5E7060)
#define CLASS_1_358F5D52EF111F36__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5E70F0)

inline static constexpr unsigned int Class_1_358F5D52EF111F36_TypeDefinitionIndex = 41866;

class Class_1_358F5D52EF111F36 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimGravitySwitchLineConfig* EABKOHGCHFP; // 0x10
	::Class_1_B8CD4F1CB8207431* BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358F5D52EF111F36__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_358F5D52EF111F36_CLEAR_OFFSET))(this);
	}
};
