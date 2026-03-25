#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9E5975D2F490638C_TimelineControllerState.h"
#include "unitysdk/System/Object.h"

class Class_1_FEB78FF437D2B00A;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class TimelinePrefabController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_1_9E5975D2F490638C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA79510)
#define CLASS_1_9E5975D2F490638C_METHOD_1_0F867F96CFAEAE52_OFFSET UNITYSDK_OFFSET(0xEA797A0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_1713F44301AA802F_OFFSET UNITYSDK_OFFSET(0xEA79D60)
#define CLASS_1_9E5975D2F490638C_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xEA7A870)
#define CLASS_1_9E5975D2F490638C_METHOD_1_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0xEA79EF0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_3BDF9414F2C7732A_OFFSET UNITYSDK_OFFSET(0xEA7A7F0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xEA7A590)
#define CLASS_1_9E5975D2F490638C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xEA7A320)
#define CLASS_1_9E5975D2F490638C_METHOD_1_5C00367CEE393898_OFFSET UNITYSDK_OFFSET(0xEA7A790)
#define CLASS_1_9E5975D2F490638C_METHOD_1_7A9EE6E4B8F1006C_OFFSET UNITYSDK_OFFSET(0xEA7A650)
#define CLASS_1_9E5975D2F490638C_METHOD_1_86ADBB4228161C74_OFFSET UNITYSDK_OFFSET(0xEA79640)
#define CLASS_1_9E5975D2F490638C_METHOD_1_A15020FC3F121D82_OFFSET UNITYSDK_OFFSET(0xEA7A3C0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0xEA79560)
#define CLASS_1_9E5975D2F490638C_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xEA794B0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0xEA7A4F0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_D9E34E162363C06E_OFFSET UNITYSDK_OFFSET(0xEA7A0D0)
#define CLASS_1_9E5975D2F490638C_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xEA79F90)
#define CLASS_1_9E5975D2F490638C_METHOD_1_F53A50AFF53AD59E_OFFSET UNITYSDK_OFFSET(0xEA799D0)
#define CLASS_1_9E5975D2F490638C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA79430)

inline static constexpr unsigned int Class_1_9E5975D2F490638C_TypeDefinitionIndex = 49228;

class Class_1_9E5975D2F490638C : public ::System::Object
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_1_4; // 0x10
	::RPG::Client::TimelinePrefabController* Field_1_0; // 0x18
	::UnityEngine::Playables::PlayableDirector* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Class_1_FEB78FF437D2B00A*>* Field_1_5; // 0x28
	::System::Double Field_1_1; // 0x30
	::Class_1_9E5975D2F490638C_TimelineControllerState Field_1_3; // 0x38

	::System::Void _ctor(::RPG::Client::TimelinePrefabController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TimelinePrefabController*))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_86ADBB4228161C74()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_86ADBB4228161C74_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::Boolean Method_1_7A9EE6E4B8F1006C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_7A9EE6E4B8F1006C_OFFSET))(this);
	}

	::System::Void Method_1_A15020FC3F121D82(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_A15020FC3F121D82_OFFSET))(this, a1);
	}

	::System::Void Method_1_0F867F96CFAEAE52(::Cinemachine::CinemachineVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_0F867F96CFAEAE52_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_1_F53A50AFF53AD59E(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_F53A50AFF53AD59E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9E34E162363C06E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_D9E34E162363C06E_OFFSET))(this);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_1713F44301AA802F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_1713F44301AA802F_OFFSET))(this);
	}

	::System::Double Method_1_3BDF9414F2C7732A()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_3BDF9414F2C7732A_OFFSET))(this);
	}

	::System::Double Method_1_5C00367CEE393898()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_5C00367CEE393898_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
