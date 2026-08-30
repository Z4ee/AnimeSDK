#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_636;
class Class_0_16E4307DCC419505_638;
namespace RPG::Client { class TutorialGuideTalkDialogConfigWrapper; }
namespace RPG::GameCore { class ShowTutorialGuideTalkListDialog; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_FC5C48ADFBABE99E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B0DAF0)
#define CLASS_2_FC5C48ADFBABE99E_METHOD_2_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x15B0DF80)
#define CLASS_2_FC5C48ADFBABE99E_METHOD_2_5934C7451F9426C2_OFFSET UNITYSDK_OFFSET(0x15B0E750)
#define CLASS_2_FC5C48ADFBABE99E_METHOD_2_D9F60ACC31982A46_OFFSET UNITYSDK_OFFSET(0x15B0E550)
#define CLASS_2_FC5C48ADFBABE99E_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B0DCA0)
#define CLASS_2_FC5C48ADFBABE99E_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B0E270)
#define CLASS_2_FC5C48ADFBABE99E_TICK_OFFSET UNITYSDK_OFFSET(0x15B0E3D0)
#define CLASS_2_FC5C48ADFBABE99E__CTOR_OFFSET UNITYSDK_OFFSET(0x15B0DAE0)

inline static constexpr unsigned int Class_2_FC5C48ADFBABE99E_TypeDefinitionIndex = 58847;

class Class_2_FC5C48ADFBABE99E : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_0_16E4307DCC419505_636* JELPBNHCPCO; // 0x18
	::Class_0_16E4307DCC419505_638* EIFGEIFAGNM; // 0x20
	::RPG::GameCore::ShowTutorialGuideTalkListDialog* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

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

	::System::Void Method_2_5934C7451F9426C2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_METHOD_2_5934C7451F9426C2_OFFSET))(this, a1);
	}

	::RPG::Client::TutorialGuideTalkDialogConfigWrapper* Method_2_D9F60ACC31982A46()
	{
		return ((::RPG::Client::TutorialGuideTalkDialogConfigWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC5C48ADFBABE99E_METHOD_2_D9F60ACC31982A46_OFFSET))(this);
	}
};
