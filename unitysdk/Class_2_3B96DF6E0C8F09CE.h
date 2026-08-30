#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class SetCameraRootFollow; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_3B96DF6E0C8F09CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDD97F20)
#define CLASS_2_3B96DF6E0C8F09CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDD97F60)
#define CLASS_2_3B96DF6E0C8F09CE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDD981C0)
#define CLASS_2_3B96DF6E0C8F09CE_TICK_OFFSET UNITYSDK_OFFSET(0xDD98210)
#define CLASS_2_3B96DF6E0C8F09CE__CTOR_OFFSET UNITYSDK_OFFSET(0xDD97F10)

inline static constexpr unsigned int Class_2_3B96DF6E0C8F09CE_TypeDefinitionIndex = 55562;

class Class_2_3B96DF6E0C8F09CE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::GameCore::SetCameraRootFollow* OFKGLJOAMLD; // 0x20

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
