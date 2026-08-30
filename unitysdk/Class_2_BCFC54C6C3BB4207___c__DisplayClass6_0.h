#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BCFC54C6C3BB4207;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17E73AA0)
#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET UNITYSDK_OFFSET(0x17E83D20)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207___c__DisplayClass6_0_TypeDefinitionIndex = 76288;

class Class_2_BCFC54C6C3BB4207___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_BCFC54C6C3BB4207* __4__this; // 0x10
	::System::Single startOrthographicSize; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __PresetStackOrthographicSizeForStartCurve_b__0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET))(this, a1, a2);
	}
};
