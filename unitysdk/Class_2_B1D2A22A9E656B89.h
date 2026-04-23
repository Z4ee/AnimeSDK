#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTriggerTutorial; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B1D2A22A9E656B89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x96608F0)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_24E0F280645A918D_OFFSET UNITYSDK_OFFSET(0x9661240)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_2EF7D56E53BAAEE4_OFFSET UNITYSDK_OFFSET(0x9660DC0)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_6DC8A882D99633EB_OFFSET UNITYSDK_OFFSET(0x9660FA0)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0x9660F10)
#define CLASS_2_B1D2A22A9E656B89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9660A60)
#define CLASS_2_B1D2A22A9E656B89_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x9660B00)
#define CLASS_2_B1D2A22A9E656B89_TICK_OFFSET UNITYSDK_OFFSET(0x9660C20)
#define CLASS_2_B1D2A22A9E656B89__CTOR_OFFSET UNITYSDK_OFFSET(0x96608E0)

inline static constexpr unsigned int Class_2_B1D2A22A9E656B89_TypeDefinitionIndex = 54339;

class Class_2_B1D2A22A9E656B89 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitTriggerTutorial* Field_2_1; // 0x18
	::Class_1_F3391C70DC37088D* Field_2_4; // 0x20
	::System::Action_1<::System::Boolean>* Field_2_3; // 0x28
	::RPG::GameCore::TaskContext* Field_2_0; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitTriggerTutorial* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitTriggerTutorial*))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DC8A882D99633EB(::System::Action* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_6DC8A882D99633EB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_24E0F280645A918D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_24E0F280645A918D_OFFSET))(this);
	}

	::System::Void Method_2_2EF7D56E53BAAEE4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_2EF7D56E53BAAEE4_OFFSET))(this, a1);
	}
};
