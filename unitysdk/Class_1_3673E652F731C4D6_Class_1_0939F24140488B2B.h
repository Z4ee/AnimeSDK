#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class FootPrintConfigs; }
namespace System { class Action; }

#define CLASS_1_3673E652F731C4D6_CLASS_1_0939F24140488B2B_METHOD_1_8076C8E8328ADE31_OFFSET UNITYSDK_OFFSET(0xF7C0980)
#define CLASS_1_3673E652F731C4D6_CLASS_1_0939F24140488B2B__CTOR_OFFSET UNITYSDK_OFFSET(0xF7C0970)

inline static constexpr unsigned int Class_1_3673E652F731C4D6_Class_1_0939F24140488B2B_TypeDefinitionIndex = 66596;

class Class_1_3673E652F731C4D6_Class_1_0939F24140488B2B : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3673E652F731C4D6_CLASS_1_0939F24140488B2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8076C8E8328ADE31(::MoleMole::Config::FootPrintConfigs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::FootPrintConfigs*))((::PBYTE)hIl2Cpp + CLASS_1_3673E652F731C4D6_CLASS_1_0939F24140488B2B_METHOD_1_8076C8E8328ADE31_OFFSET))(this, a1);
	}
};
