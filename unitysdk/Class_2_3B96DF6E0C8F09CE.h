#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCameraRootFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3B96DF6E0C8F09CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11E2FAC0)
#define CLASS_2_3B96DF6E0C8F09CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11E2FB00)
#define CLASS_2_3B96DF6E0C8F09CE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11E2FCF0)
#define CLASS_2_3B96DF6E0C8F09CE_TICK_OFFSET UNITYSDK_OFFSET(0x11E2FD40)
#define CLASS_2_3B96DF6E0C8F09CE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E2FAB0)

inline static constexpr unsigned int Class_2_3B96DF6E0C8F09CE_TypeDefinitionIndex = 51046;

class Class_2_3B96DF6E0C8F09CE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::SetCameraRootFollow* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCameraRootFollow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCameraRootFollow*))((::PBYTE)hIl2Cpp + CLASS_2_3B96DF6E0C8F09CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B96DF6E0C8F09CE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B96DF6E0C8F09CE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B96DF6E0C8F09CE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3B96DF6E0C8F09CE_TICK_OFFSET))(this, a1);
	}
};
