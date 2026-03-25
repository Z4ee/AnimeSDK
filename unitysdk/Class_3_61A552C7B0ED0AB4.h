#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_38A71F76592AF3BC;
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }
namespace RPG::GameCore { class SetupMapRotationVolume; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_61A552C7B0ED0AB4_METHOD_3_3C419EEF24F7F8C8_OFFSET UNITYSDK_OFFSET(0x11586250)
#define CLASS_3_61A552C7B0ED0AB4_METHOD_3_6D6E846B00DB5978_OFFSET UNITYSDK_OFFSET(0x11586080)
#define CLASS_3_61A552C7B0ED0AB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11585B70)
#define CLASS_3_61A552C7B0ED0AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x11585B40)

inline static constexpr unsigned int Class_3_61A552C7B0ED0AB4_TypeDefinitionIndex = 42893;

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

	::Il2CppArray<::Class_1_38A71F76592AF3BC*>* Method_3_6D6E846B00DB5978()
	{
		return ((::Il2CppArray<::Class_1_38A71F76592AF3BC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_61A552C7B0ED0AB4_METHOD_3_6D6E846B00DB5978_OFFSET))(this);
	}

	::Class_1_38A71F76592AF3BC* Method_3_3C419EEF24F7F8C8(::RPG::GameCore::MapRotationVolumeSlotConfigBase* a1)
	{
		return ((::Class_1_38A71F76592AF3BC*(*)(::PVOID, ::RPG::GameCore::MapRotationVolumeSlotConfigBase*))((::PBYTE)hIl2Cpp + CLASS_3_61A552C7B0ED0AB4_METHOD_3_3C419EEF24F7F8C8_OFFSET))(this, a1);
	}
};
