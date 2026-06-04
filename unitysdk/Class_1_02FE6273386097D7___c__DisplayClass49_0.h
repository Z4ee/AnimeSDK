#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineBrain; }

#define CLASS_1_02FE6273386097D7___C__DISPLAYCLASS49_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13CC8890)
#define CLASS_1_02FE6273386097D7___C__DISPLAYCLASS49_0___INITBATTLECAMERATARGETGROUP_B__0_OFFSET UNITYSDK_OFFSET(0x13CC88A0)

inline static constexpr unsigned int Class_1_02FE6273386097D7___c__DisplayClass49_0_TypeDefinitionIndex = 72328;

class Class_1_02FE6273386097D7___c__DisplayClass49_0 : public ::System::Object
{
public:
	::Cinemachine::CinemachineBrain* brain; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7___C__DISPLAYCLASS49_0__CTOR_OFFSET))(this);
	}

	::System::Void __InitBattleCameraTargetGroup_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02FE6273386097D7___C__DISPLAYCLASS49_0___INITBATTLECAMERATARGETGROUP_B__0_OFFSET))(this);
	}
};
