#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B20028AAAE94F57;
class Class_1_3AD2528CD53B1639_7;
class Class_1_9671734BA1DFB3F8;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FDC3CA37FB2E9E6E_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x18084490)
#define CLASS_1_FDC3CA37FB2E9E6E_METHOD_1_3243A239BD00E052_OFFSET UNITYSDK_OFFSET(0x180839C0)
#define CLASS_1_FDC3CA37FB2E9E6E_METHOD_1_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x18083BE0)
#define CLASS_1_FDC3CA37FB2E9E6E_METHOD_1_7DA625EE4FDA8C1A_OFFSET UNITYSDK_OFFSET(0x180841B0)
#define CLASS_1_FDC3CA37FB2E9E6E_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x180844A0)
#define CLASS_1_FDC3CA37FB2E9E6E__CTOR_OFFSET UNITYSDK_OFFSET(0x18083940)

inline static constexpr unsigned int Class_1_FDC3CA37FB2E9E6E_TypeDefinitionIndex = 38953;

class Class_1_FDC3CA37FB2E9E6E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_3; // 0x10
	::Class_1_1B20028AAAE94F57* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_9671734BA1DFB3F8*>* Field_1_2; // 0x20
	::System::Int32 Field_1_4; // 0x28
	::System::Boolean _IsActive_k__BackingField; // 0x2C
	::System::UInt32 Field_1_6; // 0x30
	::System::Single Field_1_5; // 0x34

	::System::Void _ctor(::Class_1_1B20028AAAE94F57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1B20028AAAE94F57*))((::PBYTE)hIl2Cpp + CLASS_1_FDC3CA37FB2E9E6E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3243A239BD00E052(::Class_1_9671734BA1DFB3F8* a1, ::System::Int32 a2, ::System::Single a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9671734BA1DFB3F8*, ::System::Int32, ::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FDC3CA37FB2E9E6E_METHOD_1_3243A239BD00E052_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3CA37FB2E9E6E_METHOD_1_489E0B827662C211_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_3AD2528CD53B1639_7*>* Method_1_7DA625EE4FDA8C1A()
	{
		return ((::Il2CppArray<::Class_1_3AD2528CD53B1639_7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3CA37FB2E9E6E_METHOD_1_7DA625EE4FDA8C1A_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FDC3CA37FB2E9E6E_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FDC3CA37FB2E9E6E_SET_ISACTIVE_OFFSET))(this, value);
	}
};
