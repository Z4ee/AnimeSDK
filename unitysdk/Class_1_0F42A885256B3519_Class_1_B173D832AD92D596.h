#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class Action; }

#define CLASS_1_0F42A885256B3519_CLASS_1_B173D832AD92D596_METHOD_1_60CF625D6E55C2A2_OFFSET UNITYSDK_OFFSET(0x14FEBEF0)
#define CLASS_1_0F42A885256B3519_CLASS_1_B173D832AD92D596__CTOR_OFFSET UNITYSDK_OFFSET(0x14FEBEE0)

inline static constexpr unsigned int Class_1_0F42A885256B3519_Class_1_B173D832AD92D596_TypeDefinitionIndex = 55486;

class Class_1_0F42A885256B3519_Class_1_B173D832AD92D596 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_CLASS_1_B173D832AD92D596__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60CF625D6E55C2A2(::MoleMole::Config::ConfigShootingGroundScriptableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_CLASS_1_B173D832AD92D596_METHOD_1_60CF625D6E55C2A2_OFFSET))(this, a1);
	}
};
