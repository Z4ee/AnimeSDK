#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define CLASS_3_D9BD03E7C608EB5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D769EE0)
#define CLASS_3_D9BD03E7C608EB5A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D769E40)
#define CLASS_3_D9BD03E7C608EB5A_HASHCORE_OFFSET UNITYSDK_OFFSET(0x1D769F60)
#define CLASS_3_D9BD03E7C608EB5A_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x1D76A9B0)
#define CLASS_3_D9BD03E7C608EB5A_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D769DE0)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_258548AF3A64610F_OFFSET UNITYSDK_OFFSET(0x1D76AE10)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_66A81059D9B59B61_OFFSET UNITYSDK_OFFSET(0x1D76AC80)
#define CLASS_3_D9BD03E7C608EB5A_METHOD_3_9BCC4010AF78CAEC_OFFSET UNITYSDK_OFFSET(0x1D76A0A0)
#define CLASS_3_D9BD03E7C608EB5A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D76AEE0)
#define CLASS_3_D9BD03E7C608EB5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D769D30)

inline static constexpr unsigned int Class_3_D9BD03E7C608EB5A_TypeDefinitionIndex = 6372;

class Class_3_D9BD03E7C608EB5A : public ::System::Security::Cryptography::MD5
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_ADLMPMKKAEP()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_D9BD03E7C608EB5A_TypeDefinitionIndex)->GetStaticField(0x21000);
	}
	// static const ::System::Int32 GCCEMOGMMAG = 0x40; // 0x0
	::Il2CppArray<::System::Byte>* AAPBNCPAEFN; // 0x28
	::Il2CppArray<::System::UInt32>* EGHEGMHDADG; // 0x30
	::Il2CppArray<::System::UInt32>* CKCOCCFLIJL; // 0x38
	::System::UInt64 NPBFLDGDPAD; // 0x40
	::System::Int32 KNANCKDNDGC; // 0x48

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

	::System::Void Method_3_9BCC4010AF78CAEC(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_9BCC4010AF78CAEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A81059D9B59B61(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_66A81059D9B59B61_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_258548AF3A64610F(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D9BD03E7C608EB5A_METHOD_3_258548AF3A64610F_OFFSET))(this, a1, a2, a3);
	}
};
