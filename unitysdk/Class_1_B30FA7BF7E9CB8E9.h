#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1842CDA6A764B151;
class Class_1_849EE5CF9026AE9F;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_4B4D4E8317EBB1E9_OFFSET UNITYSDK_OFFSET(0x1731F210)
#define CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x1731F370)
#define CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_B0D0D30AA6E083F2_OFFSET UNITYSDK_OFFSET(0x1731EF90)
#define CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_DA41DCAD7C27DB4D_OFFSET UNITYSDK_OFFSET(0x1731F1D0)
#define CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1731F4D0)
#define CLASS_1_B30FA7BF7E9CB8E9__CTOR_OFFSET UNITYSDK_OFFSET(0x1731F570)

inline static constexpr unsigned int Class_1_B30FA7BF7E9CB8E9_TypeDefinitionIndex = 65856;

class Class_1_B30FA7BF7E9CB8E9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1842CDA6A764B151*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B0D0D30AA6E083F2(::Class_1_1842CDA6A764B151* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1842CDA6A764B151*))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_B0D0D30AA6E083F2_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_1842CDA6A764B151*>* Method_1_DA41DCAD7C27DB4D()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1842CDA6A764B151*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_DA41DCAD7C27DB4D_OFFSET))(this);
	}

	::Class_1_849EE5CF9026AE9F* Method_1_4B4D4E8317EBB1E9(::System::Single a1, ::System::Single& a2)
	{
		return ((::Class_1_849EE5CF9026AE9F*(*)(::PVOID, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_4B4D4E8317EBB1E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_1_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B30FA7BF7E9CB8E9_METHOD_1_EBEE0D0A222A8264_OFFSET))(this);
	}
};
