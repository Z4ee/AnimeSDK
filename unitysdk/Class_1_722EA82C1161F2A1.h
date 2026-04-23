#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_125;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_722EA82C1161F2A1_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x11178E00)
#define CLASS_1_722EA82C1161F2A1_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x11178D90)
#define CLASS_1_722EA82C1161F2A1_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11178D20)
#define CLASS_1_722EA82C1161F2A1__CTOR_OFFSET UNITYSDK_OFFSET(0x11178E40)

inline static constexpr unsigned int Class_1_722EA82C1161F2A1_TypeDefinitionIndex = 57215;

class Class_1_722EA82C1161F2A1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_125*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_43BD383C98B4C0C5_125* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_125*))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_125*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_125*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
