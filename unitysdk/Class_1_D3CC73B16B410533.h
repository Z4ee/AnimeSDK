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

#define CLASS_1_D3CC73B16B410533_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D39E090)
#define CLASS_1_D3CC73B16B410533_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1D39E160)
#define CLASS_1_D3CC73B16B410533_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1D39E1B0)
#define CLASS_1_D3CC73B16B410533__CTOR_OFFSET UNITYSDK_OFFSET(0x1D39E200)

inline static constexpr unsigned int Class_1_D3CC73B16B410533_TypeDefinitionIndex = 42009;

class Class_1_D3CC73B16B410533 : public ::System::Object
{
public:
	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> NAMMCPHOCME; // 0x10
	::Struct_2_F8D9CEC872B937AF OBKOLHGMGCM; // 0xA0
	::Class_0_16E4307DCC419505_252* OIBKPJEGPOK; // 0x130
	::System::String* OENAMINOLLF; // 0x138
	::Struct_2_09B45CBFDAC5DA07 IMDLGFPMPEK; // 0x140
	::RPG::GameCore::LevelTriggerInfo* BICMEIOIFIF; // 0x160
	::RPG::PoolList_1<::UnityEngine::Collider*>* KIHEOMICPIE; // 0x168

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
