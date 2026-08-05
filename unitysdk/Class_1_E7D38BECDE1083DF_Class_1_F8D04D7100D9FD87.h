#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace System { class Action; }

#define CLASS_1_E7D38BECDE1083DF_CLASS_1_F8D04D7100D9FD87_METHOD_1_6258110BF292BE33_OFFSET UNITYSDK_OFFSET(0x12F2B230)
#define CLASS_1_E7D38BECDE1083DF_CLASS_1_F8D04D7100D9FD87__CTOR_OFFSET UNITYSDK_OFFSET(0x12F2AF10)

inline static constexpr unsigned int Class_1_E7D38BECDE1083DF_Class_1_F8D04D7100D9FD87_TypeDefinitionIndex = 52433;

class Class_1_E7D38BECDE1083DF_Class_1_F8D04D7100D9FD87 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_CLASS_1_F8D04D7100D9FD87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6258110BF292BE33(::MoleMole::Config::ConfigBuddyMisc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*))((::PBYTE)hIl2Cpp + CLASS_1_E7D38BECDE1083DF_CLASS_1_F8D04D7100D9FD87_METHOD_1_6258110BF292BE33_OFFSET))(this, a1);
	}
};
