#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_8FD88AEFE1E689CC;
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_7BF3BC6025EDB88C_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x130B3EE0)
#define CLASS_2_7BF3BC6025EDB88C_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x130B41A0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x130B2D70)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_22FAC251A3FE2A30_OFFSET UNITYSDK_OFFSET(0x130B2830)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x130B2C70)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_41A8FA2EB0C75B76_OFFSET UNITYSDK_OFFSET(0x130B3350)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_4B16404ED490414F_OFFSET UNITYSDK_OFFSET(0x130B2EE0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_517868E032CD4C9E_OFFSET UNITYSDK_OFFSET(0x130B3730)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_5978AE219015BACB_OFFSET UNITYSDK_OFFSET(0x130B1ED0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x130B2950)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x130B2CD0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_6CAC3AD3A865E090_OFFSET UNITYSDK_OFFSET(0x130B33C0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_838C5D7D0059A77B_OFFSET UNITYSDK_OFFSET(0x130B1E80)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x130B3490)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_B00A1D822E6F5C31_OFFSET UNITYSDK_OFFSET(0x130B1F10)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_C450A961450309C9_1_OFFSET UNITYSDK_OFFSET(0x130B3D00)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x130B3C10)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_CBA096B6B8D30164_OFFSET UNITYSDK_OFFSET(0x130B2FF0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_D727BAF5B174BD1A_OFFSET UNITYSDK_OFFSET(0x130B2AB0)
#define CLASS_2_7BF3BC6025EDB88C_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x130B3E20)
#define CLASS_2_7BF3BC6025EDB88C_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x130B2F50)
#define CLASS_2_7BF3BC6025EDB88C_ONRETURN_OFFSET UNITYSDK_OFFSET(0x130B2FA0)
#define CLASS_2_7BF3BC6025EDB88C__CTOR_OFFSET UNITYSDK_OFFSET(0x130B4420)
#define CLASS_2_7BF3BC6025EDB88C__ONBIND_OFFSET UNITYSDK_OFFSET(0x130B1C00)

inline static constexpr unsigned int Class_2_7BF3BC6025EDB88C_TypeDefinitionIndex = 71871;

class Class_2_7BF3BC6025EDB88C : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single NAEOMKGBNPP; // 0x0
	// static const ::System::String* BBJHMBBJLIA; // 0x0
	// static const ::System::String* EDGBEKOECBN; // 0x0
	// static const ::System::String* CHNKMMNDMLE; // 0x0
	// static const ::System::String* CDGJPJOIEHN; // 0x0
	::RPG::Client::SPProgress* LGGEDKJGHNA; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::RPG::Client::SPProgress* NAAODEIIMCI; // 0x70
	::UnityEngine::UI::Image* AJDAFKNJNPP; // 0x78
	::UnityEngine::Transform* FLNHOLMLGDF; // 0x80
	::UnityEngine::UI::Image* MAOLDDGOHKO; // 0x88
	::UnityEngine::Animation* FIEHPEGNBEL; // 0x90
	::UnityEngine::UI::Image* IFPFGDMAJCF; // 0x98
	::UnityEngine::UI::Image* KNCPDONFMMG; // 0xA0
	::UnityEngine::Transform* MMNAFKKNOJH; // 0xA8
	::RPG::GameCore::LevelUIComponent* OMCLLLAHOIP; // 0xB0
	::UnityEngine::Transform* AGINCDMNDFD; // 0xB8
	::RPG::GameCore::FixPoint EEFCFOANBFE; // 0xC0
	::System::Single LNJOADEMHEI; // 0xC8
	::System::Boolean HHGNLCAGFLA; // 0xCC
	::System::Boolean ELBLPNCNALB; // 0xCD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C__ONBIND_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_838C5D7D0059A77B()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_838C5D7D0059A77B_OFFSET))(this);
	}

	::RPG::Client::SPProgress* Method_2_5978AE219015BACB()
	{
		return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_5978AE219015BACB_OFFSET))(this);
	}

	::System::Void Method_2_B00A1D822E6F5C31()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_B00A1D822E6F5C31_OFFSET))(this);
	}

	::System::Void Method_2_D727BAF5B174BD1A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_D727BAF5B174BD1A_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_22FAC251A3FE2A30(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_22FAC251A3FE2A30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_4B16404ED490414F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_4B16404ED490414F_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CBA096B6B8D30164(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_CBA096B6B8D30164_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A8FA2EB0C75B76(::Class_1_8FD88AEFE1E689CC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8FD88AEFE1E689CC*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_41A8FA2EB0C75B76_OFFSET))(this, a1);
	}

	::System::Void Method_2_6CAC3AD3A865E090(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_6CAC3AD3A865E090_OFFSET))(this, a1);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::System::Void Method_2_517868E032CD4C9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_517868E032CD4C9E_OFFSET))(this);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_C450A961450309C9_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7BF3BC6025EDB88C_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
