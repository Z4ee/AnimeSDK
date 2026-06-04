#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetFlipperLightDeviceRangeFollowPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_16018347603D926D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA362180)
#define CLASS_2_16018347603D926D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA362030)
#define CLASS_2_16018347603D926D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA3621C0)
#define CLASS_2_16018347603D926D_TICK_OFFSET UNITYSDK_OFFSET(0xA362210)
#define CLASS_2_16018347603D926D__CTOR_OFFSET UNITYSDK_OFFSET(0xA362020)

inline static constexpr unsigned int Class_2_16018347603D926D_TypeDefinitionIndex = 49370;

class Class_2_16018347603D926D : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetFlipperLightDeviceRangeFollowPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_16018347603D926D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16018347603D926D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16018347603D926D_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16018347603D926D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16018347603D926D_TICK_OFFSET))(this, a1);
	}
};
