#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2ACAE3B8E89364F1.h"
#include "unitysdk/Enum_3_A104014A7AFE0465.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryBlob.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/Foundation/Unreal/Interval_1.h"
#include "unitysdk/Struct_2_44BFEEFC722C6845.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_4355D25F091C65D0_METHOD_2_02B5B57466A7D6A9_OFFSET UNITYSDK_OFFSET(0x823300)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_03E8463EE1892C27_OFFSET UNITYSDK_OFFSET(0x822B10)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_133FBB432B506ED2_OFFSET UNITYSDK_OFFSET(0x1575F9C0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x822F20)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x822ED0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_3B92C9EE2859AFA1_OFFSET UNITYSDK_OFFSET(0x731540)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_64F0C85A431FBD69_OFFSET UNITYSDK_OFFSET(0x731470)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_1_OFFSET UNITYSDK_OFFSET(0x1575F420)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_2_OFFSET UNITYSDK_OFFSET(0x1575FF70)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_OFFSET UNITYSDK_OFFSET(0x1575E4E0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_C23FE6659F0DA9DB_OFFSET UNITYSDK_OFFSET(0x15761E10)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_D49507F635C09786_OFFSET UNITYSDK_OFFSET(0x8232F0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_1_OFFSET UNITYSDK_OFFSET(0x8232E0)
#define STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_OFFSET UNITYSDK_OFFSET(0x822900)
#define STRUCT_2_4355D25F091C65D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1575E090)
#define STRUCT_2_4355D25F091C65D0__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8228D0)
#define STRUCT_2_4355D25F091C65D0__CTOR_OFFSET UNITYSDK_OFFSET(0x822850)

inline static constexpr unsigned int Struct_2_4355D25F091C65D0_TypeDefinitionIndex = 46955;

struct alignas(8) Struct_2_4355D25F091C65D0
{
	static ::Struct_2_4355D25F091C65D0* StaticGet_Field_2_9()
	{
		return (::Struct_2_4355D25F091C65D0*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_4355D25F091C65D0_TypeDefinitionIndex)->GetStaticField(0xC5A0);
	}
	::Foundation::ReadOnlyNativeVariableArray_1<::Struct_2_44BFEEFC722C6845> Field_2_0; // 0x10
	::Enum_3_A104014A7AFE0465 Field_2_7; // 0x20
	::Foundation::Unreal::Interval_1<::System::Single> Field_2_6; // 0x24
	::Foundation::ReadOnlyNativeMemoryBlob Field_2_5; // 0x38
	::Foundation::ReadOnlyNativeMemoryBlob Field_2_4; // 0x48
	::Foundation::ReadOnlyNativeMemoryBlob Field_2_11; // 0x58
	::System::Single Field_2_10; // 0x68

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

	::System::Int32 Method_2_F38AEEE15C410D57(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_OFFSET))(this, a1, a2);
	}

	static ::System::Single Method_2_9BECA2B6C750A002(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::System::Single a3, ::Enum_3_2ACAE3B8E89364F1 a4)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_OFFSET))(a1, a2, a3, a4);
	}

	::System::Single Method_2_03E8463EE1892C27(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_03E8463EE1892C27_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_205A14011EEBDE57(::Enum_3_A104014A7AFE0465 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_A104014A7AFE0465))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_205A14011EEBDE57_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_64F0C85A431FBD69()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_64F0C85A431FBD69_OFFSET))(this);
	}

	static ::System::Single Method_2_9BECA2B6C750A002_1(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::System::Single a3, ::Enum_3_2ACAE3B8E89364F1 a4)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_1_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_2_133FBB432B506ED2(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::Enum_3_2ACAE3B8E89364F1 a3)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_133FBB432B506ED2_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_2_9BECA2B6C750A002_2(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::System::Single a3, ::Enum_3_2ACAE3B8E89364F1 a4)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::System::Single, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_9BECA2B6C750A002_2_OFFSET))(a1, a2, a3, a4);
	}

	::System::Int32 Method_2_F38AEEE15C410D57_1(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_F38AEEE15C410D57_1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_D49507F635C09786(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_D49507F635C09786_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_02B5B57466A7D6A9(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_02B5B57466A7D6A9_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Single Method_2_C23FE6659F0DA9DB(::Foundation::ReadOnlyNativeMemoryBlob a1, ::System::Int32 a2, ::Enum_3_2ACAE3B8E89364F1 a3)
	{
		return ((::System::Single(*)(::Foundation::ReadOnlyNativeMemoryBlob, ::System::Int32, ::Enum_3_2ACAE3B8E89364F1))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_C23FE6659F0DA9DB_OFFSET))(a1, a2, a3);
	}

	::Foundation::Unreal::Interval_1<::System::Single> Method_2_3B92C9EE2859AFA1()
	{
		return ((::Foundation::Unreal::Interval_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4355D25F091C65D0_METHOD_2_3B92C9EE2859AFA1_OFFSET))(this);
	}
};
