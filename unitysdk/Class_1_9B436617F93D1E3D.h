#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_9B436617F93D1E3D_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CDF1200)
#define CLASS_1_9B436617F93D1E3D_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CDF1260)
#define CLASS_1_9B436617F93D1E3D_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CDF12F0)
#define CLASS_1_9B436617F93D1E3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF1330)

inline static constexpr unsigned int Class_1_9B436617F93D1E3D_TypeDefinitionIndex = 41695;

class Class_1_9B436617F93D1E3D : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* IDFAGECBIOP; // 0x10
	::System::Boolean FLFCNGBOCEK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_ONRECYCLE_OFFSET))(this);
	}
};
