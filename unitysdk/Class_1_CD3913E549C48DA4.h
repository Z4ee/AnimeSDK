#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_CD3913E549C48DA4_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E59C40)
#define CLASS_1_CD3913E549C48DA4_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18E59CD0)
#define CLASS_1_CD3913E549C48DA4_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18E59E30)
#define CLASS_1_CD3913E549C48DA4__CTOR_OFFSET UNITYSDK_OFFSET(0x18E59E70)

inline static constexpr unsigned int Class_1_CD3913E549C48DA4_TypeDefinitionIndex = 39865;

class Class_1_CD3913E549C48DA4 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_0; // 0x10
	::RPG::PoolDictionary_2<::System::Int32, ::System::Boolean>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3913E549C48DA4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3913E549C48DA4_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3913E549C48DA4_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3913E549C48DA4_ONRECYCLE_OFFSET))(this);
	}
};
