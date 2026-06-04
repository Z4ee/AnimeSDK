#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_137;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03D6D30E62EFB374_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xA672FF0)
#define CLASS_1_03D6D30E62EFB374_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xA672F40)
#define CLASS_1_03D6D30E62EFB374_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xA672ED0)
#define CLASS_1_03D6D30E62EFB374__CTOR_OFFSET UNITYSDK_OFFSET(0xA673030)

inline static constexpr unsigned int Class_1_03D6D30E62EFB374_TypeDefinitionIndex = 58005;

class Class_1_03D6D30E62EFB374 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_137*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_43BD383C98B4C0C5_137* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_137*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_137*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_137*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
