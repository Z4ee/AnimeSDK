#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1095;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventCreate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_EC4F903DC0EA4B84_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xF3D5C10)
#define CLASS_2_EC4F903DC0EA4B84_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xF3D5ED0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_0C38C2CE157D7006_OFFSET UNITYSDK_OFFSET(0xF3D55E0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_1086E351241EDD3B_OFFSET UNITYSDK_OFFSET(0xF3D5760)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xF3D5320)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_97CAD17442913F0E_OFFSET UNITYSDK_OFFSET(0xF3D5540)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xF3D53A0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_BD92F971DD8434FD_OFFSET UNITYSDK_OFFSET(0xF3D57B0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_D18B555AAF65E415_OFFSET UNITYSDK_OFFSET(0xF3D50A0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_E73DDCF78AD28B11_OFFSET UNITYSDK_OFFSET(0xF3D5460)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xF3D5AD0)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_2_OFFSET UNITYSDK_OFFSET(0xF3D5B60)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xF3D5A00)
#define CLASS_2_EC4F903DC0EA4B84_METHOD_2_F4AC2F73B2036484_OFFSET UNITYSDK_OFFSET(0xF3D5050)
#define CLASS_2_EC4F903DC0EA4B84_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xF3D4D40)
#define CLASS_2_EC4F903DC0EA4B84__CTOR_OFFSET UNITYSDK_OFFSET(0xF3D4CB0)
#define CLASS_2_EC4F903DC0EA4B84__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xF3D4DB0)
#define CLASS_2_EC4F903DC0EA4B84__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xF3D4EF0)

inline static constexpr unsigned int Class_2_EC4F903DC0EA4B84_TypeDefinitionIndex = 71584;

class Class_2_EC4F903DC0EA4B84 : public ::RPG::Client::UIController
{
public:
	// static const ::System::String* LEAADOILHEI; // 0x0
	// static const ::System::String* HDHIMELKLDN; // 0x0
	::RPG::Client::LongPressEvent* KANADECCJMH; // 0x188
	::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x190
	::Class_0_16E4307DCC419505_1095* GAOAMPIIPPF; // 0x198
	::System::Boolean FPIEFGAGJLB; // 0x1A0
	::System::UInt32 KKNIAPFDHLJ; // 0x1A4
	::UnityEngine::Vector2 FOOAPGKEBEH; // 0x1A8

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84__CTOR_OFFSET))(this, a1);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_D18B555AAF65E415(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_D18B555AAF65E415_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_E73DDCF78AD28B11(::RPG::GameCore::LevelBattleEventCreate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelBattleEventCreate*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_E73DDCF78AD28B11_OFFSET))(this, a1);
	}

	::System::Void Method_2_1086E351241EDD3B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_1086E351241EDD3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F4AC2F73B2036484()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F4AC2F73B2036484_OFFSET))(this);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_0C38C2CE157D7006(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_0C38C2CE157D7006_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_BD92F971DD8434FD()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_BD92F971DD8434FD_OFFSET))(this);
	}

	::System::Boolean Method_2_97CAD17442913F0E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_97CAD17442913F0E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_METHOD_2_F37CDBD6D46274D2_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC4F903DC0EA4B84_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
