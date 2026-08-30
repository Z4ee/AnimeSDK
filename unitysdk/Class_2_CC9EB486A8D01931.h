#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityUltraInnerProgressChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_CC9EB486A8D01931_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x161187F0)
#define CLASS_2_CC9EB486A8D01931_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16118A00)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x16117320)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_22FAC251A3FE2A30_OFFSET UNITYSDK_OFFSET(0x16117EA0)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_5978AE219015BACB_OFFSET UNITYSDK_OFFSET(0x161172D0)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x16118250)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_1_OFFSET UNITYSDK_OFFSET(0x16117290)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_OFFSET UNITYSDK_OFFSET(0x16117240)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_C450A961450309C9_OFFSET UNITYSDK_OFFSET(0x16118700)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_CBA096B6B8D30164_OFFSET UNITYSDK_OFFSET(0x16118390)
#define CLASS_2_CC9EB486A8D01931_METHOD_2_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x16117FC0)
#define CLASS_2_CC9EB486A8D01931_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x161182F0)
#define CLASS_2_CC9EB486A8D01931_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16118340)
#define CLASS_2_CC9EB486A8D01931__CTOR_OFFSET UNITYSDK_OFFSET(0x16118BE0)
#define CLASS_2_CC9EB486A8D01931__ONBIND_OFFSET UNITYSDK_OFFSET(0x16117120)

inline static constexpr unsigned int Class_2_CC9EB486A8D01931_TypeDefinitionIndex = 71871;

class Class_2_CC9EB486A8D01931 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single NAEOMKGBNPP; // 0x0
	::UnityEngine::UI::Slider* KMIJHEGMHDL; // 0x60
	::UnityEngine::UI::Image* PGFKOHJEIII; // 0x68
	::UnityEngine::Transform* AKAOPCFABIJ; // 0x70
	::UnityEngine::UI::Image* MAOLDDGOHKO; // 0x78
	::RPG::Client::SPProgress* NAAODEIIMCI; // 0x80
	::UnityEngine::UI::Image* IFPFGDMAJCF; // 0x88
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
	::RPG::Client::SPProgress* LODNFBEONKF; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931__ONBIND_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_838C5D7D0059A77B()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_OFFSET))(this);
	}

	::UnityEngine::UI::Image* Method_2_838C5D7D0059A77B_1()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_838C5D7D0059A77B_1_OFFSET))(this);
	}

	::RPG::Client::SPProgress* Method_2_5978AE219015BACB()
	{
		return ((::RPG::Client::SPProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_5978AE219015BACB_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_2_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Void Method_2_22FAC251A3FE2A30(::RPG::Client::SPProgress* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::SPProgress*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_22FAC251A3FE2A30_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_CBA096B6B8D30164(::RPG::GameCore::AbilityUltraInnerProgressChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityUltraInnerProgressChange*))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_CBA096B6B8D30164_OFFSET))(this, a1);
	}

	::System::Void Method_2_C450A961450309C9(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_METHOD_2_C450A961450309C9_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CC9EB486A8D01931_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
