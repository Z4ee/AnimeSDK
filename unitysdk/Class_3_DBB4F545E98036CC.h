#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7E439EF9F54D19A0.h"

class Class_1_8789803C08702B21;
class Class_3_1FE4CD675C5ACADB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DBB4F545E98036CC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x113C27F0)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x113C2970)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_433EC87BF5181040_OFFSET UNITYSDK_OFFSET(0x113C2990)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x113C2980)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0x113C28B0)
#define CLASS_3_DBB4F545E98036CC__CTOR_OFFSET UNITYSDK_OFFSET(0x113C2780)

inline static constexpr unsigned int Class_3_DBB4F545E98036CC_TypeDefinitionIndex = 38750;

class Class_3_DBB4F545E98036CC : public ::Class_2_7E439EF9F54D19A0
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x40

	::System::Void _ctor(::Class_1_8789803C08702B21* a1, ::Class_3_1FE4CD675C5ACADB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8789803C08702B21*, ::Class_3_1FE4CD675C5ACADB*))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_3_B560799CAB48EE76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_B560799CAB48EE76_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_3_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_038349821F206DD5_OFFSET))(this);
	}

	::System::Void Method_3_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Void Method_3_433EC87BF5181040(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_433EC87BF5181040_OFFSET))(this, a1);
	}
};
