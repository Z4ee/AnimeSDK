#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class ShowHalfScreenPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E7900AFAFE3BC935_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC973D10)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xC973F50)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xC9751F0)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_1650D7D6437FCD61_OFFSET UNITYSDK_OFFSET(0xC974660)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_21E7A940533C61B3_OFFSET UNITYSDK_OFFSET(0xC974A50)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_518E0F7D17A8A0E2_OFFSET UNITYSDK_OFFSET(0xC974550)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_6B42139A0F67FCBD_OFFSET UNITYSDK_OFFSET(0xC974DA0)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_CE666AA8D1A52A7E_OFFSET UNITYSDK_OFFSET(0xC974FC0)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0xC9743A0)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_FB412E022C7694AA_OFFSET UNITYSDK_OFFSET(0xC974710)
#define CLASS_2_E7900AFAFE3BC935_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC973EA0)
#define CLASS_2_E7900AFAFE3BC935_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC974200)
#define CLASS_2_E7900AFAFE3BC935_TICK_OFFSET UNITYSDK_OFFSET(0xC974250)
#define CLASS_2_E7900AFAFE3BC935__CTOR_OFFSET UNITYSDK_OFFSET(0xC973BA0)
#define CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0xC975320)
#define CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0xC9753E0)

inline static constexpr unsigned int Class_2_E7900AFAFE3BC935_TypeDefinitionIndex = 54808;

class Class_2_E7900AFAFE3BC935 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* Field_2_0; // 0x18
	::Class_3_07C3C4D2990C49EE* Field_2_1; // 0x20
	::RPG::GameCore::LevelGraphComponent* Field_2_2; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_2_3; // 0x30
	::Class_3_07C3C4D2990C49EE* Field_2_4; // 0x38
	::RPG::Client::UIController* Field_2_5; // 0x40
	::RPG::GameCore::ShowHalfScreenPage* Field_2_6; // 0x48
	::RPG::GameCore::TaskContext* Field_2_7; // 0x50
	::System::Boolean Field_2_8; // 0x58
	::System::Boolean Field_2_9; // 0x59

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowHalfScreenPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowHalfScreenPage*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_518E0F7D17A8A0E2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_518E0F7D17A8A0E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1650D7D6437FCD61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_1650D7D6437FCD61_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_21E7A940533C61B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_21E7A940533C61B3_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphConfig* Method_2_6B42139A0F67FCBD()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_6B42139A0F67FCBD_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphConfig* Method_2_CE666AA8D1A52A7E()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_CE666AA8D1A52A7E_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_FB412E022C7694AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_FB412E022C7694AA_OFFSET))(this, a1);
	}

	::System::Void __InitControllerCallback_b__8_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_0_OFFSET))(this);
	}

	::System::Void __InitControllerCallback_b__8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_1_OFFSET))(this);
	}
};
