#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_F3391C70DC37088D;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitTriggerTutorial; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B1D2A22A9E656B89_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB99DCC0)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0xB99E1A0)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xB99E6B0)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0xB99E320)
#define CLASS_2_B1D2A22A9E656B89_METHOD_2_E1ECCC6D28A98911_OFFSET UNITYSDK_OFFSET(0xB99E3B0)
#define CLASS_2_B1D2A22A9E656B89_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB99DE10)
#define CLASS_2_B1D2A22A9E656B89_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB99DEB0)
#define CLASS_2_B1D2A22A9E656B89_TICK_OFFSET UNITYSDK_OFFSET(0xB99E000)
#define CLASS_2_B1D2A22A9E656B89__CTOR_OFFSET UNITYSDK_OFFSET(0xB99DCB0)

inline static constexpr unsigned int Class_2_B1D2A22A9E656B89_TypeDefinitionIndex = 58933;

class Class_2_B1D2A22A9E656B89 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_F3391C70DC37088D* NNFJKIPMAAI; // 0x18
	::System::Action_1<::System::Boolean>* CIFOILLJFNF; // 0x20
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
	::RPG::GameCore::WaitTriggerTutorial* OFKGLJOAMLD; // 0x30
	::System::Boolean HDPLEHFEOFC; // 0x38

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

	::System::Void Method_2_E1ECCC6D28A98911(::System::Action* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_E1ECCC6D28A98911_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B1D2A22A9E656B89_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}
};
