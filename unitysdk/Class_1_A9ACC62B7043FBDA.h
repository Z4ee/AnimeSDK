#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_1FEC7CFD978B42F9;
class Class_1_49280AAF81D53F7B;
class Class_1_7179D0DED6D3E44A;
class Class_1_AD0B53B56535FBAD;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_A9ACC62B7043FBDA_METHOD_1_168DDC835E75300A_OFFSET UNITYSDK_OFFSET(0x16542350)
#define CLASS_1_A9ACC62B7043FBDA_METHOD_1_F3FE9D3C02BBDDDB_OFFSET UNITYSDK_OFFSET(0x16541460)

inline static constexpr unsigned int Class_1_A9ACC62B7043FBDA_TypeDefinitionIndex = 32099;

class Class_1_A9ACC62B7043FBDA : public ::System::Object
{
public:
	// static const ::System::UInt16 Field_1_0 = 0x1; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	static ::System::Void Method_1_F3FE9D3C02BBDDDB(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_7179D0DED6D3E44A*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_AD0B53B56535FBAD*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_7179D0DED6D3E44A*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_AD0B53B56535FBAD*>*))((::PBYTE)hIl2Cpp + CLASS_1_A9ACC62B7043FBDA_METHOD_1_F3FE9D3C02BBDDDB_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_1FEC7CFD978B42F9* Method_1_168DDC835E75300A(::Class_1_49280AAF81D53F7B* a1, ::Class_1_1B9BBF1B9A8CC806* a2, ::System::String* a3)
	{
		return ((::Class_1_1FEC7CFD978B42F9*(*)(::Class_1_49280AAF81D53F7B*, ::Class_1_1B9BBF1B9A8CC806*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9ACC62B7043FBDA_METHOD_1_168DDC835E75300A_OFFSET))(a1, a2, a3);
	}
};
