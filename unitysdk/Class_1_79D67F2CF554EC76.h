#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E223664CCFC59063;
class Class_1_E657D03F0A0D98AD;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_79D67F2CF554EC76_METHOD_1_0B20F4E2C37C4B09_OFFSET UNITYSDK_OFFSET(0x14216180)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_119DB13880CFB76E_OFFSET UNITYSDK_OFFSET(0x142163C0)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_1EFDA67748F44F27_OFFSET UNITYSDK_OFFSET(0x14216DF0)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_36A37025C690335A_OFFSET UNITYSDK_OFFSET(0x14217B50)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_3D854BFE6B74E666_OFFSET UNITYSDK_OFFSET(0x14217440)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_60F34126C92EAA5A_OFFSET UNITYSDK_OFFSET(0x14217CD0)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_9DC957595E9408DC_OFFSET UNITYSDK_OFFSET(0x14215F30)
#define CLASS_1_79D67F2CF554EC76_METHOD_1_9F25BD6C7AAC94C8_OFFSET UNITYSDK_OFFSET(0x14217530)
#define CLASS_1_79D67F2CF554EC76__CTOR_OFFSET UNITYSDK_OFFSET(0x14215E10)

inline static constexpr unsigned int Class_1_79D67F2CF554EC76_TypeDefinitionIndex = 60257;

class Class_1_79D67F2CF554EC76 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::Class_1_E657D03F0A0D98AD* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>* Field_1_2; // 0x20

	::System::Void _ctor(::System::Double a1, ::System::Double a2, ::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Collections::Generic::List_1<::Class_1_E223664CCFC59063*>*))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_9DC957595E9408DC(::System::Double a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_9DC957595E9408DC_OFFSET))(this, a1, a2, a3);
	}

	::System::Double Method_1_0B20F4E2C37C4B09(::System::Double a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_0B20F4E2C37C4B09_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_E223664CCFC59063* Method_1_119DB13880CFB76E(::System::Double a1, ::System::Int32 a2)
	{
		return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_119DB13880CFB76E_OFFSET))(this, a1, a2);
	}

	::Class_1_E223664CCFC59063* Method_1_1EFDA67748F44F27(::System::Double a1, ::System::Int32 a2)
	{
		return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_1EFDA67748F44F27_OFFSET))(this, a1, a2);
	}

	::System::Double Method_1_3D854BFE6B74E666(::System::Double a1, ::System::Double a2, ::System::Double a3)
	{
		return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_3D854BFE6B74E666_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_E223664CCFC59063* Method_1_9F25BD6C7AAC94C8(::System::Double a1, ::System::Int32 a2)
	{
		return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_9F25BD6C7AAC94C8_OFFSET))(this, a1, a2);
	}

	::Class_1_E223664CCFC59063* Method_1_36A37025C690335A(::System::Double a1)
	{
		return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_36A37025C690335A_OFFSET))(this, a1);
	}

	::Class_1_E223664CCFC59063* Method_1_60F34126C92EAA5A(::Class_1_E223664CCFC59063* a1)
	{
		return ((::Class_1_E223664CCFC59063*(*)(::PVOID, ::Class_1_E223664CCFC59063*))((::PBYTE)hIl2Cpp + CLASS_1_79D67F2CF554EC76_METHOD_1_60F34126C92EAA5A_OFFSET))(this, a1);
	}
};
