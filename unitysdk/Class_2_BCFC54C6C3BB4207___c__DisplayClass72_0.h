#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS72_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB8D0CD0)
#define CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS72_0___FOREACHSTACKFOLLOWCAMERA_B__0_OFFSET UNITYSDK_OFFSET(0xB8D2640)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207___c__DisplayClass72_0_TypeDefinitionIndex = 76290;

class Class_2_BCFC54C6C3BB4207___c__DisplayClass72_0 : public ::System::Object
{
public:
	::System::Action_2<::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*>* action; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS72_0__CTOR_OFFSET))(this);
	}

	::System::Void __ForEachStackFollowCamera_b__0(::Class_2_B8E38BF47138A2E5* a1, ::Cinemachine::CinemachineVirtualCamera* a2, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Cinemachine::CinemachineVirtualCamera*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__DISPLAYCLASS72_0___FOREACHSTACKFOLLOWCAMERA_B__0_OFFSET))(this, a1, a2, a3);
	}
};
