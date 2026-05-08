#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_3_765691B743A1DB23;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13A27B30)
#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x13A27CF0)
#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_EF235FDBF409AEA4_OFFSET UNITYSDK_OFFSET(0x13A27AC0)
#define CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088__CTOR_OFFSET UNITYSDK_OFFSET(0x13A27800)

inline static constexpr unsigned int Class_3_765691B743A1DB23_Class_1_63365C960595A088_TypeDefinitionIndex = 72213;

class Class_3_765691B743A1DB23_Class_1_63365C960595A088 : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* Field_1_1; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x78
	::Struct_2_FE9BD044832BC9C3 Field_1_2; // 0x80
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::List_1<::System::Int32>*>* Field_1_7; // 0xB0
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0xB8
	::System::Int32 Field_1_6; // 0xE8
	::System::Boolean Field_1_0; // 0xEC

	::System::Void _ctor(::Struct_2_29439DBE2B63DCF3& a1, ::Class_3_765691B743A1DB23* a2, ::Cysharp::Threading::Tasks::UniTaskCompletionSource* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Class_3_765691B743A1DB23*, ::Cysharp::Threading::Tasks::UniTaskCompletionSource*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EF235FDBF409AEA4(::System::Boolean a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_EF235FDBF409AEA4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_765691B743A1DB23_CLASS_1_63365C960595A088_METHOD_1_99D60EF23C904C6D_OFFSET))(this);
	}
};
