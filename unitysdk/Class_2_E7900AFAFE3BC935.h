#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class ShowHalfScreenPage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E7900AFAFE3BC935_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113F4660)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_03A81715BD2AFEF3_OFFSET UNITYSDK_OFFSET(0x113F4830)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x113F5B30)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_4528E0E482BFFB41_OFFSET UNITYSDK_OFFSET(0x113F4F90)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_A7445FE7B5F778B9_OFFSET UNITYSDK_OFFSET(0x113F5620)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_EA0E6F20BD97F5E2_OFFSET UNITYSDK_OFFSET(0x113F58D0)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_F1D0751A34EC3B37_OFFSET UNITYSDK_OFFSET(0x113F4E10)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_F39A586D02F07AB8_OFFSET UNITYSDK_OFFSET(0x113F4F00)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x113F4C90)
#define CLASS_2_E7900AFAFE3BC935_METHOD_2_FB412E022C7694AA_OFFSET UNITYSDK_OFFSET(0x113F52D0)
#define CLASS_2_E7900AFAFE3BC935_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x113F47B0)
#define CLASS_2_E7900AFAFE3BC935_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x113F4AF0)
#define CLASS_2_E7900AFAFE3BC935_TICK_OFFSET UNITYSDK_OFFSET(0x113F4B40)
#define CLASS_2_E7900AFAFE3BC935__CTOR_OFFSET UNITYSDK_OFFSET(0x113F44F0)
#define CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_0_OFFSET UNITYSDK_OFFSET(0x113F5C50)
#define CLASS_2_E7900AFAFE3BC935___INITCONTROLLERCALLBACK_B__8_1_OFFSET UNITYSDK_OFFSET(0x113F5D10)

inline static constexpr unsigned int Class_2_E7900AFAFE3BC935_TypeDefinitionIndex = 47348;

class Class_2_E7900AFAFE3BC935 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_6; // 0x18
	::RPG::GameCore::LevelGraphComponent* Field_2_2; // 0x20
	::RPG::GameCore::ShowHalfScreenPage* Field_2_0; // 0x28
	::Class_3_5775A4FEC79026BC* Field_2_3; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38
	::RPG::Client::UIController* Field_2_9; // 0x40
	::Class_3_5775A4FEC79026BC* Field_2_4; // 0x48
	::Class_3_5775A4FEC79026BC* Field_2_5; // 0x50
	::System::Boolean Field_2_7; // 0x58
	::System::Boolean Field_2_8; // 0x59

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

	::System::Void Method_2_03A81715BD2AFEF3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_03A81715BD2AFEF3_OFFSET))(this);
	}

	::System::Void Method_2_F1D0751A34EC3B37(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_F1D0751A34EC3B37_OFFSET))(this, a1);
	}

	::System::Void Method_2_F39A586D02F07AB8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_F39A586D02F07AB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_FB412E022C7694AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_FB412E022C7694AA_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelGraphConfig* Method_2_A7445FE7B5F778B9()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_A7445FE7B5F778B9_OFFSET))(this);
	}

	::RPG::GameCore::LevelGraphConfig* Method_2_EA0E6F20BD97F5E2()
	{
		return ((::RPG::GameCore::LevelGraphConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_EA0E6F20BD97F5E2_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_4528E0E482BFFB41(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E7900AFAFE3BC935_METHOD_2_4528E0E482BFFB41_OFFSET))(this, a1);
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
