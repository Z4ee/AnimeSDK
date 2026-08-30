#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class FiveDimEntityVar; }

#define CLASS_1_5F08A88160B0E2D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C328EE0)
#define CLASS_1_5F08A88160B0E2D6_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C328F40)
#define CLASS_1_5F08A88160B0E2D6_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C328F90)
#define CLASS_1_5F08A88160B0E2D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C328FD0)

inline static constexpr unsigned int Class_1_5F08A88160B0E2D6_TypeDefinitionIndex = 41697;

class Class_1_5F08A88160B0E2D6 : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::FiveDimEntityVar*>* DFGHCCCGIIB; // 0x10

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
