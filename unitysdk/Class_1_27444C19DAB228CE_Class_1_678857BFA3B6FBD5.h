#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAdapt; }
namespace System { class Action; }

#define CLASS_1_27444C19DAB228CE_CLASS_1_678857BFA3B6FBD5_METHOD_1_640C8925078D7081_OFFSET UNITYSDK_OFFSET(0x17EC1C60)
#define CLASS_1_27444C19DAB228CE_CLASS_1_678857BFA3B6FBD5__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC1C50)

inline static constexpr unsigned int Class_1_27444C19DAB228CE_Class_1_678857BFA3B6FBD5_TypeDefinitionIndex = 91361;

class Class_1_27444C19DAB228CE_Class_1_678857BFA3B6FBD5 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_CLASS_1_678857BFA3B6FBD5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_640C8925078D7081(::MoleMole::ConfigUIAdapt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAdapt*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_CLASS_1_678857BFA3B6FBD5_METHOD_1_640C8925078D7081_OFFSET))(this, a1);
	}
};
