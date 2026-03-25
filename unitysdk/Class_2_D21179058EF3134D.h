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

#define CLASS_2_D21179058EF3134D_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x11903B20)
#define CLASS_2_D21179058EF3134D_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11903D60)
#define CLASS_2_D21179058EF3134D_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x11902CE0)
#define CLASS_2_D21179058EF3134D_METHOD_2_570EEA4A97605211_OFFSET UNITYSDK_OFFSET(0x11903320)
#define CLASS_2_D21179058EF3134D_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x11904080)
#define CLASS_2_D21179058EF3134D_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x119040E0)
#define CLASS_2_D21179058EF3134D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11904020)
#define CLASS_2_D21179058EF3134D_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x11902F10)
#define CLASS_2_D21179058EF3134D_METHOD_2_7F3ACE763F49DF66_OFFSET UNITYSDK_OFFSET(0x119038F0)
#define CLASS_2_D21179058EF3134D_METHOD_2_871E4ED8EA03089A_OFFSET UNITYSDK_OFFSET(0x11903160)
#define CLASS_2_D21179058EF3134D_METHOD_2_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x11903540)
#define CLASS_2_D21179058EF3134D_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x11903AC0)
#define CLASS_2_D21179058EF3134D_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x11903A00)
#define CLASS_2_D21179058EF3134D_METHOD_2_C860B930B334C9E8_OFFSET UNITYSDK_OFFSET(0x11903280)
#define CLASS_2_D21179058EF3134D_METHOD_2_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x11903960)
#define CLASS_2_D21179058EF3134D_METHOD_2_EC90259991730611_OFFSET UNITYSDK_OFFSET(0x119035E0)
#define CLASS_2_D21179058EF3134D_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x11903850)
#define CLASS_2_D21179058EF3134D__CTOR_OFFSET UNITYSDK_OFFSET(0x11903F60)
#define CLASS_2_D21179058EF3134D__ONBIND_OFFSET UNITYSDK_OFFSET(0x11902BC0)
#define CLASS_2_D21179058EF3134D__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x119037E0)
#define CLASS_2_D21179058EF3134D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x119041A0)
#define CLASS_2_D21179058EF3134D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x11904200)
#define CLASS_2_D21179058EF3134D___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x11903FC0)
#define CLASS_2_D21179058EF3134D___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x11904140)

inline static constexpr unsigned int Class_2_D21179058EF3134D_TypeDefinitionIndex = 59255;

class Class_2_D21179058EF3134D : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	::UnityEngine::Animation* Field_2_1; // 0x60
	::RPG::GameCore::LevelUIComponent* Field_2_6; // 0x68
	::UnityEngine::GameObject* Field_2_2; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_0; // 0x78
	::System::Collections::Generic::List_1<::Class_2_EF38A48BFE5B16E9*>* Field_2_3; // 0x80
	::RPG::GameCore::StageType Field_2_7; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_871E4ED8EA03089A(::System::Nullable_1<::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_871E4ED8EA03089A_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_C860B930B334C9E8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_C860B930B334C9E8_OFFSET))(this);
	}

	::System::Void Method_2_570EEA4A97605211(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_570EEA4A97605211_OFFSET))(this, a1);
	}

	::System::Void Method_2_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_2_EC90259991730611(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_EC90259991730611_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7F3ACE763F49DF66(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_7F3ACE763F49DF66_OFFSET))(this, a1);
	}

	::System::Void Method_2_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D21179058EF3134D___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
