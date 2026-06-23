#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSwitchTeamActivity; }
namespace System { class Action; }

#define CLASS_1_1BF1AD02EA908993_CLASS_1_D25AB158AC8021C3_METHOD_1_E1A441C81CBD91DF_OFFSET UNITYSDK_OFFSET(0x1A4F3BD0)
#define CLASS_1_1BF1AD02EA908993_CLASS_1_D25AB158AC8021C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3BC0)

inline static constexpr unsigned int Class_1_1BF1AD02EA908993_Class_1_D25AB158AC8021C3_TypeDefinitionIndex = 69784;

class Class_1_1BF1AD02EA908993_Class_1_D25AB158AC8021C3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_CLASS_1_D25AB158AC8021C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E1A441C81CBD91DF(::MoleMole::Config::ConfigSwitchTeamActivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSwitchTeamActivity*))((::PBYTE)hIl2Cpp + CLASS_1_1BF1AD02EA908993_CLASS_1_D25AB158AC8021C3_METHOD_1_E1A441C81CBD91DF_OFFSET))(this, a1);
	}
};
