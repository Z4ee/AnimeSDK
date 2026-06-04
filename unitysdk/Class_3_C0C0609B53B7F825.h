#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define CLASS_3_C0C0609B53B7F825_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F41030)
#define CLASS_3_C0C0609B53B7F825_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19F40FA0)
#define CLASS_3_C0C0609B53B7F825_HASHCORE_OFFSET UNITYSDK_OFFSET(0x19F41090)
#define CLASS_3_C0C0609B53B7F825_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x19F41400)
#define CLASS_3_C0C0609B53B7F825_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19F40F40)
#define CLASS_3_C0C0609B53B7F825_METHOD_3_0D28F4D4C4CC1FED_OFFSET UNITYSDK_OFFSET(0x19F416D0)
#define CLASS_3_C0C0609B53B7F825_METHOD_3_238920C1051B0193_OFFSET UNITYSDK_OFFSET(0x19F41B60)
#define CLASS_3_C0C0609B53B7F825_METHOD_3_258548AF3A64610F_OFFSET UNITYSDK_OFFSET(0x19F423D0)
#define CLASS_3_C0C0609B53B7F825_METHOD_3_53A9B69C73D10BD0_OFFSET UNITYSDK_OFFSET(0x19F41A40)
#define CLASS_3_C0C0609B53B7F825__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F424A0)
#define CLASS_3_C0C0609B53B7F825__CTOR_OFFSET UNITYSDK_OFFSET(0x19F40EA0)

inline static constexpr unsigned int Class_3_C0C0609B53B7F825_TypeDefinitionIndex = 6756;

class Class_3_C0C0609B53B7F825 : public ::System::Security::Cryptography::MD5
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_3_0()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C0C0609B53B7F825_TypeDefinitionIndex)->GetStaticField(0x65C0);
	}
	// static const ::System::Int32 Field_3_1 = 0x40; // 0x0
	::Il2CppArray<::System::UInt32>* Field_3_2; // 0x28
	::Il2CppArray<::System::Byte>* Field_3_3; // 0x30
	::System::UInt64 Field_3_4; // 0x38
	::System::Int32 Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825__CCTOR_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_DISPOSE_OFFSET))(this, a1);
	}

	::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_HASHCORE_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::System::Byte>* HashFinal()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_HASHFINAL_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_3_53A9B69C73D10BD0(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_METHOD_3_53A9B69C73D10BD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_238920C1051B0193(::System::UInt32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32*))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_METHOD_3_238920C1051B0193_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D28F4D4C4CC1FED(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_METHOD_3_0D28F4D4C4CC1FED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_258548AF3A64610F(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C0C0609B53B7F825_METHOD_3_258548AF3A64610F_OFFSET))(this, a1, a2, a3);
	}
};
