#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIAvatar; }
namespace System { class Action; }

#define CLASS_1_DEB66ADD8E10ACA9_CLASS_1_5F74330E3B667339_METHOD_1_EF4ABF52DA755685_OFFSET UNITYSDK_OFFSET(0x10293FB0)
#define CLASS_1_DEB66ADD8E10ACA9_CLASS_1_5F74330E3B667339__CTOR_OFFSET UNITYSDK_OFFSET(0x10293E60)

inline static constexpr unsigned int Class_1_DEB66ADD8E10ACA9_Class_1_5F74330E3B667339_TypeDefinitionIndex = 86223;

class Class_1_DEB66ADD8E10ACA9_Class_1_5F74330E3B667339 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_CLASS_1_5F74330E3B667339__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EF4ABF52DA755685(::MoleMole::Config::ConfigUIAvatar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_DEB66ADD8E10ACA9_CLASS_1_5F74330E3B667339_METHOD_1_EF4ABF52DA755685_OFFSET))(this, a1);
	}
};
