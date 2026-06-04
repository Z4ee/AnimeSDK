#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F061A380F0650BCC_TimelineControllerState.h"
#include "unitysdk/System/Object.h"

class Class_1_FEB78FF437D2B00A;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class TimelinePrefabController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_F061A380F0650BCC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136E0C10)
#define CLASS_1_F061A380F0650BCC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x136E1FE0)
#define CLASS_1_F061A380F0650BCC_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x136E1660)
#define CLASS_1_F061A380F0650BCC_METHOD_1_3BDF9414F2C7732A_OFFSET UNITYSDK_OFFSET(0x136E1F60)
#define CLASS_1_F061A380F0650BCC_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x136E1D00)
#define CLASS_1_F061A380F0650BCC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x136E1A90)
#define CLASS_1_F061A380F0650BCC_METHOD_1_4DE65AB3A4860CEB_OFFSET UNITYSDK_OFFSET(0x136E1840)
#define CLASS_1_F061A380F0650BCC_METHOD_1_5C00367CEE393898_OFFSET UNITYSDK_OFFSET(0x136E1F00)
#define CLASS_1_F061A380F0650BCC_METHOD_1_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0x136E1DC0)
#define CLASS_1_F061A380F0650BCC_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0x136E0D40)
#define CLASS_1_F061A380F0650BCC_METHOD_1_8E16D73EAA9E1DE3_OFFSET UNITYSDK_OFFSET(0x136E1100)
#define CLASS_1_F061A380F0650BCC_METHOD_1_99E1F26FEE7FDB64_OFFSET UNITYSDK_OFFSET(0x136E0EA0)
#define CLASS_1_F061A380F0650BCC_METHOD_1_A15020FC3F121D82_OFFSET UNITYSDK_OFFSET(0x136E1B30)
#define CLASS_1_F061A380F0650BCC_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x136E0C60)
#define CLASS_1_F061A380F0650BCC_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x136E0BB0)
#define CLASS_1_F061A380F0650BCC_METHOD_1_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x136E14E0)
#define CLASS_1_F061A380F0650BCC_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x136E1C60)
#define CLASS_1_F061A380F0650BCC_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x136E1700)
#define CLASS_1_F061A380F0650BCC__CTOR_OFFSET UNITYSDK_OFFSET(0x136E0B30)

inline static constexpr unsigned int Class_1_F061A380F0650BCC_TypeDefinitionIndex = 56787;

class Class_1_F061A380F0650BCC : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_FEB78FF437D2B00A*>* Field_1_1; // 0x18
	::UnityEngine::Playables::PlayableDirector* Field_1_2; // 0x20
	::RPG::Client::TimelinePrefabController* Field_1_3; // 0x28
	::System::Double Field_1_4; // 0x30
	::Class_1_F061A380F0650BCC_TimelineControllerState Field_1_5; // 0x38

	::System::Void _ctor(::RPG::Client::TimelinePrefabController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimelinePrefabController*))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_7A9EE6E4B8F1006C_OFFSET))(this);
	}

	::System::Void Method_1_A15020FC3F121D82(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_A15020FC3F121D82_OFFSET))(this, a1);
	}

	::System::Void Method_1_99E1F26FEE7FDB64(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_99E1F26FEE7FDB64_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_8E16D73EAA9E1DE3(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_8E16D73EAA9E1DE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_4DE65AB3A4860CEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_4DE65AB3A4860CEB_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Double Method_1_3BDF9414F2C7732A()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_3BDF9414F2C7732A_OFFSET))(this);
	}

	::System::Double Method_1_5C00367CEE393898()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_5C00367CEE393898_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
