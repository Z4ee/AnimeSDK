#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
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

#define CLASS_2_E3625122CE82016E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA6D1570)
#define CLASS_2_E3625122CE82016E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA6D17D0)
#define CLASS_2_E3625122CE82016E_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0xA6D0650)
#define CLASS_2_E3625122CE82016E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xA6D1B00)
#define CLASS_2_E3625122CE82016E_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xA6D1B60)
#define CLASS_2_E3625122CE82016E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA6D1AA0)
#define CLASS_2_E3625122CE82016E_METHOD_2_5F71324A3BD0695E_OFFSET UNITYSDK_OFFSET(0xA6D0BD0)
#define CLASS_2_E3625122CE82016E_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0xA6D0890)
#define CLASS_2_E3625122CE82016E_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0xA6D0F50)
#define CLASS_2_E3625122CE82016E_METHOD_2_7F3ACE763F49DF66_OFFSET UNITYSDK_OFFSET(0xA6D1330)
#define CLASS_2_E3625122CE82016E_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xA6D1510)
#define CLASS_2_E3625122CE82016E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xA6D1440)
#define CLASS_2_E3625122CE82016E_METHOD_2_DC727741954BBE9B_OFFSET UNITYSDK_OFFSET(0xA6D0C40)
#define CLASS_2_E3625122CE82016E_METHOD_2_E1D4799B2F0C2EA1_OFFSET UNITYSDK_OFFSET(0xA6D0AE0)
#define CLASS_2_E3625122CE82016E_METHOD_2_EC90259991730611_OFFSET UNITYSDK_OFFSET(0xA6D1020)
#define CLASS_2_E3625122CE82016E_METHOD_2_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0xA6D1290)
#define CLASS_2_E3625122CE82016E_METHOD_2_FF222CAFD529588D_OFFSET UNITYSDK_OFFSET(0xA6D13A0)
#define CLASS_2_E3625122CE82016E__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D19F0)
#define CLASS_2_E3625122CE82016E__ONBIND_OFFSET UNITYSDK_OFFSET(0xA6D05E0)
#define CLASS_2_E3625122CE82016E__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA6D1220)
#define CLASS_2_E3625122CE82016E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA97C210)
#define CLASS_2_E3625122CE82016E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xA97C270)
#define CLASS_2_E3625122CE82016E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xA6D1A40)
#define CLASS_2_E3625122CE82016E___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA6D1BC0)

inline static constexpr unsigned int Class_2_E3625122CE82016E_TypeDefinitionIndex = 67588;

class Class_2_E3625122CE82016E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::Client::PrefabLoadMeta* Field_2_2; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::System::Collections::Generic::List_1<::Class_2_19D8F09EED5DB442*>* Field_2_4; // 0x70
	::UnityEngine::GameObject* Field_2_5; // 0x78
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

	::System::UInt32 Method_2_5F71324A3BD0695E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_5F71324A3BD0695E_OFFSET))(this);
	}

	::System::Void Method_2_DC727741954BBE9B(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_DC727741954BBE9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_7D21D8548943D577_OFFSET))(this);
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

	::System::Void Method_2_FF222CAFD529588D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_FF222CAFD529588D_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3625122CE82016E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
