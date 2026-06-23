#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC7E19CAB8B85020.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_19;
namespace System { class String; }

#define CLASS_1_9ABF2F624481FD62_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF72850)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1CF73480)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_3413D242C92D3987_OFFSET UNITYSDK_OFFSET(0x1CF729B0)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1CF72D10)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF728A0)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1CF72C70)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_CD499945595BD8D0_OFFSET UNITYSDK_OFFSET(0x1CF72F20)
#define CLASS_1_9ABF2F624481FD62_METHOD_1_D401514214AE26A1_OFFSET UNITYSDK_OFFSET(0x1CF72F80)
#define CLASS_1_9ABF2F624481FD62_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CF72940)
#define CLASS_1_9ABF2F624481FD62__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF72770)

inline static constexpr unsigned int Class_1_9ABF2F624481FD62_TypeDefinitionIndex = 33868;

class Class_1_9ABF2F624481FD62 : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_19* Field_1_0; // 0x10
	::System::Int64 Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::Enum_3_CC7E19CAB8B85020 Field_1_1; // 0x24

	::System::Void _ctor(::Class_1_43BD383C98B4C0C5_19* a1, ::Enum_3_CC7E19CAB8B85020 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_19*, ::Enum_3_CC7E19CAB8B85020))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_DISPOSE_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_3413D242C92D3987(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_3413D242C92D3987_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D401514214AE26A1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int64 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_D401514214AE26A1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_CD499945595BD8D0(::System::Int64 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_CD499945595BD8D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABF2F624481FD62_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
