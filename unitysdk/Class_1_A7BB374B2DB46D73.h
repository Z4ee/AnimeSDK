#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }

#define CLASS_1_A7BB374B2DB46D73_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D3F760)
#define CLASS_1_A7BB374B2DB46D73_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18D3F680)
#define CLASS_1_A7BB374B2DB46D73_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18D3F720)
#define CLASS_1_A7BB374B2DB46D73__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3F7E0)

inline static constexpr unsigned int Class_1_A7BB374B2DB46D73_TypeDefinitionIndex = 40086;

class Class_1_A7BB374B2DB46D73 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::String*>* Field_1_0; // 0x10
	::RPG::PoolList_1<::System::Int32>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7BB374B2DB46D73__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7BB374B2DB46D73_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7BB374B2DB46D73_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7BB374B2DB46D73_CLEAR_OFFSET))(this);
	}
};
