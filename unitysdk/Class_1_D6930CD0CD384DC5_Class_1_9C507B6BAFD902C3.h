#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAttackDistanceAttenuation; }
namespace System { class Action; }

#define CLASS_1_D6930CD0CD384DC5_CLASS_1_9C507B6BAFD902C3_METHOD_1_F1B5016A3555FDE2_OFFSET UNITYSDK_OFFSET(0x17F486F0)
#define CLASS_1_D6930CD0CD384DC5_CLASS_1_9C507B6BAFD902C3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F486E0)

inline static constexpr unsigned int Class_1_D6930CD0CD384DC5_Class_1_9C507B6BAFD902C3_TypeDefinitionIndex = 52393;

class Class_1_D6930CD0CD384DC5_Class_1_9C507B6BAFD902C3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_CLASS_1_9C507B6BAFD902C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F1B5016A3555FDE2(::MoleMole::Config::ConfigAttackDistanceAttenuation* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAttackDistanceAttenuation*))((::PBYTE)hIl2Cpp + CLASS_1_D6930CD0CD384DC5_CLASS_1_9C507B6BAFD902C3_METHOD_1_F1B5016A3555FDE2_OFFSET))(this, a1);
	}
};
