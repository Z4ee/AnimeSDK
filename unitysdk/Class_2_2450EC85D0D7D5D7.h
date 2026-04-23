#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ElfEnterNextDay; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_2450EC85D0D7D5D7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x91C3360)
#define CLASS_2_2450EC85D0D7D5D7_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x91C36D0)
#define CLASS_2_2450EC85D0D7D5D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x91C33F0)
#define CLASS_2_2450EC85D0D7D5D7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x91C3720)
#define CLASS_2_2450EC85D0D7D5D7_TICK_OFFSET UNITYSDK_OFFSET(0x91C37B0)
#define CLASS_2_2450EC85D0D7D5D7__CTOR_OFFSET UNITYSDK_OFFSET(0x91C3350)

inline static constexpr unsigned int Class_2_2450EC85D0D7D5D7_TypeDefinitionIndex = 53578;

class Class_2_2450EC85D0D7D5D7 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::ElfEnterNextDay* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ElfEnterNextDay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ElfEnterNextDay*))((::PBYTE)hIl2Cpp + CLASS_2_2450EC85D0D7D5D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2450EC85D0D7D5D7_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2450EC85D0D7D5D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_2450EC85D0D7D5D7_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2450EC85D0D7D5D7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2450EC85D0D7D5D7_TICK_OFFSET))(this, a1);
	}
};
