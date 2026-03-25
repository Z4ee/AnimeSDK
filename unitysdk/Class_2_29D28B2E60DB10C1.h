#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_29D28B2E60DB10C1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1098B7E0)
#define CLASS_2_29D28B2E60DB10C1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1098B8A0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0x1098B550)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1098B290)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x1098B3E0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1098BA40)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x1098B1F0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1098B780)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x1098B190)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x1098B9D0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_EF9571B9C4C7F63B_OFFSET UNITYSDK_OFFSET(0x1098B670)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x1098B4E0)
#define CLASS_2_29D28B2E60DB10C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1098B940)
#define CLASS_2_29D28B2E60DB10C1__ONBIND_OFFSET UNITYSDK_OFFSET(0x1098AF20)
#define CLASS_2_29D28B2E60DB10C1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1098BAA0)
#define CLASS_2_29D28B2E60DB10C1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1098BB00)
#define CLASS_2_29D28B2E60DB10C1___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1098B970)

inline static constexpr unsigned int Class_2_29D28B2E60DB10C1_TypeDefinitionIndex = 58777;

class Class_2_29D28B2E60DB10C1 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68
	::UnityEngine::Transform* Field_2_2; // 0x70
	::UnityEngine::UI::Image* Field_2_3; // 0x78
	::RPG::GameCore::LevelUIComponent* Field_2_7; // 0x80
	::UnityEngine::UI::Image* Field_2_4; // 0x88
	::RPG::GameCore::GameEntity* Field_2_6; // 0x90
	::System::String* Field_2_5; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_51BBA01F511E6107()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_51BBA01F511E6107_OFFSET))(this);
	}

	::System::Void Method_2_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Void Method_2_EF9571B9C4C7F63B(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_EF9571B9C4C7F63B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
