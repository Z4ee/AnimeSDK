#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B436617F93D1E3D_1;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_6B2D613E48CA4DA1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C89E1F0)
#define CLASS_1_6B2D613E48CA4DA1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C89E360)
#define CLASS_1_6B2D613E48CA4DA1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C89E3D0)
#define CLASS_1_6B2D613E48CA4DA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C89E410)

inline static constexpr unsigned int Class_1_6B2D613E48CA4DA1_TypeDefinitionIndex = 43324;

class Class_1_6B2D613E48CA4DA1 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_9B436617F93D1E3D_1*>* CMNGBMONJLE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B2D613E48CA4DA1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B2D613E48CA4DA1_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B2D613E48CA4DA1_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6B2D613E48CA4DA1_ONRECYCLE_OFFSET))(this);
	}
};
