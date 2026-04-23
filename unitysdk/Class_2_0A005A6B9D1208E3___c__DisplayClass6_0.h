#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0A005A6B9D1208E3;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1244C790)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET UNITYSDK_OFFSET(0x124592F0)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass6_0_TypeDefinitionIndex = 70489;

class Class_2_0A005A6B9D1208E3___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_0A005A6B9D1208E3* __4__this; // 0x10
	::System::Single startOrthographicSize; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __PresetStackOrthographicSizeForStartCurve_b__0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* _, ::Cinemachine::CinemachineVirtualCameraBase* vc)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET))(this, _, vc);
	}
};
