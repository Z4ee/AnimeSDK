#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class Obsolete; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E6477D6774952105_DISPOSE_OFFSET UNITYSDK_OFFSET(0x115A6550)
#define CLASS_2_E6477D6774952105_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x115A6590)
#define CLASS_2_E6477D6774952105_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x115A65E0)
#define CLASS_2_E6477D6774952105_TICK_OFFSET UNITYSDK_OFFSET(0x115A6630)
#define CLASS_2_E6477D6774952105__CTOR_OFFSET UNITYSDK_OFFSET(0x115A6540)

inline static constexpr unsigned int Class_2_E6477D6774952105_TypeDefinitionIndex = 45312;

class Class_2_E6477D6774952105 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::Obsolete* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::Obsolete* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::Obsolete*))((::PBYTE)hIl2Cpp + CLASS_2_E6477D6774952105__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6477D6774952105_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6477D6774952105_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E6477D6774952105_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E6477D6774952105_TICK_OFFSET))(this, a1);
	}
};
