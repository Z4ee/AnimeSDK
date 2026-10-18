#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_945ACFB1FEBC7A2C_14;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_99EFA45B40B96447_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x15E7DD90)
#define CLASS_1_99EFA45B40B96447_METHOD_1_53C04E0C5260E834_OFFSET UNITYSDK_OFFSET(0x15E7DDD0)
#define CLASS_1_99EFA45B40B96447_METHOD_1_735F0E1F0B23B0C9_OFFSET UNITYSDK_OFFSET(0x15E7DCE0)
#define CLASS_1_99EFA45B40B96447_METHOD_1_8A4821B6962F6B25_OFFSET UNITYSDK_OFFSET(0x15E7DB00)
#define CLASS_1_99EFA45B40B96447__CTOR_OFFSET UNITYSDK_OFFSET(0x15E7DF60)

inline static constexpr unsigned int Class_1_99EFA45B40B96447_TypeDefinitionIndex = 72021;

class Class_1_99EFA45B40B96447 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>* JENBLIPHHMO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99EFA45B40B96447__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A4821B6962F6B25(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_99EFA45B40B96447_METHOD_1_8A4821B6962F6B25_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_36816D4DE394D200*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_99EFA45B40B96447_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	static ::System::Boolean Method_1_735F0E1F0B23B0C9(::Class_1_36816D4DE394D200* a1, ::Class_1_36816D4DE394D200* a2)
	{
		return ((::System::Boolean(*)(::Class_1_36816D4DE394D200*, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_99EFA45B40B96447_METHOD_1_735F0E1F0B23B0C9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_53C04E0C5260E834(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>* a1, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>*, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>*))((::PBYTE)hIl2Cpp + CLASS_1_99EFA45B40B96447_METHOD_1_53C04E0C5260E834_OFFSET))(a1, a2);
	}
};
