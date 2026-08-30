#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_150;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_03D6D30E62EFB374_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0xB99CEE0)
#define CLASS_1_03D6D30E62EFB374_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xB99CE30)
#define CLASS_1_03D6D30E62EFB374_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xB99CDC0)
#define CLASS_1_03D6D30E62EFB374__CTOR_OFFSET UNITYSDK_OFFSET(0xB99CF20)

inline static constexpr unsigned int Class_1_03D6D30E62EFB374_TypeDefinitionIndex = 62106;

class Class_1_03D6D30E62EFB374 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_150*>* LLLHNLPOOAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_43BD383C98B4C0C5_150* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_150*))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_150*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_150*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03D6D30E62EFB374_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
