#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityNapCapsuleAOLightingEffects; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_D7940692F79DD83C_METHOD_1_33E4D799F69FC172_OFFSET UNITYSDK_OFFSET(0xDAE7EA0)
#define CLASS_1_5C5D1BCD30A891BA_CLASS_1_D7940692F79DD83C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE7E90)

inline static constexpr unsigned int Class_1_5C5D1BCD30A891BA_Class_1_D7940692F79DD83C_TypeDefinitionIndex = 69931;

class Class_1_5C5D1BCD30A891BA_Class_1_D7940692F79DD83C : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_D7940692F79DD83C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33E4D799F69FC172(::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityNapCapsuleAOLightingEffects*))((::PBYTE)hIl2Cpp + CLASS_1_5C5D1BCD30A891BA_CLASS_1_D7940692F79DD83C_METHOD_1_33E4D799F69FC172_OFFSET))(this, a1);
	}
};
