#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/RPG/Client/PhainonPowerNodeState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_8F55C272ACEB44DF_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x152C2030)
#define CLASS_2_8F55C272ACEB44DF_METHOD_2_64D5261F8382B492_OFFSET UNITYSDK_OFFSET(0x152C1EE0)
#define CLASS_2_8F55C272ACEB44DF__CTOR_OFFSET UNITYSDK_OFFSET(0x152C2080)
#define CLASS_2_8F55C272ACEB44DF__ONBIND_OFFSET UNITYSDK_OFFSET(0x152C1E80)

inline static constexpr unsigned int Class_2_8F55C272ACEB44DF_TypeDefinitionIndex = 71865;

class Class_2_8F55C272ACEB44DF : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* FBJEELGJKLK; // 0x0
	// static const ::System::String* IJHFOIAGGDI; // 0x0
	// static const ::System::String* PFBDHNPIBOH; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::System::Boolean IAPJFCPEOBL; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F55C272ACEB44DF__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F55C272ACEB44DF__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_64D5261F8382B492(::RPG::Client::PhainonPowerNodeState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhainonPowerNodeState))((::PBYTE)hIl2Cpp + CLASS_2_8F55C272ACEB44DF_METHOD_2_64D5261F8382B492_OFFSET))(this, a1);
	}

	::System::Void Method_2_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8F55C272ACEB44DF_METHOD_2_14045882BC5C6CA9_OFFSET))(this, a1);
	}
};
