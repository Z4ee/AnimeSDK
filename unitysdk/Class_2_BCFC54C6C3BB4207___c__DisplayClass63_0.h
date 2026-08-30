#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D0B20)
#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS63_0___SETSTACKCAMERAVIEWSACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xB8D2520)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207___c__DisplayClass63_0_TypeDefinitionIndex = 76288;

class Class_2_BCFC54C6C3BB4207___c__DisplayClass63_0 : public ::System::Object
{
public:
	::System::Boolean isActive; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetStackCameraViewsActive_b__0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS63_0___SETSTACKCAMERAVIEWSACTIVE_B__0_OFFSET))(this, a1, a2);
	}
};
