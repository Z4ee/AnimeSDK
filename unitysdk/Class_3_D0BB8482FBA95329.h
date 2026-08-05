#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1E2C28EB5494586C.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }

#define CLASS_3_D0BB8482FBA95329_METHOD_3_2C0DDE22CA1C73CB_OFFSET UNITYSDK_OFFSET(0x15946F20)
#define CLASS_3_D0BB8482FBA95329_METHOD_3_9F049CD313DA262B_OFFSET UNITYSDK_OFFSET(0x15946E50)
#define CLASS_3_D0BB8482FBA95329__CTOR_OFFSET UNITYSDK_OFFSET(0x15946F00)

inline static constexpr unsigned int Class_3_D0BB8482FBA95329_TypeDefinitionIndex = 46987;

class Class_3_D0BB8482FBA95329 : public ::Class_2_1E2C28EB5494586C
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_3_9F049CD313DA262B(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_METHOD_3_9F049CD313DA262B_OFFSET))(this, a1);
	}

	::Struct_2_B196590B3E289741 Method_3_2C0DDE22CA1C73CB(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_3_D0BB8482FBA95329_METHOD_3_2C0DDE22CA1C73CB_OFFSET))(this, a1);
	}
};
