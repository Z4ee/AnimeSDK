#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3590B72267A04337.h"
#include "unitysdk/Enum_3_C460945F1F3C12F5.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_8B5D4EC2A0321DC2.h"
#include "unitysdk/Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A.h"
#include "unitysdk/Struct_2_D083551F790A1F52.h"
#include "unitysdk/Struct_2_DB63FD7A548E3361.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_1_CED4C4BADCBE81C2;
namespace Foundation { class IEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8759CF66A5D79035_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2972A0)
#define CLASS_1_8759CF66A5D79035_METHOD_1_0CCC2EEE6471B774_1_OFFSET UNITYSDK_OFFSET(0x1D29B050)
#define CLASS_1_8759CF66A5D79035_METHOD_1_0CCC2EEE6471B774_OFFSET UNITYSDK_OFFSET(0x1D29B030)
#define CLASS_1_8759CF66A5D79035_METHOD_1_1227FB164D76243A_OFFSET UNITYSDK_OFFSET(0x1D29AB80)
#define CLASS_1_8759CF66A5D79035_METHOD_1_18CC15262F8F1E36_OFFSET UNITYSDK_OFFSET(0x1D29AB20)
#define CLASS_1_8759CF66A5D79035_METHOD_1_2040CE485462B987_1_OFFSET UNITYSDK_OFFSET(0x1D29AE90)
#define CLASS_1_8759CF66A5D79035_METHOD_1_2040CE485462B987_OFFSET UNITYSDK_OFFSET(0x1D29AE80)
#define CLASS_1_8759CF66A5D79035_METHOD_1_274AE9A98BBCEB28_OFFSET UNITYSDK_OFFSET(0x1D296DD0)
#define CLASS_1_8759CF66A5D79035_METHOD_1_5C00C2EE4FCF347E_OFFSET UNITYSDK_OFFSET(0x1D29AEA0)
#define CLASS_1_8759CF66A5D79035_METHOD_1_668385699958E678_OFFSET UNITYSDK_OFFSET(0x1D29AEB0)
#define CLASS_1_8759CF66A5D79035_METHOD_1_78B7A33A5B061E9A_OFFSET UNITYSDK_OFFSET(0x1D29AF80)
#define CLASS_1_8759CF66A5D79035_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x1D29B020)
#define CLASS_1_8759CF66A5D79035_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1D29B060)
#define CLASS_1_8759CF66A5D79035_METHOD_1_B7CFB6C39206B4C5_OFFSET UNITYSDK_OFFSET(0x1D29B040)
#define CLASS_1_8759CF66A5D79035__CTOR_OFFSET UNITYSDK_OFFSET(0x1D29AB10)

inline static constexpr unsigned int Class_1_8759CF66A5D79035_TypeDefinitionIndex = 19247;

class Class_1_8759CF66A5D79035 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Struct_2_D083551F790A1F52>* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_25* Field_1_2; // 0x18
	::Class_1_CED4C4BADCBE81C2* Field_1_3; // 0x20
	::Foundation::IEntity* Field_1_0; // 0x28
	::Foundation::IEntity* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::Struct_2_D083551F790A1F52, ::System::Single>* Field_1_4; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_DB63FD7A548E3361>* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_DISPOSE_OFFSET))(this);
	}

	::Foundation::IEntity* Method_1_18CC15262F8F1E36(::Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A a1)
	{
		return ((::Foundation::IEntity*(*)(::PVOID, ::Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_18CC15262F8F1E36_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1227FB164D76243A(::Struct_2_8B5D4EC2A0321DC2 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_8B5D4EC2A0321DC2, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_1227FB164D76243A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_274AE9A98BBCEB28(::Foundation::IEntity* a1, ::Foundation::IEntity* a2, ::Class_0_16E4307DCC419505_25* a3, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_8B5D4EC2A0321DC2>* a4, ::Class_1_CED4C4BADCBE81C2* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Foundation::IEntity*, ::Class_0_16E4307DCC419505_25*, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_8B5D4EC2A0321DC2>*, ::Class_1_CED4C4BADCBE81C2*))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_274AE9A98BBCEB28_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2040CE485462B987(::Foundation::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_2040CE485462B987_OFFSET))(this, a1);
	}

	::System::Void Method_1_2040CE485462B987_1(::Foundation::IEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_2040CE485462B987_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_25* Method_1_5C00C2EE4FCF347E()
	{
		return ((::Class_0_16E4307DCC419505_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_5C00C2EE4FCF347E_OFFSET))(this);
	}

	::System::Void Method_1_668385699958E678(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_3590B72267A04337 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_668385699958E678_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_25* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}

	::Foundation::IEntity* Method_1_0CCC2EEE6471B774()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_0CCC2EEE6471B774_OFFSET))(this);
	}

	::System::Void Method_1_78B7A33A5B061E9A(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_3590B72267A04337 a2, ::Enum_3_C460945F1F3C12F5 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::Enum_3_C460945F1F3C12F5, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_78B7A33A5B061E9A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_DB63FD7A548E3361>* Method_1_B7CFB6C39206B4C5()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_DB63FD7A548E3361>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_B7CFB6C39206B4C5_OFFSET))(this);
	}

	::Foundation::IEntity* Method_1_0CCC2EEE6471B774_1()
	{
		return ((::Foundation::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_0CCC2EEE6471B774_1_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_CED4C4BADCBE81C2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CED4C4BADCBE81C2*))((::PBYTE)hIl2Cpp + CLASS_1_8759CF66A5D79035_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}
};
