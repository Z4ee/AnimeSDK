#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class DiscreteBar; }
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C72CB3C228C43DE6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x154B1790)
#define CLASS_2_C72CB3C228C43DE6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x154B18B0)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x154B1170)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_4E6F72124EC1C84B_OFFSET UNITYSDK_OFFSET(0x154B1560)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_8F3F5DB4D7DE476B_OFFSET UNITYSDK_OFFSET(0x154B15E0)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_99D60EF23C904C6D_OFFSET UNITYSDK_OFFSET(0x154B1030)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x154B1480)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x154B1700)
#define CLASS_2_C72CB3C228C43DE6_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x154B1670)
#define CLASS_2_C72CB3C228C43DE6__CTOR_OFFSET UNITYSDK_OFFSET(0x154B19A0)
#define CLASS_2_C72CB3C228C43DE6__ONBIND_OFFSET UNITYSDK_OFFSET(0x154B0F10)

inline static constexpr unsigned int Class_2_C72CB3C228C43DE6_TypeDefinitionIndex = 71763;

class Class_2_C72CB3C228C43DE6 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Int32 HMKLIAOONMP = 0xC8; // 0x0
	// static const ::System::Int32 ADJPGMEGAII = 0x190; // 0x0
	// static const ::System::Int32 PGHNEGAHLGE = 0x3E7; // 0x0
	// static const ::System::Int32 LCOOKCKEONA = 0x3; // 0x0
	::UnityEngine::Transform* KGMDBKMPJIL; // 0x60
	::RPG::Client::DiscreteBar* DEILOFCIGJF; // 0x68
	::RPG::Client::LocalizedText* GEPFFDDHPAI; // 0x70
	::UnityEngine::Transform* FKCDFLJLPCA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_99D60EF23C904C6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_99D60EF23C904C6D_OFFSET))(this);
	}

	::System::Void Method_2_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_E693A0026D178D8E_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Int32 Method_2_4E6F72124EC1C84B(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_4E6F72124EC1C84B_OFFSET))(this, a1);
	}

	::System::String* Method_2_8F3F5DB4D7DE476B(::System::Single a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_8F3F5DB4D7DE476B_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C72CB3C228C43DE6_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
