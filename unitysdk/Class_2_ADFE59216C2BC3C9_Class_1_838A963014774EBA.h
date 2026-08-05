#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_275;

#define CLASS_2_ADFE59216C2BC3C9_CLASS_1_838A963014774EBA_METHOD_1_B5B8986FDE1DF51F_OFFSET UNITYSDK_OFFSET(0x12521310)
#define CLASS_2_ADFE59216C2BC3C9_CLASS_1_838A963014774EBA__CTOR_OFFSET UNITYSDK_OFFSET(0x12521300)

inline static constexpr unsigned int Class_2_ADFE59216C2BC3C9_Class_1_838A963014774EBA_TypeDefinitionIndex = 61506;

class Class_2_ADFE59216C2BC3C9_Class_1_838A963014774EBA : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_275* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADFE59216C2BC3C9_CLASS_1_838A963014774EBA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B5B8986FDE1DF51F(::MoleMole::Config::SceneConfigRuntimeDataArea a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + CLASS_2_ADFE59216C2BC3C9_CLASS_1_838A963014774EBA_METHOD_1_B5B8986FDE1DF51F_OFFSET))(this, a1);
	}
};
