#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace System { class Action; }

#define CLASS_1_98B54EE3837CBF79_CLASS_1_D03D22803242734D_METHOD_1_800BE20C5512D094_OFFSET UNITYSDK_OFFSET(0xE92CA30)
#define CLASS_1_98B54EE3837CBF79_CLASS_1_D03D22803242734D__CTOR_OFFSET UNITYSDK_OFFSET(0xE92CA20)

inline static constexpr unsigned int Class_1_98B54EE3837CBF79_Class_1_D03D22803242734D_TypeDefinitionIndex = 70021;

class Class_1_98B54EE3837CBF79_Class_1_D03D22803242734D : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_CLASS_1_D03D22803242734D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_800BE20C5512D094(::MoleMole::Config::ConfigSideScrollingLevel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*))((::PBYTE)hIl2Cpp + CLASS_1_98B54EE3837CBF79_CLASS_1_D03D22803242734D_METHOD_1_800BE20C5512D094_OFFSET))(this, a1);
	}
};
