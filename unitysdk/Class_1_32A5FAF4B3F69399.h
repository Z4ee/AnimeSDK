#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E2DFEC5475995150;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_32A5FAF4B3F69399_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x1B362120)
#define CLASS_1_32A5FAF4B3F69399_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1B362AB0)
#define CLASS_1_32A5FAF4B3F69399_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1B367110)
#define CLASS_1_32A5FAF4B3F69399_METHOD_1_9133398E73B9D974_OFFSET UNITYSDK_OFFSET(0x1B362B10)
#define CLASS_1_32A5FAF4B3F69399__CTOR_OFFSET UNITYSDK_OFFSET(0x1B367040)

inline static constexpr unsigned int Class_1_32A5FAF4B3F69399_TypeDefinitionIndex = 88452;

class Class_1_32A5FAF4B3F69399 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E2DFEC5475995150*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E2DFEC5475995150*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32A5FAF4B3F69399__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_E2DFEC5475995150* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E2DFEC5475995150*))((::PBYTE)hIl2Cpp + CLASS_1_32A5FAF4B3F69399_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32A5FAF4B3F69399_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_1_9133398E73B9D974(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32A5FAF4B3F69399_METHOD_1_9133398E73B9D974_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32A5FAF4B3F69399_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
