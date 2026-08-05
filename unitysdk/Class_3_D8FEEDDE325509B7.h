#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D8FEEDDE325509B7_METHOD_3_2DD7377814EAD872_OFFSET UNITYSDK_OFFSET(0xF7465D0)
#define CLASS_3_D8FEEDDE325509B7_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0xF746810)
#define CLASS_3_D8FEEDDE325509B7_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0xF746820)
#define CLASS_3_D8FEEDDE325509B7_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xF746800)
#define CLASS_3_D8FEEDDE325509B7_ONDETACH_OFFSET UNITYSDK_OFFSET(0xF7463F0)
#define CLASS_3_D8FEEDDE325509B7_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xF746550)
#define CLASS_3_D8FEEDDE325509B7_ONENABLE_OFFSET UNITYSDK_OFFSET(0xF7463B0)
#define CLASS_3_D8FEEDDE325509B7__CTOR_OFFSET UNITYSDK_OFFSET(0xF746590)

inline static constexpr unsigned int Class_3_D8FEEDDE325509B7_TypeDefinitionIndex = 91090;

class Class_3_D8FEEDDE325509B7 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_D8FEEDDE325509B7*>
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x20
	::System::Int32 Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDetach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_ONDETACH_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_2DD7377814EAD872(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_METHOD_3_2DD7377814EAD872_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8FEEDDE325509B7_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}
};
