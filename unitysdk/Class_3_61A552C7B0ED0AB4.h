#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_38A71F76592AF3BC;
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }
namespace RPG::GameCore { class SetupMapRotationVolume; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_61A552C7B0ED0AB4_METHOD_3_BDDE1E8FA0F3D369_OFFSET UNITYSDK_OFFSET(0x13C2C8B0)
#define CLASS_3_61A552C7B0ED0AB4_METHOD_3_D25AED48EA4A567D_OFFSET UNITYSDK_OFFSET(0x13C2C700)
#define CLASS_3_61A552C7B0ED0AB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13C2C1F0)
#define CLASS_3_61A552C7B0ED0AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2C1C0)

inline static constexpr unsigned int Class_3_61A552C7B0ED0AB4_TypeDefinitionIndex = 49543;

class Class_3_61A552C7B0ED0AB4 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetupMapRotationVolume*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetupMapRotationVolume* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetupMapRotationVolume*))((::PBYTE)hIl2Cpp + CLASS_3_61A552C7B0ED0AB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A552C7B0ED0AB4_ONTASKBEGIN_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_38A71F76592AF3BC*>* Method_3_D25AED48EA4A567D()
	{
		return ((::Il2CppArray<::Class_1_38A71F76592AF3BC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A552C7B0ED0AB4_METHOD_3_D25AED48EA4A567D_OFFSET))(this);
	}

	::Class_1_38A71F76592AF3BC* Method_3_BDDE1E8FA0F3D369(::RPG::GameCore::MapRotationVolumeSlotConfigBase* a1)
	{
		return ((::Class_1_38A71F76592AF3BC*(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*))((::PBYTE)hIl2Cpp + CLASS_3_61A552C7B0ED0AB4_METHOD_3_BDDE1E8FA0F3D369_OFFSET))(this, a1);
	}
};
