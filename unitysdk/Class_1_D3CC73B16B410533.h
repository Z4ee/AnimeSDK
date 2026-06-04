#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"
#include "unitysdk/Struct_2_09B45CBFDAC5DA07.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_227;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_1_D3CC73B16B410533_CLEAR_OFFSET UNITYSDK_OFFSET(0x18DAD4D0)
#define CLASS_1_D3CC73B16B410533_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18DAD5A0)
#define CLASS_1_D3CC73B16B410533_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18DAD5F0)
#define CLASS_1_D3CC73B16B410533__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAD640)

inline static constexpr unsigned int Class_1_D3CC73B16B410533_TypeDefinitionIndex = 40234;

class Class_1_D3CC73B16B410533 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_227* Field_1_0; // 0x10
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_1_1; // 0x18
	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Field_1_2; // 0x20
	::Struct_2_9BF8902D61AE1796 Field_1_3; // 0xB0
	::RPG::GameCore::LevelTriggerInfo* Field_1_4; // 0x140
	::Struct_2_09B45CBFDAC5DA07 Field_1_5; // 0x148
	::System::String* Field_1_6; // 0x168

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
