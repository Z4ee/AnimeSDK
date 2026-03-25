#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_6180D94999EC13F6;
namespace RPG::GameCore { class StartMissionCameraTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_2_29D68A3561FF4239_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C0FC30)
#define CLASS_2_29D68A3561FF4239_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10C0FE10)
#define CLASS_2_29D68A3561FF4239_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10C0FCD0)
#define CLASS_2_29D68A3561FF4239_TICK_OFFSET UNITYSDK_OFFSET(0x10C0FD60)
#define CLASS_2_29D68A3561FF4239__CTOR_OFFSET UNITYSDK_OFFSET(0x10C0F3C0)

inline static constexpr unsigned int Class_2_29D68A3561FF4239_TypeDefinitionIndex = 47406;

class Class_2_29D68A3561FF4239 : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::StartMissionCameraTemplate* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::Class_2_6180D94999EC13F6* Field_2_3; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartMissionCameraTemplate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMissionCameraTemplate*))((::PBYTE)hIl2Cpp + CLASS_2_29D68A3561FF4239__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D68A3561FF4239_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_29D68A3561FF4239_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D68A3561FF4239_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D68A3561FF4239_ONTASKRESET_OFFSET))(this);
	}
};
