#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShootingGroundScriptableObject; }
namespace System { class Action; }

#define CLASS_1_0F42A885256B3519_CLASS_1_B3583CB072FFC0DA_METHOD_1_3FBA9B3C81F37977_OFFSET UNITYSDK_OFFSET(0x1080C2B0)
#define CLASS_1_0F42A885256B3519_CLASS_1_B3583CB072FFC0DA__CTOR_OFFSET UNITYSDK_OFFSET(0x1080C2A0)

inline static constexpr unsigned int Class_1_0F42A885256B3519_Class_1_B3583CB072FFC0DA_TypeDefinitionIndex = 70569;

class Class_1_0F42A885256B3519_Class_1_B3583CB072FFC0DA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_CLASS_1_B3583CB072FFC0DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FBA9B3C81F37977(::MoleMole::Config::ConfigShootingGroundScriptableObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShootingGroundScriptableObject*))((::PBYTE)hIl2Cpp + CLASS_1_0F42A885256B3519_CLASS_1_B3583CB072FFC0DA_METHOD_1_3FBA9B3C81F37977_OFFSET))(this, a1);
	}
};
