#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_E21F6DE9B7FA4D05;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class RogueGambleBaseFunc; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RogueGambleFuncShowUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E060DA3A6C8B2DD0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E57000)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x9E57A20)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9E57B50)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_4972B4CF1E9A3BDE_OFFSET UNITYSDK_OFFSET(0x9E57470)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_5276488EF6F1DA44_OFFSET UNITYSDK_OFFSET(0x9E577D0)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x9E57590)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x9E57B00)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_80B76CA3BC860A58_OFFSET UNITYSDK_OFFSET(0x9E57820)
#define CLASS_2_E060DA3A6C8B2DD0_METHOD_2_B961D33AD47A2113_OFFSET UNITYSDK_OFFSET(0x9E57C30)
#define CLASS_2_E060DA3A6C8B2DD0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9E57120)
#define CLASS_2_E060DA3A6C8B2DD0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9E56FB0)
#define CLASS_2_E060DA3A6C8B2DD0_TICK_OFFSET UNITYSDK_OFFSET(0x9E56F50)
#define CLASS_2_E060DA3A6C8B2DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E56E00)

inline static constexpr unsigned int Class_2_E060DA3A6C8B2DD0_TypeDefinitionIndex = 53898;

class Class_2_E060DA3A6C8B2DD0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::RogueGambleFuncShowUI* Field_2_1; // 0x18
	::Class_3_E21F6DE9B7FA4D05* Field_2_3; // 0x20
	::RPG::GameCore::PropComponent* Field_2_9; // 0x28
	::RPG::Client::LuaUIController* Field_2_5; // 0x30
	::RPG::GameCore::TaskContext* Field_2_0; // 0x38
	::RPG::Client::RogueGambleBaseFunc* Field_2_8; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_2_2; // 0x48
	::Class_3_E21F6DE9B7FA4D05* Field_2_4; // 0x50
	::System::Boolean Field_2_7; // 0x58
	::System::UInt32 Field_2_6; // 0x5C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueGambleFuncShowUI* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueGambleFuncShowUI*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_4972B4CF1E9A3BDE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_4972B4CF1E9A3BDE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5276488EF6F1DA44(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_5276488EF6F1DA44_OFFSET))(this, a1);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_2_80B76CA3BC860A58(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_80B76CA3BC860A58_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	::System::Void Method_2_B961D33AD47A2113()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E060DA3A6C8B2DD0_METHOD_2_B961D33AD47A2113_OFFSET))(this);
	}
};
