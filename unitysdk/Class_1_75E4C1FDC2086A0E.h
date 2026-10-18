#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameEntityVar; }

#define CLASS_1_75E4C1FDC2086A0E_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8791D0)
#define CLASS_1_75E4C1FDC2086A0E_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C879230)
#define CLASS_1_75E4C1FDC2086A0E_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C879280)
#define CLASS_1_75E4C1FDC2086A0E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8792C0)

inline static constexpr unsigned int Class_1_75E4C1FDC2086A0E_TypeDefinitionIndex = 43339;

class Class_1_75E4C1FDC2086A0E : public ::System::Object
{
public:
	::RPG::PoolDictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::LittleGameEntityVar*>* DFGHCCCGIIB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75E4C1FDC2086A0E__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75E4C1FDC2086A0E_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75E4C1FDC2086A0E_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75E4C1FDC2086A0E_ONRECYCLE_OFFSET))(this);
	}
};
