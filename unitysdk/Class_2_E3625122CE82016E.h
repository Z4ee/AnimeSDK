#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_19D8F09EED5DB442;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_E3625122CE82016E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBACA8C0)
#define CLASS_2_E3625122CE82016E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBACAB20)
#define CLASS_2_E3625122CE82016E_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xBAC98F0)
#define CLASS_2_E3625122CE82016E_METHOD_2_24E0F280645A918D_OFFSET UNITYSDK_OFFSET(0xBACA670)
#define CLASS_2_E3625122CE82016E_METHOD_2_34FAD805B2009967_OFFSET UNITYSDK_OFFSET(0xBAC9E70)
#define CLASS_2_E3625122CE82016E_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xBAC9B30)
#define CLASS_2_E3625122CE82016E_METHOD_2_7F3ACE763F49DF66_OFFSET UNITYSDK_OFFSET(0xBACA600)
#define CLASS_2_E3625122CE82016E_METHOD_2_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0xBACA220)
#define CLASS_2_E3625122CE82016E_METHOD_2_DC727741954BBE9B_OFFSET UNITYSDK_OFFSET(0xBAC9EE0)
#define CLASS_2_E3625122CE82016E_METHOD_2_E1D4799B2F0C2EA1_OFFSET UNITYSDK_OFFSET(0xBAC9D80)
#define CLASS_2_E3625122CE82016E_METHOD_2_EC90259991730611_OFFSET UNITYSDK_OFFSET(0xBACA2F0)
#define CLASS_2_E3625122CE82016E_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0xBACA830)
#define CLASS_2_E3625122CE82016E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xBACA730)
#define CLASS_2_E3625122CE82016E_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xBACA560)
#define CLASS_2_E3625122CE82016E__CTOR_OFFSET UNITYSDK_OFFSET(0xBACAD40)
#define CLASS_2_E3625122CE82016E__ONBIND_OFFSET UNITYSDK_OFFSET(0xBAC9880)
#define CLASS_2_E3625122CE82016E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBACA4F0)

inline static constexpr unsigned int Class_2_E3625122CE82016E_TypeDefinitionIndex = 72270;

class Class_2_E3625122CE82016E : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* KOKEDMHKMEJ; // 0x0
	// static const ::System::String* PEHAOAMFILC; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::RPG::Client::PrefabLoadMeta* HKONEDKHNMM; // 0x68
	::UnityEngine::GameObject* DHBGJLDMMON; // 0x70
	::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x78
	::System::Collections::Generic::List_1<::Class_2_19D8F09EED5DB442*>* DHANFADKGGI; // 0x80
	::RPG::GameCore::StageType OIELIKANMGI; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_E1D4799B2F0C2EA1(::System::Nullable_1<::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_E1D4799B2F0C2EA1_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_34FAD805B2009967()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_34FAD805B2009967_OFFSET))(this);
	}

	::System::Void Method_2_DC727741954BBE9B(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_DC727741954BBE9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_98F5AAA93BF786AA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_98F5AAA93BF786AA_OFFSET))(this);
	}

	::System::Void Method_2_EC90259991730611(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_EC90259991730611_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F3ACE763F49DF66(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_7F3ACE763F49DF66_OFFSET))(this, a1);
	}

	::System::Void Method_2_24E0F280645A918D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_24E0F280645A918D_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
