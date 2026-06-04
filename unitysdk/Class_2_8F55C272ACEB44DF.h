#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/PhainonPowerNodeState.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_8F55C272ACEB44DF_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x1354D9F0)
#define CLASS_2_8F55C272ACEB44DF_METHOD_2_64D5261F8382B492_OFFSET UNITYSDK_OFFSET(0x1354D8A0)
#define CLASS_2_8F55C272ACEB44DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1354DA40)
#define CLASS_2_8F55C272ACEB44DF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1354D840)
#define CLASS_2_8F55C272ACEB44DF___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1354DA70)

inline static constexpr unsigned int Class_2_8F55C272ACEB44DF_TypeDefinitionIndex = 67213;

class Class_2_8F55C272ACEB44DF : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::Animation* Field_2_3; // 0x60
	::System::Boolean Field_2_4; // 0x68

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

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F55C272ACEB44DF___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
