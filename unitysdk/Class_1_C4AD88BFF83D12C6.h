#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_B679E4D914A10080_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
template <typename T1, typename T2> class Class_1_D60416EB550789D9;

#define CLASS_1_C4AD88BFF83D12C6_COMPARETO_OFFSET UNITYSDK_OFFSET(0x139681C0)
#define CLASS_1_C4AD88BFF83D12C6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x139680C0)
#define CLASS_1_C4AD88BFF83D12C6_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13967FB0)
#define CLASS_1_C4AD88BFF83D12C6_EQUALS_OFFSET UNITYSDK_OFFSET(0x13967F30)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_3E001678C2E0820F_OFFSET UNITYSDK_OFFSET(0x13968560)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_522B5FFC967D34FE_OFFSET UNITYSDK_OFFSET(0x13968240)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_8073A3C8BD4F2EE0_OFFSET UNITYSDK_OFFSET(0x13968420)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_BBD3BD54133B9D0C_OFFSET UNITYSDK_OFFSET(0x13966EA0)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13967FA0)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x13968490)
#define CLASS_1_C4AD88BFF83D12C6_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0x13968550)
#define CLASS_1_C4AD88BFF83D12C6__CTOR_OFFSET UNITYSDK_OFFSET(0x13966C70)

inline static constexpr unsigned int Class_1_C4AD88BFF83D12C6_TypeDefinitionIndex = 50099;

class Class_1_C4AD88BFF83D12C6 : public ::System::Object
{
public:
	::Class_1_D60416EB550789D9<::System::Int32, ::System::Int32>* Field_1_4; // 0x10
	::Foundation::ViewObject::ViewObjectHandle Field_1_5; // 0x18
	::System::Boolean Field_1_7; // 0x28
	::Struct_2_B679E4D914A10080_1 Field_1_6; // 0x2C
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::Foundation::ViewObject::ViewObjectHandle a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::Foundation::ViewObject::ViewObjectHandle, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Equals(::Class_1_C4AD88BFF83D12C6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4AD88BFF83D12C6*))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_DISPOSE_OFFSET))(this);
	}

	::System::Int32 CompareTo(::Class_1_C4AD88BFF83D12C6* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C4AD88BFF83D12C6*))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_COMPARETO_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* Method_1_522B5FFC967D34FE()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_522B5FFC967D34FE_OFFSET))(this);
	}

	::System::Boolean Method_1_8073A3C8BD4F2EE0(::Class_1_C4AD88BFF83D12C6* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4AD88BFF83D12C6*))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_8073A3C8BD4F2EE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_CE18697B63E52504_OFFSET))(this);
	}

	::System::Void Method_1_BBD3BD54133B9D0C(::Struct_2_B679E4D914A10080_1 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B679E4D914A10080_1, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_BBD3BD54133B9D0C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* Method_1_3E001678C2E0820F()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4AD88BFF83D12C6_METHOD_1_3E001678C2E0820F_OFFSET))(this);
	}
};
