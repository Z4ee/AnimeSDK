#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_430FA2F73B5C666A_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x171FD2C0)
#define CLASS_2_430FA2F73B5C666A_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x171FD3E0)
#define CLASS_2_430FA2F73B5C666A_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x171FD130)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x171FCBC0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x171FD0F0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x171FCB20)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_6CF053D5B1EC7D64_OFFSET UNITYSDK_OFFSET(0x171FD010)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_6E26D7E65873E2FB_OFFSET UNITYSDK_OFFSET(0x171FCEE0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x171FCC60)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_D0658526DC9E67E7_OFFSET UNITYSDK_OFFSET(0x171FCDC0)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_D81224686493F7E5_OFFSET UNITYSDK_OFFSET(0x171FCC10)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x171FD200)
#define CLASS_2_430FA2F73B5C666A_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x171FD140)
#define CLASS_2_430FA2F73B5C666A__CTOR_OFFSET UNITYSDK_OFFSET(0x171FD4D0)
#define CLASS_2_430FA2F73B5C666A__ONBIND_OFFSET UNITYSDK_OFFSET(0x171FCB80)

inline static constexpr unsigned int Class_2_430FA2F73B5C666A_TypeDefinitionIndex = 68200;

class Class_2_430FA2F73B5C666A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60
	::System::Action* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70
	::System::Int32 _Priority_k__BackingField; // 0x78
	::System::Boolean Field_2_5; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_D81224686493F7E5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_D81224686493F7E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0658526DC9E67E7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_D0658526DC9E67E7_OFFSET))(this, a1);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_6E26D7E65873E2FB(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_6E26D7E65873E2FB_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CF053D5B1EC7D64(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_6CF053D5B1EC7D64_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430FA2F73B5C666A_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
