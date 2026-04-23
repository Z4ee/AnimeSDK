#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMainMission; }
namespace System { class Object; }

#define CLASS_2_1185A0B329B0F507_DISPOSE_OFFSET UNITYSDK_OFFSET(0x98B4670)
#define CLASS_2_1185A0B329B0F507_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x98B4B30)
#define CLASS_2_1185A0B329B0F507_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x98B49E0)
#define CLASS_2_1185A0B329B0F507_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x98B4710)
#define CLASS_2_1185A0B329B0F507_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x98B4AE0)
#define CLASS_2_1185A0B329B0F507_TICK_OFFSET UNITYSDK_OFFSET(0x98B4A80)
#define CLASS_2_1185A0B329B0F507__CTOR_OFFSET UNITYSDK_OFFSET(0x98B4660)

inline static constexpr unsigned int Class_2_1185A0B329B0F507_TypeDefinitionIndex = 54191;

class Class_2_1185A0B329B0F507 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerDrinkMakerBartendInMainMission* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20

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

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_1185A0B329B0F507_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
