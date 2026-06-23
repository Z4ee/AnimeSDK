#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_3_1F4762C34AABBBF6_1;
class Class_3_F66EF797857EB737;
namespace System { class EventArgs; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define CLASS_3_0B9C225AECA6B858_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1585BEF0)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x1585BA90)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1585BEE0)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x1585BF50)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1585BE80)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x1585BE90)
#define CLASS_3_0B9C225AECA6B858_METHOD_3_C8065D4F59F4EF02_OFFSET UNITYSDK_OFFSET(0x1585B960)
#define CLASS_3_0B9C225AECA6B858_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1585BB10)
#define CLASS_3_0B9C225AECA6B858_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1585AF70)
#define CLASS_3_0B9C225AECA6B858_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1585AF20)
#define CLASS_3_0B9C225AECA6B858__CTOR_OFFSET UNITYSDK_OFFSET(0x1585BDF0)

inline static constexpr unsigned int Class_3_0B9C225AECA6B858_TypeDefinitionIndex = 53118;

class Class_3_0B9C225AECA6B858 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_0B9C225AECA6B858*>
{
public:
	::Class_3_F66EF797857EB737* Field_3_1; // 0x20
	::UnityEngine::Coroutine* Field_3_2; // 0x28
	::System::Int32 Field_3_0; // 0x30

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

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_3_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_1F4762C34AABBBF6_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1F4762C34AABBBF6_1*))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Int32 Method_3_C8065D4F59F4EF02()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0B9C225AECA6B858_METHOD_3_C8065D4F59F4EF02_OFFSET))(this);
	}
};
