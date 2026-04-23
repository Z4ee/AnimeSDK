#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AD2E1FFEF7B18A8C.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_7E45BC5B315D880F_CLEAR_OFFSET UNITYSDK_OFFSET(0x180A4090)
#define CLASS_1_7E45BC5B315D880F_ONALLOC_OFFSET UNITYSDK_OFFSET(0x180A4220)
#define CLASS_1_7E45BC5B315D880F_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x180A42E0)
#define CLASS_1_7E45BC5B315D880F__CTOR_OFFSET UNITYSDK_OFFSET(0x180A4330)

inline static constexpr unsigned int Class_1_7E45BC5B315D880F_TypeDefinitionIndex = 39176;

class Class_1_7E45BC5B315D880F : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::System::UInt32, ::RPG::PoolList_1<::System::UInt32>*>* Field_1_1; // 0x10
	::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_AD2E1FFEF7B18A8C>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E45BC5B315D880F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E45BC5B315D880F_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E45BC5B315D880F_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E45BC5B315D880F_ONRECYCLE_OFFSET))(this);
	}
};
