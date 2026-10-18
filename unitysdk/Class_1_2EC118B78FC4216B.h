#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_117;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_2EC118B78FC4216B_ADD_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xB486F70)
#define CLASS_1_2EC118B78FC4216B_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xB486E60)
#define CLASS_1_2EC118B78FC4216B_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB486E40)
#define CLASS_1_2EC118B78FC4216B_GET_SHOULDEXPLAINTARGET_OFFSET UNITYSDK_OFFSET(0xB486EA0)
#define CLASS_1_2EC118B78FC4216B_GET_TARGETDESC_OFFSET UNITYSDK_OFFSET(0xB486E80)
#define CLASS_1_2EC118B78FC4216B_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xB486E20)
#define CLASS_1_2EC118B78FC4216B_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0xB486F00)
#define CLASS_1_2EC118B78FC4216B_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB486EC0)
#define CLASS_1_2EC118B78FC4216B_REMOVE_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xB486FD0)
#define CLASS_1_2EC118B78FC4216B_SET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xB486E70)
#define CLASS_1_2EC118B78FC4216B_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB486E50)
#define CLASS_1_2EC118B78FC4216B_SET_SHOULDEXPLAINTARGET_OFFSET UNITYSDK_OFFSET(0xB486EB0)
#define CLASS_1_2EC118B78FC4216B_SET_TARGETDESC_OFFSET UNITYSDK_OFFSET(0xB486E90)
#define CLASS_1_2EC118B78FC4216B_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xB486E30)
#define CLASS_1_2EC118B78FC4216B__CTOR_OFFSET UNITYSDK_OFFSET(0xB487030)

inline static constexpr unsigned int Class_1_2EC118B78FC4216B_TypeDefinitionIndex = 79425;

class Class_1_2EC118B78FC4216B : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_117* _Type_k__BackingField; // 0x10
	::System::String* _TargetDesc_k__BackingField; // 0x18
	::System::Action* OnIsCheckedChanged; // 0x20
	::RPG::Client::TextID _LevelName_k__BackingField; // 0x28
	::System::Boolean PGNIIDNPONO; // 0x38
	::System::Boolean _ShouldExplainTarget_k__BackingField; // 0x39
	::System::Int32 _Level_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_117* get_Type()
	{
		return ((::Class_0_16E4307DCC419505_117*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::Class_0_16E4307DCC419505_117* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_117*))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_SET_TYPE_OFFSET))(this, a1);
	}

	::System::Int32 get_Level()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_SET_LEVEL_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_LevelName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_GET_LEVELNAME_OFFSET))(this);
	}

	::System::Void set_LevelName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_SET_LEVELNAME_OFFSET))(this, a1);
	}

	::System::String* get_TargetDesc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_GET_TARGETDESC_OFFSET))(this);
	}

	::System::Void set_TargetDesc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_SET_TARGETDESC_OFFSET))(this, a1);
	}

	::System::Boolean get_ShouldExplainTarget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_GET_SHOULDEXPLAINTARGET_OFFSET))(this);
	}

	::System::Void set_ShouldExplainTarget(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_SET_SHOULDEXPLAINTARGET_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_METHOD_1_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void add_OnIsCheckedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_ADD_ONISCHECKEDCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnIsCheckedChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2EC118B78FC4216B_REMOVE_ONISCHECKEDCHANGED_OFFSET))(this, a1);
	}
};
