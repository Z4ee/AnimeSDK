#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FootPrintConfigs; }
namespace System { class Action; }

#define CLASS_1_3673E652F731C4D6_CLASS_1_3F1EAC0F9A4498E0_METHOD_1_7FD12F53FAAD3A34_OFFSET UNITYSDK_OFFSET(0xFBC28C0)
#define CLASS_1_3673E652F731C4D6_CLASS_1_3F1EAC0F9A4498E0__CTOR_OFFSET UNITYSDK_OFFSET(0xFBC28B0)

inline static constexpr unsigned int Class_1_3673E652F731C4D6_Class_1_3F1EAC0F9A4498E0_TypeDefinitionIndex = 64001;

class Class_1_3673E652F731C4D6_Class_1_3F1EAC0F9A4498E0 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3673E652F731C4D6_CLASS_1_3F1EAC0F9A4498E0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7FD12F53FAAD3A34(::MoleMole::Config::FootPrintConfigs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*))((::PBYTE)hIl2Cpp + CLASS_1_3673E652F731C4D6_CLASS_1_3F1EAC0F9A4498E0_METHOD_1_7FD12F53FAAD3A34_OFFSET))(this, a1);
	}
};
