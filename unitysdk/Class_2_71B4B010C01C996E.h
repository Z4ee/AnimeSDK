#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_71B4B010C01C996E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x184CEFE0)
#define CLASS_2_71B4B010C01C996E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x184CF0D0)
#define CLASS_2_71B4B010C01C996E_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x184CEBD0)
#define CLASS_2_71B4B010C01C996E_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x184CEE80)
#define CLASS_2_71B4B010C01C996E_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x184CE980)
#define CLASS_2_71B4B010C01C996E_METHOD_2_7AB2C887EB34984A_OFFSET UNITYSDK_OFFSET(0x184CEA20)
#define CLASS_2_71B4B010C01C996E_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x184CE930)
#define CLASS_2_71B4B010C01C996E_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x184CED30)
#define CLASS_2_71B4B010C01C996E_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x184CEB70)
#define CLASS_2_71B4B010C01C996E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x184CEF50)
#define CLASS_2_71B4B010C01C996E__CTOR_OFFSET UNITYSDK_OFFSET(0x184CF1A0)
#define CLASS_2_71B4B010C01C996E__ONBIND_OFFSET UNITYSDK_OFFSET(0x184CE880)

inline static constexpr unsigned int Class_2_71B4B010C01C996E_TypeDefinitionIndex = 71716;

class Class_2_71B4B010C01C996E : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::Animator* APPGGMLEPLN; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::UnityEngine::Transform* PCIMCDPONMO; // 0x70
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AB2C887EB34984A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_7AB2C887EB34984A_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71B4B010C01C996E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
