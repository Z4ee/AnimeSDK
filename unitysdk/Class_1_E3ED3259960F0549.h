#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_33B50469231C7D95;

#define CLASS_1_E3ED3259960F0549_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC525F70)
#define CLASS_1_E3ED3259960F0549_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xC525E70)
#define CLASS_1_E3ED3259960F0549_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC525E30)
#define CLASS_1_E3ED3259960F0549__CTOR_OFFSET UNITYSDK_OFFSET(0xC525DA0)

inline static constexpr unsigned int Class_1_E3ED3259960F0549_TypeDefinitionIndex = 68275;

class Class_1_E3ED3259960F0549 : public ::System::Object
{
public:
	::Class_1_33B50469231C7D95* ABCNDHBFNBC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3ED3259960F0549__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3ED3259960F0549_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3ED3259960F0549_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3ED3259960F0549_DISPOSE_OFFSET))(this);
	}
};
