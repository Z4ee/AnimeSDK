#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_573C9D26E27F773D_METHOD_3_2A8B73C445B86D1A_OFFSET UNITYSDK_OFFSET(0x125A6270)
#define CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x125A6730)
#define CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_2_OFFSET UNITYSDK_OFFSET(0x125A6740)
#define CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_3_OFFSET UNITYSDK_OFFSET(0x125A6750)
#define CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x125A6720)
#define CLASS_3_573C9D26E27F773D_ONATTACH_OFFSET UNITYSDK_OFFSET(0x125A61E0)
#define CLASS_3_573C9D26E27F773D_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x125A6640)
#define CLASS_3_573C9D26E27F773D_ONENABLE_OFFSET UNITYSDK_OFFSET(0x125A6220)
#define CLASS_3_573C9D26E27F773D_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x125A6690)
#define CLASS_3_573C9D26E27F773D__CTOR_OFFSET UNITYSDK_OFFSET(0x125A66E0)

inline static constexpr unsigned int Class_3_573C9D26E27F773D_TypeDefinitionIndex = 58296;

class Class_3_573C9D26E27F773D : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_573C9D26E27F773D*>
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D__CTOR_OFFSET))(this);
	}

	::System::Void OnAttach()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_ONATTACH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_2_OFFSET))(this);
	}

	::System::Void Method_3_832295EC279E5994_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_METHOD_3_832295EC279E5994_3_OFFSET))(this);
	}

	::System::Void Method_3_2A8B73C445B86D1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_573C9D26E27F773D_METHOD_3_2A8B73C445B86D1A_OFFSET))(this, a1);
	}
};
