#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2F95775169BD5203;
class WaveSimPanel;

#define CLASS_1_D5D147579CBDAF3E___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB611950)
#define CLASS_1_D5D147579CBDAF3E___C__DISPLAYCLASS9_0__TRIGGERFALLEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xB612E50)

inline static constexpr unsigned int Class_1_D5D147579CBDAF3E___c__DisplayClass9_0_TypeDefinitionIndex = 70828;

class Class_1_D5D147579CBDAF3E___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_2F95775169BD5203* instance; // 0x10
	::WaveSimPanel* panel; // 0x18
	::System::Single radius; // 0x20
	::UnityEngine::Quaternion rotation; // 0x24
	::UnityEngine::Vector3 position; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _TriggerFallEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5D147579CBDAF3E___C__DISPLAYCLASS9_0__TRIGGERFALLEFFECT_B__0_OFFSET))(this);
	}
};
