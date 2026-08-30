#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B436617F93D1E3D_1;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_088B9305470FC41F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C158DA0)
#define CLASS_1_088B9305470FC41F_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C158EE0)
#define CLASS_1_088B9305470FC41F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C158F30)
#define CLASS_1_088B9305470FC41F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C158F70)

inline static constexpr unsigned int Class_1_088B9305470FC41F_TypeDefinitionIndex = 41683;

class Class_1_088B9305470FC41F : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_9B436617F93D1E3D_1*>* CMNGBMONJLE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088B9305470FC41F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088B9305470FC41F_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088B9305470FC41F_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088B9305470FC41F_ONRECYCLE_OFFSET))(this);
	}
};
