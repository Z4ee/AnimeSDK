#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_29D28B2E60DB10C1_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15249900)
#define CLASS_2_29D28B2E60DB10C1_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x152499F0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x15249370)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0x15249640)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_51BBA01F511E6107_OFFSET UNITYSDK_OFFSET(0x152494D0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x152492D0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0x15249280)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_EF9571B9C4C7F63B_OFFSET UNITYSDK_OFFSET(0x15249760)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x152495C0)
#define CLASS_2_29D28B2E60DB10C1_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x15249870)
#define CLASS_2_29D28B2E60DB10C1__CTOR_OFFSET UNITYSDK_OFFSET(0x15249AC0)
#define CLASS_2_29D28B2E60DB10C1__ONBIND_OFFSET UNITYSDK_OFFSET(0x152490D0)

inline static constexpr unsigned int Class_2_29D28B2E60DB10C1_TypeDefinitionIndex = 71715;

class Class_2_29D28B2E60DB10C1 : public ::Class_1_34917908B7833130
{
public:
	::UnityEngine::UI::Image* GDLFHILNLIE; // 0x60
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x68
	::UnityEngine::UI::Image* HPJBGKDNKEL; // 0x70
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
	::System::String* BDACPPLKLGL; // 0x80
	::UnityEngine::Transform* CJHEBBGHJBO; // 0x88
	::UnityEngine::Transform* FOAIJMNFJFP; // 0x90
	::UnityEngine::Transform* DINDNKBMAEK; // 0x98

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

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_1293CB739F1151A1_OFFSET))(this);
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

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29D28B2E60DB10C1_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
