#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_722EA82C1161F2A1_2_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x108CAF40)
#define CLASS_1_722EA82C1161F2A1_2_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x108CAED0)
#define CLASS_1_722EA82C1161F2A1_2__CTOR_OFFSET UNITYSDK_OFFSET(0x108CAF80)

inline static constexpr unsigned int Class_1_722EA82C1161F2A1_2_TypeDefinitionIndex = 58982;

class Class_1_722EA82C1161F2A1_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1_2_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_722EA82C1161F2A1_2_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}
};
