#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMainMission; }
namespace System { class Object; }

#define CLASS_2_1185A0B329B0F507_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1658BE50)
#define CLASS_2_1185A0B329B0F507_METHOD_2_5FBAD89A54D9F070_OFFSET UNITYSDK_OFFSET(0x1658C1B0)
#define CLASS_2_1185A0B329B0F507_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x1658C320)
#define CLASS_2_1185A0B329B0F507_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1658BF10)
#define CLASS_2_1185A0B329B0F507_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1658C2D0)
#define CLASS_2_1185A0B329B0F507_TICK_OFFSET UNITYSDK_OFFSET(0x1658C270)
#define CLASS_2_1185A0B329B0F507__CTOR_OFFSET UNITYSDK_OFFSET(0x1658BE40)

inline static constexpr unsigned int Class_2_1185A0B329B0F507_TypeDefinitionIndex = 56149;

class Class_2_1185A0B329B0F507 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartendInMainMission*))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_5FBAD89A54D9F070()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_METHOD_2_5FBAD89A54D9F070_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
