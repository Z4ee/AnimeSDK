#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_636626E93C411559_METHOD_1_BE0290805E67D23E_OFFSET UNITYSDK_OFFSET(0x108180E0)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_636626E93C411559__CTOR_OFFSET UNITYSDK_OFFSET(0x108180D0)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_636626E93C411559_TypeDefinitionIndex = 80506;

class Class_3_22FDC730CC26B7BA_Class_1_636626E93C411559 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_636626E93C411559__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE0290805E67D23E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_636626E93C411559_METHOD_1_BE0290805E67D23E_OFFSET))(this, a1);
	}
};
