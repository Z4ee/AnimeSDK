#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSplineTag; }
namespace System { class Action; }

#define CLASS_1_F1E9C6ED53044CF7_CLASS_1_371BC17673932AA3_METHOD_1_667B640FB37D4DD9_OFFSET UNITYSDK_OFFSET(0x18B256D0)
#define CLASS_1_F1E9C6ED53044CF7_CLASS_1_371BC17673932AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x18B256C0)

inline static constexpr unsigned int Class_1_F1E9C6ED53044CF7_Class_1_371BC17673932AA3_TypeDefinitionIndex = 40212;

class Class_1_F1E9C6ED53044CF7_Class_1_371BC17673932AA3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_CLASS_1_371BC17673932AA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_667B640FB37D4DD9(::MoleMole::Config::ConfigSplineTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSplineTag*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_CLASS_1_371BC17673932AA3_METHOD_1_667B640FB37D4DD9_OFFSET))(this, a1);
	}
};
