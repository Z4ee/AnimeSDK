#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace System { class Action; }

#define CLASS_1_F5E0F040DC0991EB_CLASS_1_2D7762074470C4D1_METHOD_1_EFEC59EAB6FA382E_OFFSET UNITYSDK_OFFSET(0x1313ADB0)
#define CLASS_1_F5E0F040DC0991EB_CLASS_1_2D7762074470C4D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1313ADA0)

inline static constexpr unsigned int Class_1_F5E0F040DC0991EB_Class_1_2D7762074470C4D1_TypeDefinitionIndex = 44648;

class Class_1_F5E0F040DC0991EB_Class_1_2D7762074470C4D1 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_CLASS_1_2D7762074470C4D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EFEC59EAB6FA382E(::MoleMole::Config::ConfigUIGachaPortrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*))((::PBYTE)hIl2Cpp + CLASS_1_F5E0F040DC0991EB_CLASS_1_2D7762074470C4D1_METHOD_1_EFEC59EAB6FA382E_OFFSET))(this, a1);
	}
};
