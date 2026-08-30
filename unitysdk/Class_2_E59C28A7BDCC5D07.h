#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::GameCore { class AdvEnablePropDialogMode; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_E59C28A7BDCC5D07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A3F7F0)
#define CLASS_2_E59C28A7BDCC5D07_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x15A40930)
#define CLASS_2_E59C28A7BDCC5D07_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15A3FDA0)
#define CLASS_2_E59C28A7BDCC5D07_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x15A3F840)
#define CLASS_2_E59C28A7BDCC5D07_METHOD_2_E6F2B746784C0C83_OFFSET UNITYSDK_OFFSET(0x15A40280)
#define CLASS_2_E59C28A7BDCC5D07_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x15A408D0)
#define CLASS_2_E59C28A7BDCC5D07_ONSKIP_OFFSET UNITYSDK_OFFSET(0x15A40720)
#define CLASS_2_E59C28A7BDCC5D07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A3FE90)
#define CLASS_2_E59C28A7BDCC5D07_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A402E0)
#define CLASS_2_E59C28A7BDCC5D07_TICK_OFFSET UNITYSDK_OFFSET(0x15A40330)
#define CLASS_2_E59C28A7BDCC5D07__CTOR_OFFSET UNITYSDK_OFFSET(0x15A3F7D0)

inline static constexpr unsigned int Class_2_E59C28A7BDCC5D07_TypeDefinitionIndex = 52630;

class Class_2_E59C28A7BDCC5D07 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::GameEntity* NBEMEHAHGEG; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::TransformComponent* JDPKGCFJHJF; // 0x28
	::RPG::GameCore::AdventureCharacterController* OHMHKPLKPJI; // 0x30
	::RPG::GameCore::AdvEnablePropDialogMode* OFKGLJOAMLD; // 0x38
	::RPG::GameCore::GameEntity* ACJGKBDLCMF; // 0x40
	::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x48
	::System::Single AKAHKABBNAF; // 0x50
	::System::Boolean FPGKLEODJJN; // 0x54
	::UnityEngine::Vector3 KIPJGEFAHPF; // 0x58
	::System::Nullable_1<::UnityEngine::Vector3> EPBKDBCMBDN; // 0x64
	::System::Single MLIKCLDNOCI; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEnablePropDialogMode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEnablePropDialogMode*))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_30A2382C3FCC5386()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_METHOD_2_30A2382C3FCC5386_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_TICK_OFFSET))(this, a1);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_ONSKIP_OFFSET))(this);
	}

	::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_GET_FORCESKIP_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_E6F2B746784C0C83()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E59C28A7BDCC5D07_METHOD_2_E6F2B746784C0C83_OFFSET))(this);
	}
};
