#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIMainPageShow; }
namespace System { class Action; }

#define CLASS_1_72AE65C1FEC0C51C_CLASS_1_4E31EA2A31BFEC06_METHOD_1_08C4D5DFAB3EAD41_OFFSET UNITYSDK_OFFSET(0x1355D780)
#define CLASS_1_72AE65C1FEC0C51C_CLASS_1_4E31EA2A31BFEC06__CTOR_OFFSET UNITYSDK_OFFSET(0x1355D770)

inline static constexpr unsigned int Class_1_72AE65C1FEC0C51C_Class_1_4E31EA2A31BFEC06_TypeDefinitionIndex = 54985;

class Class_1_72AE65C1FEC0C51C_Class_1_4E31EA2A31BFEC06 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_CLASS_1_4E31EA2A31BFEC06__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_08C4D5DFAB3EAD41(::MoleMole::ConfigUIMainPageShow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainPageShow*))((::PBYTE)hIl2Cpp + CLASS_1_72AE65C1FEC0C51C_CLASS_1_4E31EA2A31BFEC06_METHOD_1_08C4D5DFAB3EAD41_OFFSET))(this, a1);
	}
};
