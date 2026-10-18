#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52E21E813AA435A9;
namespace RPG::Client { template <typename T> class PrefHashSet_1; }

#define CLASS_1_6D9B3D72179D5171___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A95B0)
#define CLASS_1_6D9B3D72179D5171___C__DISPLAYCLASS17_0___DETERMINEAUTOUNLOCKEDPATHPOINT_B__0_OFFSET UNITYSDK_OFFSET(0xB2A9940)

inline static constexpr unsigned int Class_1_6D9B3D72179D5171___c__DisplayClass17_0_TypeDefinitionIndex = 79764;

class Class_1_6D9B3D72179D5171___c__DisplayClass17_0 : public ::System::Object
{
public:
	::RPG::Client::PrefHashSet_1<::System::UInt32>* toSeePathIDSet; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D9B3D72179D5171___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __DetermineAutoUnlockedPathPoint_b__0(::Class_1_52E21E813AA435A9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_52E21E813AA435A9*))((::PBYTE)hIl2Cpp + CLASS_1_6D9B3D72179D5171___C__DISPLAYCLASS17_0___DETERMINEAUTOUNLOCKEDPATHPOINT_B__0_OFFSET))(this, a1);
	}
};
