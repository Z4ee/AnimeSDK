#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_465;
class Class_0_16E4307DCC419505_467;
namespace RPG::Client { class TutorialGuideTalkDialogConfigWrapper; }
namespace RPG::GameCore { class ShowTutorialGuideTalkListDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FC5C48ADFBABE99E_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEE7B20)
#define CLASS_2_FC5C48ADFBABE99E_METHOD_2_049407E7CFE73C8B_OFFSET UNITYSDK_OFFSET(0xBEE84B0)
#define CLASS_2_FC5C48ADFBABE99E_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0xBEE7E50)
#define CLASS_2_FC5C48ADFBABE99E_METHOD_2_4EAF60B0FBDC2B64_OFFSET UNITYSDK_OFFSET(0xBEE8310)
#define CLASS_2_FC5C48ADFBABE99E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEE7C60)
#define CLASS_2_FC5C48ADFBABE99E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEE80D0)
#define CLASS_2_FC5C48ADFBABE99E_TICK_OFFSET UNITYSDK_OFFSET(0xBEE81E0)
#define CLASS_2_FC5C48ADFBABE99E__CTOR_OFFSET UNITYSDK_OFFSET(0xBEE7B10)

inline static constexpr unsigned int Class_2_FC5C48ADFBABE99E_TypeDefinitionIndex = 47380;

class Class_2_FC5C48ADFBABE99E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::Class_0_16E4307DCC419505_467* Field_2_2; // 0x20
	::Class_0_16E4307DCC419505_465* Field_2_3; // 0x28
	::RPG::GameCore::ShowTutorialGuideTalkListDialog* Field_2_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialGuideTalkListDialog* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_2ED6C3773AA1E488()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_METHOD_2_2ED6C3773AA1E488_OFFSET))(this);
	}

	::System::Void Method_2_049407E7CFE73C8B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_METHOD_2_049407E7CFE73C8B_OFFSET))(this, a1);
	}

	::RPG::Client::TutorialGuideTalkDialogConfigWrapper* Method_2_4EAF60B0FBDC2B64()
	{
		return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_METHOD_2_4EAF60B0FBDC2B64_OFFSET))(this);
	}
};
