#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_95203ACE716E1591_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16336A90)
#define CLASS_2_95203ACE716E1591_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16336B80)
#define CLASS_2_95203ACE716E1591_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x16336470)
#define CLASS_2_95203ACE716E1591_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x163367B0)
#define CLASS_2_95203ACE716E1591_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x163363D0)
#define CLASS_2_95203ACE716E1591_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x16336880)
#define CLASS_2_95203ACE716E1591_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x16336380)
#define CLASS_2_95203ACE716E1591_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x163365E0)
#define CLASS_2_95203ACE716E1591_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x16336740)
#define CLASS_2_95203ACE716E1591_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16336A00)
#define CLASS_2_95203ACE716E1591__CTOR_OFFSET UNITYSDK_OFFSET(0x16336C50)
#define CLASS_2_95203ACE716E1591__ONBIND_OFFSET UNITYSDK_OFFSET(0x16336230)

inline static constexpr unsigned int Class_2_95203ACE716E1591_TypeDefinitionIndex = 71714;

class Class_2_95203ACE716E1591 : public ::Class_1_34917908B7833130
{
public:
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x60
	::UnityEngine::Transform* FOAIJMNFJFP; // 0x68
	::UnityEngine::Animator* APPGGMLEPLN; // 0x70
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
	::UnityEngine::Transform* DINDNKBMAEK; // 0x80
	::System::String* BDACPPLKLGL; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_78E5D10876D30BCC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_78E5D10876D30BCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
