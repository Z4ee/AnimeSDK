#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2ACAE3B8E89364F1.h"
#include "unitysdk/Enum_3_A104014A7AFE0465.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryBlob.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Struct_2_44BFEEFC722C6845.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4355D25F091C65D0_METHOD_2_03E8463EE1892C27_OFFSET UNITYSDK_OFFSET(0x5B15B0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_133FBB432B506ED2_OFFSET UNITYSDK_OFFSET(0xDB67880)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x5B1970)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x5B14E0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_3B92C9EE2859AFA1_OFFSET UNITYSDK_OFFSET(0x5B0EB0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x5B1540)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_8A35915F1350DE49_OFFSET UNITYSDK_OFFSET(0x5B0EA0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_1_OFFSET UNITYSDK_OFFSET(0xDB67240)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_2_OFFSET UNITYSDK_OFFSET(0xDB6A580)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_OFFSET UNITYSDK_OFFSET(0xDB66CA0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_A69BDD2887C3729E_OFFSET UNITYSDK_OFFSET(0x5B0F20)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_C23FE6659F0DA9DB_OFFSET UNITYSDK_OFFSET(0xDB69850)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_1_OFFSET UNITYSDK_OFFSET(0x5B1530)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_OFFSET UNITYSDK_OFFSET(0x5B0F10)
#define STRUCT_2_4355D25F091C65D0__CCTOR_OFFSET UNITYSDK_OFFSET(0xDB668D0)
#define STRUCT_2_4355D25F091C65D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5B0E70)
#define STRUCT_2_4355D25F091C65D0__CTOR_OFFSET UNITYSDK_OFFSET(0x5B0DF0)

inline static constexpr unsigned int Struct_2_4355D25F091C65D0_TypeDefinitionIndex = 51346;

struct alignas(8) Struct_2_4355D25F091C65D0
{
	static ::Struct_2_4355D25F091C65D0* StaticGet_Field_2_7()
	{
		return (::Struct_2_4355D25F091C65D0*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4355D25F091C65D0_TypeDefinitionIndex)->GetStaticField(0xC920);
	}
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_44BFEEFC722C6845> Field_2_0; // 0x10
	::Enum_3_A104014A7AFE0465 Field_2_1; // 0x20
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_2; // 0x24
	::Foundation::ReadOnlyNativeMemoryBlob Field_2_3; // 0x38
	::Foundation::ReadOnlyNativeMemoryBlob Field_2_4; // 0x48
	::Foundation::ReadOnlyNativeMemoryBlob Field_2_5; // 0x58
	::System::Single Field_2_6; // 0x68

	::System::Void _ctor(::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_44BFEEFC722C6845> a1, ::Enum_3_A104014A7AFE0465 a2, ::Foundation::Unreal::Interval_1<::System::Single> a3, ::Foundation::ReadOnlyNativeMemoryBlob a4, ::Foundation::ReadOnlyNativeMemoryBlob a5, ::Foundation::ReadOnlyNativeMemoryBlob a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_44BFEEFC722C6845>, ::Enum_3_A104014A7AFE0465, ::Foundation::Unreal::Interval_1<::System::Single>, ::Foundation::ReadOnlyNativeMemoryBlob, ::Foundation::ReadOnlyNativeMemoryBlob, ::Foundation::ReadOnlyNativeMemoryBlob, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	/*
	::System::Void _ctor_1(::UnityEngine::Keyframe a1, ::Enum_3_A104014A7AFE0465 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe, ::Enum_3_A104014A7AFE0465))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0__CTOR_1_OFFSET))(this, a1, a2);
	}
	*/

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0__CCTOR_OFFSET))();
	}

	::System::Single Method_2_8A35915F1350DE49(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_8A35915F1350DE49_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_2_9BECA2B6C750A002(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::System::Single a3, ::Enum_3_2ACAE3B8E89364F1 a4)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_2_9BECA2B6C750A002_1(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::System::Single a3, ::Enum_3_2ACAE3B8E89364F1 a4)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_1_OFFSET))(a1, a2, a3, a4);
	}

	::Foundation::Unreal::Interval_1<::System::Single> Method_2_3B92C9EE2859AFA1()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_3B92C9EE2859AFA1_OFFSET))(this);
	}

	static ::System::Single Method_2_133FBB432B506ED2(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::Enum_3_2ACAE3B8E89364F1 a3)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_133FBB432B506ED2_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_2_F38AEEE15C410D57(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_A69BDD2887C3729E(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_A69BDD2887C3729E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_205A14011EEBDE57(::Enum_3_A104014A7AFE0465 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_A104014A7AFE0465))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F38AEEE15C410D57_1(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_1_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_2_C23FE6659F0DA9DB(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::Enum_3_2ACAE3B8E89364F1 a3)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_C23FE6659F0DA9DB_OFFSET))(a1, a2, a3);
	}

	::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_64F0C85A431FBD69_OFFSET))(this);
	}

	::System::Single Method_2_03E8463EE1892C27(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_03E8463EE1892C27_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_2_9BECA2B6C750A002_2(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::System::Single a3, ::Enum_3_2ACAE3B8E89364F1 a4)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_2_OFFSET))(a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}
};
