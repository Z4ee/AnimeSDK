#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9B436617F93D1E3D_1;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_C5A7FFA83DA2ECD6_CLEAR_OFFSET UNITYSDK_OFFSET(0x17F0BBB0)
#define CLASS_1_C5A7FFA83DA2ECD6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17F0BCF0)
#define CLASS_1_C5A7FFA83DA2ECD6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17F0BD40)
#define CLASS_1_C5A7FFA83DA2ECD6__CTOR_OFFSET UNITYSDK_OFFSET(0x17F0BD80)

inline static constexpr unsigned int Class_1_C5A7FFA83DA2ECD6_TypeDefinitionIndex = 39149;

class Class_1_C5A7FFA83DA2ECD6 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::Class_1_9B436617F93D1E3D_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5A7FFA83DA2ECD6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5A7FFA83DA2ECD6_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5A7FFA83DA2ECD6_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5A7FFA83DA2ECD6_ONRECYCLE_OFFSET))(this);
	}
};
