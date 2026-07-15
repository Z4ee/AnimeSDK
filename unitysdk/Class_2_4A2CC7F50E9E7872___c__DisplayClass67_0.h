#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56DCA1B58073717B;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS67_0__CTOR_OFFSET UNITYSDK_OFFSET(0x152BDA80)
#define CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS67_0___FOREACHSTACKFOLLOWCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0x152BF310)

inline static constexpr unsigned int Class_2_4A2CC7F50E9E7872___c__DisplayClass67_0_TypeDefinitionIndex = 72828;

class Class_2_4A2CC7F50E9E7872___c__DisplayClass67_0 : public ::System::Object
{
public:
	::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS67_0__CTOR_OFFSET))(this);
	}

	::System::Void __ForEachStackFollowCamera_b__0(::Class_2_56DCA1B58073717B* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_56DCA1B58073717B*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_4A2CC7F50E9E7872___C__DISPLAYCLASS67_0___FOREACHSTACKFOLLOWCAMERA_B__0_OFFSET))(this, a1, a2, a3);
	}
};
