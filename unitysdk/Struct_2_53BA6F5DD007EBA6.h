#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_53BA6F5DD007EBA6_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x624020)
#define STRUCT_2_53BA6F5DD007EBA6_METHOD_2_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x623F70)
#define STRUCT_2_53BA6F5DD007EBA6_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x2ACBF0)
#define STRUCT_2_53BA6F5DD007EBA6_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x2ACBE0)
#define STRUCT_2_53BA6F5DD007EBA6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x623EF0)
#define STRUCT_2_53BA6F5DD007EBA6__CTOR_1_OFFSET UNITYSDK_OFFSET(0x623EA0)
#define STRUCT_2_53BA6F5DD007EBA6__CTOR_OFFSET UNITYSDK_OFFSET(0x3B4CE0)

inline static constexpr unsigned int Struct_2_53BA6F5DD007EBA6_TypeDefinitionIndex = 73027;

struct alignas(8) Struct_2_53BA6F5DD007EBA6
{
	::System::Boolean Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>* Field_2_2; // 0x20

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_53BA6F5DD007EBA6>*))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6__CTOR_1_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6_METHOD_2_37D0382D0C30A2DC_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_53BA6F5DD007EBA6_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
