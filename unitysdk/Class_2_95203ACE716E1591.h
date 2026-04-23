#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_2_95203ACE716E1591_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x95FE640)
#define CLASS_2_95203ACE716E1591_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x95FE700)
#define CLASS_2_95203ACE716E1591_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x95FE380)
#define CLASS_2_95203ACE716E1591_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x95FE050)
#define CLASS_2_95203ACE716E1591_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x95FE8A0)
#define CLASS_2_95203ACE716E1591_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x95FDFB0)
#define CLASS_2_95203ACE716E1591_METHOD_2_78E5D10876D30BCC_OFFSET UNITYSDK_OFFSET(0x95FE450)
#define CLASS_2_95203ACE716E1591_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x95FE5E0)
#define CLASS_2_95203ACE716E1591_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x95FDF60)
#define CLASS_2_95203ACE716E1591_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x95FE830)
#define CLASS_2_95203ACE716E1591_METHOD_2_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x95FE1A0)
#define CLASS_2_95203ACE716E1591_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x95FE310)
#define CLASS_2_95203ACE716E1591__CTOR_OFFSET UNITYSDK_OFFSET(0x95FE7A0)
#define CLASS_2_95203ACE716E1591__ONBIND_OFFSET UNITYSDK_OFFSET(0x95FDE10)
#define CLASS_2_95203ACE716E1591___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x95FE900)
#define CLASS_2_95203ACE716E1591___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x95FE960)
#define CLASS_2_95203ACE716E1591___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x95FE7D0)

inline static constexpr unsigned int Class_2_95203ACE716E1591_TypeDefinitionIndex = 66136;

class Class_2_95203ACE716E1591 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::System::String* Field_2_3; // 0x68
	::UnityEngine::Animator* Field_2_2; // 0x70
	::RPG::GameCore::GameEntity* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_1; // 0x80
	::RPG::GameCore::LevelUIComponent* Field_2_5; // 0x88

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

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
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

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95203ACE716E1591___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
