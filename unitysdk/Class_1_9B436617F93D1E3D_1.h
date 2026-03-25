#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_9B436617F93D1E3D_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16826FF0)
#define CLASS_1_9B436617F93D1E3D_1_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16827050)
#define CLASS_1_9B436617F93D1E3D_1_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x168270E0)
#define CLASS_1_9B436617F93D1E3D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16827120)

inline static constexpr unsigned int Class_1_9B436617F93D1E3D_1_TypeDefinitionIndex = 33357;

class Class_1_9B436617F93D1E3D_1 : public ::System::Object
{
public:
	::RPG::PoolList_1<::System::Int32>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_1_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9B436617F93D1E3D_1_ONRECYCLE_OFFSET))(this);
	}
};
