#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_145.h"
#include "unitysdk/System/Object.h"

class Class_2_534AF681CC2BD5FD_204;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5B0F4BA033EFB9AE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1609FAD0)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x1609F3F0)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1609F790)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1609F6B0)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1609F930)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1609F9F0)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1609F7A0)
#define CLASS_1_5B0F4BA033EFB9AE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1609F3D0)
#define CLASS_1_5B0F4BA033EFB9AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1609FC00)

inline static constexpr unsigned int Class_1_5B0F4BA033EFB9AE_TypeDefinitionIndex = 15911;

class Class_1_5B0F4BA033EFB9AE : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_534AF681CC2BD5FD_204*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x18
	::Struct_2_1862835F8661A21F_145 Field_1_1; // 0x20
	::System::Int32 Field_1_6; // 0x38
	::System::Boolean Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B0F4BA033EFB9AE_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
