#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_1AA4553FE204ABD1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_32;
class Class_1_A4E5799D48BBAD1F;
namespace System::IO { class Stream; }

#define CLASS_1_33E2BE587EE07FAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FBE3BF0)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_0D9CCCDE5FF8A5B3_OFFSET UNITYSDK_OFFSET(0x1FBE3C30)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_3228840C1F0FA1E7_OFFSET UNITYSDK_OFFSET(0x1FBE3DA0)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x1FBE3D30)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_6A64CBFD634AF3E4_OFFSET UNITYSDK_OFFSET(0x1FBE3D80)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_7E8FB5C675ED1B80_OFFSET UNITYSDK_OFFSET(0x1FBE3F30)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1FBE3D40)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1FBE3D20)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1FBE3C80)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_C0BF192AE784454F_OFFSET UNITYSDK_OFFSET(0x1FBE3B90)
#define CLASS_1_33E2BE587EE07FAA_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1FBE3D90)
#define CLASS_1_33E2BE587EE07FAA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBE3990)
#define CLASS_1_33E2BE587EE07FAA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBE3AA0)
#define CLASS_1_33E2BE587EE07FAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE3930)

inline static constexpr unsigned int Class_1_33E2BE587EE07FAA_TypeDefinitionIndex = 19003;

class Class_1_33E2BE587EE07FAA : public ::System::Object
{
public:
	::System::IO::Stream* Field_1_0; // 0x10
	::Il2CppArray<::System::Byte>* Field_1_1; // 0x18
	::Il2CppArray<::System::Byte>* Field_1_6; // 0x20
	::Struct_2_1AA4553FE204ABD1 Field_1_7; // 0x28
	::System::Boolean Field_1_2; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::IO::Stream* a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA__CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_0D9CCCDE5FF8A5B3(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_0D9CCCDE5FF8A5B3_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::System::Byte>* Method_1_C0BF192AE784454F()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_C0BF192AE784454F_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_A4E5799D48BBAD1F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A4E5799D48BBAD1F*))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::Struct_2_1AA4553FE204ABD1& Method_1_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_1AA4553FE204ABD1&(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_3D78D2E0F9F95F07_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_6A64CBFD634AF3E4()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_6A64CBFD634AF3E4_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_3228840C1F0FA1E7(::Class_0_16E4307DCC419505_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_32*))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_3228840C1F0FA1E7_OFFSET))(this, a1);
	}

	::System::IO::Stream* Method_1_7E8FB5C675ED1B80()
	{
		return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_33E2BE587EE07FAA_METHOD_1_7E8FB5C675ED1B80_OFFSET))(this);
	}
};
