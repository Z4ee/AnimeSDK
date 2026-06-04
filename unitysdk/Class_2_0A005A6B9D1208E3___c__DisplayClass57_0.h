#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }

#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BF9B0)
#define CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS57_0___SETSTACKCAMERAVIEWSACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xA5C0B80)

inline static constexpr unsigned int Class_2_0A005A6B9D1208E3___c__DisplayClass57_0_TypeDefinitionIndex = 71303;

class Class_2_0A005A6B9D1208E3___c__DisplayClass57_0 : public ::System::Object
{
public:
	::System::Boolean isActive; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetStackCameraViewsActive_b__0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_0A005A6B9D1208E3___C__DISPLAYCLASS57_0___SETSTACKCAMERAVIEWSACTIVE_B__0_OFFSET))(this, a1, a2);
	}
};
