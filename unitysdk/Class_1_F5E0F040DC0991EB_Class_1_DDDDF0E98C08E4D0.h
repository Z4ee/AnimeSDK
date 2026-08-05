#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace System { class Action; }

#define CLASS_1_F5E0F040DC0991EB_CLASS_1_DDDDF0E98C08E4D0_METHOD_1_3A1629F9D916846D_OFFSET UNITYSDK_OFFSET(0x114D15A0)
#define CLASS_1_F5E0F040DC0991EB_CLASS_1_DDDDF0E98C08E4D0__CTOR_OFFSET UNITYSDK_OFFSET(0x114D1590)

inline static constexpr unsigned int Class_1_F5E0F040DC0991EB_Class_1_DDDDF0E98C08E4D0_TypeDefinitionIndex = 80584;

class Class_1_F5E0F040DC0991EB_Class_1_DDDDF0E98C08E4D0 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_CLASS_1_DDDDF0E98C08E4D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3A1629F9D916846D(::MoleMole::Config::ConfigUIGachaPortrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_CLASS_1_DDDDF0E98C08E4D0_METHOD_1_3A1629F9D916846D_OFFSET))(this, a1);
	}
};
