#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1E2C28EB5494586C.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_BE08C0C9F8E77DFC_METHOD_3_1D00BFF7295080E1_OFFSET UNITYSDK_OFFSET(0x14E555A0)
#define CLASS_3_BE08C0C9F8E77DFC_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0x14E55780)
#define CLASS_3_BE08C0C9F8E77DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x14E55760)

inline static constexpr unsigned int Class_3_BE08C0C9F8E77DFC_TypeDefinitionIndex = 80469;

class Class_3_BE08C0C9F8E77DFC : public ::Class_2_1E2C28EB5494586C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BE08C0C9F8E77DFC__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_3_1D00BFF7295080E1(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_BE08C0C9F8E77DFC_METHOD_3_1D00BFF7295080E1_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_BE08C0C9F8E77DFC_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};
