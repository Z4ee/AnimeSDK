#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class FiveDimEntityVar; }

#define CLASS_1_5F08A88160B0E2D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B908E0)
#define CLASS_1_5F08A88160B0E2D6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18B90940)
#define CLASS_1_5F08A88160B0E2D6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18B90990)
#define CLASS_1_5F08A88160B0E2D6__CTOR_OFFSET UNITYSDK_OFFSET(0x18B909D0)

inline static constexpr unsigned int Class_1_5F08A88160B0E2D6_TypeDefinitionIndex = 39932;

class Class_1_5F08A88160B0E2D6 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FiveDimEntityVar*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F08A88160B0E2D6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F08A88160B0E2D6_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F08A88160B0E2D6_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F08A88160B0E2D6_ONRECYCLE_OFFSET))(this);
	}
};
