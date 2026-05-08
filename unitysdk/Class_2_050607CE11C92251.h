#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_98.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_050607CE11C92251_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x100D7D30)
#define CLASS_2_050607CE11C92251_METHOD_2_90498271B7016520_OFFSET UNITYSDK_OFFSET(0x100D7DD0)
#define CLASS_2_050607CE11C92251_METHOD_2_E06292D0E0A940EC_OFFSET UNITYSDK_OFFSET(0x100D7C50)
#define CLASS_2_050607CE11C92251__CTOR_OFFSET UNITYSDK_OFFSET(0x100D7BC0)

inline static constexpr unsigned int Class_2_050607CE11C92251_TypeDefinitionIndex = 58702;

class Class_2_050607CE11C92251 : public ::Class_1_43BD383C98B4C0C5_98
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_050607CE11C92251__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E06292D0E0A940EC(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_050607CE11C92251_METHOD_2_E06292D0E0A940EC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_050607CE11C92251_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_90498271B7016520(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_050607CE11C92251_METHOD_2_90498271B7016520_OFFSET))(this, a1);
	}
};
