#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipNavigateTo; }

#define CLASS_2_E63F6A32CF0C60CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17530540)
#define CLASS_2_E63F6A32CF0C60CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17530650)
#define CLASS_2_E63F6A32CF0C60CE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x175309B0)
#define CLASS_2_E63F6A32CF0C60CE_TICK_OFFSET UNITYSDK_OFFSET(0x17530580)
#define CLASS_2_E63F6A32CF0C60CE__CTOR_OFFSET UNITYSDK_OFFSET(0x17530530)

inline static constexpr unsigned int Class_2_E63F6A32CF0C60CE_TypeDefinitionIndex = 51012;

class Class_2_E63F6A32CF0C60CE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TravelShipNavigateTo* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipNavigateTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipNavigateTo*))((::PBYTE)hIl2Cpp + CLASS_2_E63F6A32CF0C60CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E63F6A32CF0C60CE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E63F6A32CF0C60CE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E63F6A32CF0C60CE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E63F6A32CF0C60CE_ONTASKRESET_OFFSET))(this);
	}
};
