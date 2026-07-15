#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_EF38A48BFE5B16E9;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_E3625122CE82016E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17FAC7B0)
#define CLASS_2_E3625122CE82016E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17FACA00)
#define CLASS_2_E3625122CE82016E_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x17FAB810)
#define CLASS_2_E3625122CE82016E_METHOD_2_24E0F280645A918D_OFFSET UNITYSDK_OFFSET(0x17FAC560)
#define CLASS_2_E3625122CE82016E_METHOD_2_34FAD805B2009967_OFFSET UNITYSDK_OFFSET(0x17FABD90)
#define CLASS_2_E3625122CE82016E_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x17FABA50)
#define CLASS_2_E3625122CE82016E_METHOD_2_7F3ACE763F49DF66_OFFSET UNITYSDK_OFFSET(0x17FAC4F0)
#define CLASS_2_E3625122CE82016E_METHOD_2_98F5AAA93BF786AA_OFFSET UNITYSDK_OFFSET(0x17FAC110)
#define CLASS_2_E3625122CE82016E_METHOD_2_DC727741954BBE9B_OFFSET UNITYSDK_OFFSET(0x17FABE00)
#define CLASS_2_E3625122CE82016E_METHOD_2_E1D4799B2F0C2EA1_OFFSET UNITYSDK_OFFSET(0x17FABCA0)
#define CLASS_2_E3625122CE82016E_METHOD_2_EC90259991730611_OFFSET UNITYSDK_OFFSET(0x17FAC1E0)
#define CLASS_2_E3625122CE82016E_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x17FAC720)
#define CLASS_2_E3625122CE82016E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x17FAC620)
#define CLASS_2_E3625122CE82016E_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x17FAC450)
#define CLASS_2_E3625122CE82016E__CTOR_OFFSET UNITYSDK_OFFSET(0x17FACC20)
#define CLASS_2_E3625122CE82016E__ONBIND_OFFSET UNITYSDK_OFFSET(0x17FAB7A0)
#define CLASS_2_E3625122CE82016E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17FAC3E0)

inline static constexpr unsigned int Class_2_E3625122CE82016E_TypeDefinitionIndex = 69070;

class Class_2_E3625122CE82016E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::System::Collections::Generic::List_1<::Class_2_EF38A48BFE5B16E9*>* Field_2_2; // 0x60
	::UnityEngine::GameObject* Field_2_3; // 0x68
	::UnityEngine::Animation* Field_2_4; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_5; // 0x78
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x80
	::RPG::GameCore::StageType Field_2_7; // 0x88

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
