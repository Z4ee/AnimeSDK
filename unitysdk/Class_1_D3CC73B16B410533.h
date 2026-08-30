#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/Struct_2_F8D9CEC872B937AF.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_252;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_D3CC73B16B410533_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C578B10)
#define CLASS_1_D3CC73B16B410533_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C578C30)
#define CLASS_1_D3CC73B16B410533_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C578C80)
#define CLASS_1_D3CC73B16B410533__CTOR_OFFSET UNITYSDK_OFFSET(0x1C578CD0)

inline static constexpr unsigned int Class_1_D3CC73B16B410533_TypeDefinitionIndex = 42009;

class Class_1_D3CC73B16B410533 : public ::System::Object
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* KIHEOMICPIE; // 0x10
	::Class_0_16E4307DCC419505_252* OIBKPJEGPOK; // 0x18
	::System::String* OENAMINOLLF; // 0x20
	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> NAMMCPHOCME; // 0x28
	::RPG::GameCore::LevelTriggerInfo* BICMEIOIFIF; // 0xB8
	::Struct_2_09B45CBFDAC5DA07 IMDLGFPMPEK; // 0xC0
	::Struct_2_F8D9CEC872B937AF OBKOLHGMGCM; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3CC73B16B410533__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3CC73B16B410533_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3CC73B16B410533_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3CC73B16B410533_ONRECYCLE_OFFSET))(this);
	}
};
