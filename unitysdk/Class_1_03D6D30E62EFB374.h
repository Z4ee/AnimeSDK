#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_149;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03D6D30E62EFB374_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xB856C40)
#define CLASS_1_03D6D30E62EFB374_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xB856B90)
#define CLASS_1_03D6D30E62EFB374_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xB856B20)
#define CLASS_1_03D6D30E62EFB374__CTOR_OFFSET UNITYSDK_OFFSET(0xB856C80)

inline static constexpr unsigned int Class_1_03D6D30E62EFB374_TypeDefinitionIndex = 62022;

class Class_1_03D6D30E62EFB374 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_149*>* LLLHNLPOOAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_43BD383C98B4C0C5_149* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_149*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_149*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_149*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
