#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerDrinkMakerBartendInMission; }
namespace System { class Object; }

#define CLASS_2_BA34386F86E3FC0C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8933580)
#define CLASS_2_BA34386F86E3FC0C_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x8933BA0)
#define CLASS_2_BA34386F86E3FC0C_METHOD_2_FB31A773A52994BE_OFFSET UNITYSDK_OFFSET(0x8933E20)
#define CLASS_2_BA34386F86E3FC0C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8933680)
#define CLASS_2_BA34386F86E3FC0C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8933C40)
#define CLASS_2_BA34386F86E3FC0C_TICK_OFFSET UNITYSDK_OFFSET(0x8933D20)
#define CLASS_2_BA34386F86E3FC0C__CTOR_OFFSET UNITYSDK_OFFSET(0x8933480)

inline static constexpr unsigned int Class_2_BA34386F86E3FC0C_TypeDefinitionIndex = 47457;

class Class_2_BA34386F86E3FC0C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerDrinkMakerBartendInMission* Field_2_0; // 0x18
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x20
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerDrinkMakerBartendInMission* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerDrinkMakerBartendInMission*))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_FB31A773A52994BE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BA34386F86E3FC0C_METHOD_2_FB31A773A52994BE_OFFSET))(this, a1);
	}
};
