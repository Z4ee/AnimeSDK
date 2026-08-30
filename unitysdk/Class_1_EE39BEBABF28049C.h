#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3807A6AE84986224.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EE39BEBABF28049C_METHOD_1_CFE6FB160FFF5938_OFFSET UNITYSDK_OFFSET(0x178DCEC0)
#define CLASS_1_EE39BEBABF28049C__CTOR_OFFSET UNITYSDK_OFFSET(0x178DCF60)

inline static constexpr unsigned int Class_1_EE39BEBABF28049C_TypeDefinitionIndex = 62185;

class Class_1_EE39BEBABF28049C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_070964BB68D18B9F_2*>* FFBKHAIIFDC; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_3807A6AE84986224>* PIKEKIEHPHG; // 0x18
	::System::Int32 AJKEANNJFOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE39BEBABF28049C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CFE6FB160FFF5938()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EE39BEBABF28049C_METHOD_1_CFE6FB160FFF5938_OFFSET))(this);
	}
};
