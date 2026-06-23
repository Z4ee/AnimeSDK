#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE51A_4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_464;
class Class_2_A3F13BBF9509D066;
namespace System { class String; }

#define CLASS_1_6FFFD01E5B0FBB15_1_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x71705A0)
#define CLASS_1_6FFFD01E5B0FBB15_1_METHOD_1_62B120850052789D_OFFSET UNITYSDK_OFFSET(0x7170180)
#define CLASS_1_6FFFD01E5B0FBB15_1_METHOD_1_8B765A3736CAE06D_OFFSET UNITYSDK_OFFSET(0x71705E0)
#define CLASS_1_6FFFD01E5B0FBB15_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7170320)
#define CLASS_1_6FFFD01E5B0FBB15_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7170170)

inline static constexpr unsigned int Class_1_6FFFD01E5B0FBB15_1_TypeDefinitionIndex = 52675;

class Class_1_6FFFD01E5B0FBB15_1 : public ::System::Object
{
public:
	::Il2CppArray<::Class_0_16E4307DCC419505_464*>* Field_1_0; // 0x10

	::System::Void _ctor(::Il2CppArray<::Class_0_16E4307DCC419505_464*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_464*>*))((::PBYTE)hIl2Cpp + CLASS_1_6FFFD01E5B0FBB15_1__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_62B120850052789D(::Class_2_A3F13BBF9509D066* a1, ::Struct_2_52A902145F5BE51A_4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A3F13BBF9509D066*, ::Struct_2_52A902145F5BE51A_4&))((::PBYTE)hIl2Cpp + CLASS_1_6FFFD01E5B0FBB15_1_METHOD_1_62B120850052789D_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FFFD01E5B0FBB15_1_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FFFD01E5B0FBB15_1_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_1_8B765A3736CAE06D(::Class_2_A3F13BBF9509D066* a1, ::Struct_2_52A902145F5BE51A_4& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_A3F13BBF9509D066*, ::Struct_2_52A902145F5BE51A_4&))((::PBYTE)hIl2Cpp + CLASS_1_6FFFD01E5B0FBB15_1_METHOD_1_8B765A3736CAE06D_OFFSET))(this, a1, a2);
	}
};
