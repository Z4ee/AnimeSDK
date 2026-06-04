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

#define CLASS_2_E59C28A7BDCC5D07_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BA6650)
#define CLASS_2_E59C28A7BDCC5D07_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x13BA7790)
#define CLASS_2_E59C28A7BDCC5D07_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x13BA6C00)
#define CLASS_2_E59C28A7BDCC5D07_METHOD_2_30A2382C3FCC5386_OFFSET UNITYSDK_OFFSET(0x13BA66A0)
#define CLASS_2_E59C28A7BDCC5D07_METHOD_2_E6F2B746784C0C83_OFFSET UNITYSDK_OFFSET(0x13BA70E0)
#define CLASS_2_E59C28A7BDCC5D07_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x13BA7730)
#define CLASS_2_E59C28A7BDCC5D07_ONSKIP_OFFSET UNITYSDK_OFFSET(0x13BA7580)
#define CLASS_2_E59C28A7BDCC5D07_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BA6CF0)
#define CLASS_2_E59C28A7BDCC5D07_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x13BA7140)
#define CLASS_2_E59C28A7BDCC5D07_TICK_OFFSET UNITYSDK_OFFSET(0x13BA7190)
#define CLASS_2_E59C28A7BDCC5D07__CTOR_OFFSET UNITYSDK_OFFSET(0x13BA6630)

inline static constexpr unsigned int Class_2_E59C28A7BDCC5D07_TypeDefinitionIndex = 48956;

class Class_2_E59C28A7BDCC5D07 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::GameEntity* Field_2_1; // 0x20
	::RPG::GameCore::TransformComponent* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30
	::RPG::GameCore::AdvEnablePropDialogMode* Field_2_4; // 0x38
	::RPG::GameCore::AdventureCharacterController* Field_2_5; // 0x40
	::RPG::Client::CameraDataAndFlags* Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x50
	::UnityEngine::Vector3 Field_2_8; // 0x54
	::System::Single Field_2_9; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_10; // 0x64
	::System::Boolean Field_2_11; // 0x74

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
