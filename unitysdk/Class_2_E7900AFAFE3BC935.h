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

#define CLASS_2_E7900AFAFE3BC935_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CC7B40)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_0BD900A3D2B3B06B_OFFSET UNITYSDK_OFFSET(0x18CC8D80)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x18CC7F30)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x18CC9150)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_21E7A940533C61B3_OFFSET UNITYSDK_OFFSET(0x18CC8A30)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_2472FC4695028AF0_OFFSET UNITYSDK_OFFSET(0x18CC8530)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_7AA3B1856F93E2B2_OFFSET UNITYSDK_OFFSET(0x18CC8640)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x18CC8380)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_F363FF4E458D8707_OFFSET UNITYSDK_OFFSET(0x18CC8F60)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_FB412E022C7694AA_OFFSET UNITYSDK_OFFSET(0x18CC86F0)
#define CLASS_2_E7900AFAFE3BC935_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18CC7E80)
#define CLASS_2_E7900AFAFE3BC935_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18CC81E0)
#define CLASS_2_E7900AFAFE3BC935_TICK_OFFSET UNITYSDK_OFFSET(0x18CC8230)
#define CLASS_2_E7900AFAFE3BC935__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC79D0)
#define CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x18CC9280)
#define CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0x18CC9340)

inline static constexpr unsigned int Class_2_E7900AFAFE3BC935_TypeDefinitionIndex = 58810;

class Class_2_E7900AFAFE3BC935 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_07C3C4D2990C49EE* DAGAGAONAMH; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::Client::UIController* OGOFNHAGOPO; // 0x28
	::Class_3_07C3C4D2990C49EE* JNIKOAEAEHB; // 0x30
	::Class_3_07C3C4D2990C49EE* FHFOBMFPPAN; // 0x38
	::RPG::GameCore::LevelGraphComponent* JPGNFKGOGNE; // 0x40
	::RPG::GameCore::ShowHalfScreenPage* OFKGLJOAMLD; // 0x48
	::Class_3_07C3C4D2990C49EE* FGFFJBEKHBO; // 0x50
	::System::Boolean DHANBMABDHF; // 0x58
	::System::Boolean DEOPOBKEAIG; // 0x59

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

	::System::Void Method_2_2472FC4695028AF0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_2472FC4695028AF0_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AA3B1856F93E2B2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_7AA3B1856F93E2B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_21E7A940533C61B3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_21E7A940533C61B3_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphConfig* Method_2_0BD900A3D2B3B06B()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_0BD900A3D2B3B06B_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphConfig* Method_2_F363FF4E458D8707()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_F363FF4E458D8707_OFFSET))(this);
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
