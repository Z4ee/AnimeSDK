#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7E439EF9F54D19A0.h"

class Class_1_8789803C08702B21;
class Class_3_AA801472CE8A39B1;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DBB4F545E98036CC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x11B4D480)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_038349821F206DD5_OFFSET UNITYSDK_OFFSET(0x11B4D620)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_433EC87BF5181040_OFFSET UNITYSDK_OFFSET(0x11B4D600)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x11B4D610)
#define CLASS_3_DBB4F545E98036CC_METHOD_3_B560799CAB48EE76_OFFSET UNITYSDK_OFFSET(0x11B4D540)
#define CLASS_3_DBB4F545E98036CC__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4D410)

inline static constexpr unsigned int Class_3_DBB4F545E98036CC_TypeDefinitionIndex = 72318;

class Class_3_DBB4F545E98036CC : public ::Class_2_7E439EF9F54D19A0
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x40

	::System::Void _ctor(::Class_1_8789803C08702B21* a1, ::Class_3_AA801472CE8A39B1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8789803C08702B21*, ::Class_3_AA801472CE8A39B1*))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_3_B560799CAB48EE76(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_B560799CAB48EE76_OFFSET))(this, a1);
	}

	::System::Void Method_3_433EC87BF5181040(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_433EC87BF5181040_OFFSET))(this, a1);
	}

	::System::Void Method_3_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_3_038349821F206DD5()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DBB4F545E98036CC_METHOD_3_038349821F206DD5_OFFSET))(this);
	}
};
