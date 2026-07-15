#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace System { class Object; }

#define CLASS_2_FC12FDC7914CFFD8_GET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x1518BEE0)
#define CLASS_2_FC12FDC7914CFFD8_METHOD_2_8E57ACEBAD29171F_OFFSET UNITYSDK_OFFSET(0x1518BB00)
#define CLASS_2_FC12FDC7914CFFD8_METHOD_2_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x1518B9C0)
#define CLASS_2_FC12FDC7914CFFD8_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1518B940)
#define CLASS_2_FC12FDC7914CFFD8_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1518B980)
#define CLASS_2_FC12FDC7914CFFD8_SET_ISRECYCLED_OFFSET UNITYSDK_OFFSET(0x1518BEF0)
#define CLASS_2_FC12FDC7914CFFD8__CTOR_OFFSET UNITYSDK_OFFSET(0x1518BF00)

inline static constexpr unsigned int Class_2_FC12FDC7914CFFD8_TypeDefinitionIndex = 51230;

class Class_2_FC12FDC7914CFFD8 : public ::System::Collections::Generic::List_1<::System::Object*>
{
public:
	::System::Boolean _IsRecycled_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_2_9B1F2653496E5C47()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8_METHOD_2_9B1F2653496E5C47_OFFSET))(this);
	}

	::System::Void Method_2_8E57ACEBAD29171F(::Class_2_FC12FDC7914CFFD8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FC12FDC7914CFFD8*))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8_METHOD_2_8E57ACEBAD29171F_OFFSET))(this, a1);
	}

	::System::Boolean get_IsRecycled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8_GET_ISRECYCLED_OFFSET))(this);
	}

	::System::Void set_IsRecycled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FC12FDC7914CFFD8_SET_ISRECYCLED_OFFSET))(this, a1);
	}
};
