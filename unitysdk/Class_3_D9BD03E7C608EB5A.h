#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define CLASS_3_D9BD03E7C608EB5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x191ED2D0)
#define CLASS_3_D9BD03E7C608EB5A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x191ED240)
#define CLASS_3_D9BD03E7C608EB5A_HASHCORE_OFFSET UNITYSDK_OFFSET(0x191ED330)
#define CLASS_3_D9BD03E7C608EB5A_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x191ED670)
#define CLASS_3_D9BD03E7C608EB5A_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x191ED1A0)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_238920C1051B0193_OFFSET UNITYSDK_OFFSET(0x191EDDF0)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_258548AF3A64610F_OFFSET UNITYSDK_OFFSET(0x191EE660)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_586408DD25087739_OFFSET UNITYSDK_OFFSET(0x191ED950)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_7418927F6B774907_OFFSET UNITYSDK_OFFSET(0x191EDCF0)
#define CLASS_3_D9BD03E7C608EB5A__CCTOR_OFFSET UNITYSDK_OFFSET(0x191EE7B0)
#define CLASS_3_D9BD03E7C608EB5A__CTOR_OFFSET UNITYSDK_OFFSET(0x191ED150)

inline static constexpr unsigned int Class_3_D9BD03E7C608EB5A_TypeDefinitionIndex = 8892;

class Class_3_D9BD03E7C608EB5A : public ::System::Security::Cryptography::MD5
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_3_5()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9BD03E7C608EB5A_TypeDefinitionIndex)->GetStaticField(0x3DCA0);
	}
	// static const ::System::Int32 Field_3_0 = 0x40; // 0x0
	::Il2CppArray<::System::UInt32>* Field_3_1; // 0x28
	::Il2CppArray<::System::Byte>* Field_3_3; // 0x30
	::System::Int32 Field_3_4; // 0x38
	::System::UInt64 Field_3_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A__CCTOR_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_DISPOSE_OFFSET))(this, a1);
	}

	::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_HASHCORE_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::System::Byte>* HashFinal()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_HASHFINAL_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_3_7418927F6B774907(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_7418927F6B774907_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_238920C1051B0193(::System::UInt32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32*))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_238920C1051B0193_OFFSET))(this, a1);
	}

	::System::Void Method_3_586408DD25087739(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_586408DD25087739_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_258548AF3A64610F(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_258548AF3A64610F_OFFSET))(this, a1, a2, a3);
	}
};
