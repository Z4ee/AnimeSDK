#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_804;

#define CLASS_1_50210DAEB46E0CD5_METHOD_1_2B738AE70D3C61BA_OFFSET UNITYSDK_OFFSET(0x18378290)
#define CLASS_1_50210DAEB46E0CD5_METHOD_1_625B96B1E6C6C5C1_OFFSET UNITYSDK_OFFSET(0x18378230)
#define CLASS_1_50210DAEB46E0CD5__CTOR_OFFSET UNITYSDK_OFFSET(0x183787B0)

inline static constexpr unsigned int Class_1_50210DAEB46E0CD5_TypeDefinitionIndex = 61821;

class Class_1_50210DAEB46E0CD5 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50210DAEB46E0CD5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_625B96B1E6C6C5C1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_50210DAEB46E0CD5_METHOD_1_625B96B1E6C6C5C1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2B738AE70D3C61BA(::System::UInt32 a1, ::System::UInt32 a2, ::Class_0_16E4307DCC419505_804* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_0_16E4307DCC419505_804*))((::PBYTE)hIl2Cpp + CLASS_1_50210DAEB46E0CD5_METHOD_1_2B738AE70D3C61BA_OFFSET))(this, a1, a2, a3);
	}
};
