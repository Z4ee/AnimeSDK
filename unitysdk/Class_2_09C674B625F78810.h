#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace System { class Object; }

#define CLASS_2_09C674B625F78810_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x12476B60)
#define CLASS_2_09C674B625F78810_METHOD_2_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x12476800)
#define CLASS_2_09C674B625F78810_METHOD_2_EDAC50D2C44DBB20_OFFSET UNITYSDK_OFFSET(0x12476900)
#define CLASS_2_09C674B625F78810_ONALLOC_OFFSET UNITYSDK_OFFSET(0x12476780)
#define CLASS_2_09C674B625F78810_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x124767C0)
#define CLASS_2_09C674B625F78810_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x12476B70)
#define CLASS_2_09C674B625F78810__CTOR_OFFSET UNITYSDK_OFFSET(0x12476B80)

inline static constexpr unsigned int Class_2_09C674B625F78810_TypeDefinitionIndex = 49481;

class Class_2_09C674B625F78810 : public ::System::Collections::Generic::List_1<::System::Object*>
{
public:
	::System::Boolean _IsRecycled_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810_METHOD_2_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_2_EDAC50D2C44DBB20(::Class_2_09C674B625F78810* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_09C674B625F78810*))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810_METHOD_2_EDAC50D2C44DBB20_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRecycled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810_GET_ISRECYCLED_OFFSET))(this);
	}

	::System::Void set_IsRecycled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_09C674B625F78810_SET_ISRECYCLED_OFFSET))(this, value);
	}
};
