#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4A2CC7F50E9E7872;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152B0130)
#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET UNITYSDK_OFFSET(0x152BF3D0)

inline static constexpr unsigned int Class_2_4A2CC7F50E9E7872___c__DisplayClass6_0_TypeDefinitionIndex = 72830;

class Class_2_4A2CC7F50E9E7872___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_4A2CC7F50E9E7872* __4__this; // 0x10
	::System::Single startOrthographicSize; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __PresetStackOrthographicSizeForStartCurve_b__0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS6_0___PRESETSTACKORTHOGRAPHICSIZEFORSTARTCURVE_B__0_OFFSET))(this, a1, a2);
	}
};
