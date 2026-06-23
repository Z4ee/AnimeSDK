#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSplineTag; }
namespace System { class Action; }

#define CLASS_1_F1E9C6ED53044CF7_CLASS_1_B9A21AFC1E4366D9_METHOD_1_9058B533E0D7B20A_OFFSET UNITYSDK_OFFSET(0x15C6ABA0)
#define CLASS_1_F1E9C6ED53044CF7_CLASS_1_B9A21AFC1E4366D9__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6AB90)

inline static constexpr unsigned int Class_1_F1E9C6ED53044CF7_Class_1_B9A21AFC1E4366D9_TypeDefinitionIndex = 81066;

class Class_1_F1E9C6ED53044CF7_Class_1_B9A21AFC1E4366D9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_CLASS_1_B9A21AFC1E4366D9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9058B533E0D7B20A(::MoleMole::Config::ConfigSplineTag* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSplineTag*))((::PBYTE)hIl2Cpp + CLASS_1_F1E9C6ED53044CF7_CLASS_1_B9A21AFC1E4366D9_METHOD_1_9058B533E0D7B20A_OFFSET))(this, a1);
	}
};
