#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_3_1F4762C34AABBBF6;
class Class_3_F66EF797857EB737;
namespace System { class EventArgs; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_3_0B9C225AECA6B858_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1653CA80)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1653C660)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1653CA60)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1653CA70)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1653CA50)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x1653CA00)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_C8065D4F59F4EF02_OFFSET UNITYSDK_OFFSET(0x1653C530)
#define CLASS_3_0B9C225AECA6B858_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1653C6E0)
#define CLASS_3_0B9C225AECA6B858_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1653BB10)
#define CLASS_3_0B9C225AECA6B858_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1653BAC0)
#define CLASS_3_0B9C225AECA6B858__CTOR_OFFSET UNITYSDK_OFFSET(0x1653C9C0)

inline static constexpr unsigned int Class_3_0B9C225AECA6B858_TypeDefinitionIndex = 53503;

class Class_3_0B9C225AECA6B858 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_0B9C225AECA6B858*>
{
public:
	::UnityEngine::Coroutine* Field_3_7; // 0x20
	::Class_3_F66EF797857EB737* Field_3_0; // 0x28
	::System::Int32 Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858__CTOR_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_ONRECYCLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_3_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_1F4762C34AABBBF6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1F4762C34AABBBF6*))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_C8065D4F59F4EF02()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_C8065D4F59F4EF02_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
	}
};
