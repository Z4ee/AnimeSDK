#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/AcheronPowerNodeState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FD1484826C7B8317_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0xB826930)
#define CLASS_2_FD1484826C7B8317_METHOD_2_1A6C778433F4964B_OFFSET UNITYSDK_OFFSET(0xB8267E0)
#define CLASS_2_FD1484826C7B8317__CTOR_OFFSET UNITYSDK_OFFSET(0xB826980)
#define CLASS_2_FD1484826C7B8317__ONBIND_OFFSET UNITYSDK_OFFSET(0xB8266D0)

inline static constexpr unsigned int Class_2_FD1484826C7B8317_TypeDefinitionIndex = 71796;

class Class_2_FD1484826C7B8317 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FBJEELGJKLK; // 0x0
	// static const ::System::String* IJHFOIAGGDI; // 0x0
	// static const ::System::String* PFBDHNPIBOH; // 0x0
	::UnityEngine::Transform* GHGAKNDLKGM; // 0x60
	::UnityEngine::Transform* CBFEKJKIHLN; // 0x68
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x70
	::System::Boolean IAPJFCPEOBL; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_1A6C778433F4964B(::RPG::Client::AcheronPowerNodeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AcheronPowerNodeState))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317_METHOD_2_1A6C778433F4964B_OFFSET))(this, a1);
	}

	::System::Void Method_2_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FD1484826C7B8317_METHOD_2_14045882BC5C6CA9_OFFSET))(this, a1);
	}
};
