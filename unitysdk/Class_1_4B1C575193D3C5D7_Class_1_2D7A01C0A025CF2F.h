#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { class Action; }

#define CLASS_1_4B1C575193D3C5D7_CLASS_1_2D7A01C0A025CF2F_METHOD_1_8A10C61F84489A40_OFFSET UNITYSDK_OFFSET(0x1317B690)
#define CLASS_1_4B1C575193D3C5D7_CLASS_1_2D7A01C0A025CF2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1317B680)

inline static constexpr unsigned int Class_1_4B1C575193D3C5D7_Class_1_2D7A01C0A025CF2F_TypeDefinitionIndex = 54028;

class Class_1_4B1C575193D3C5D7_Class_1_2D7A01C0A025CF2F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_CLASS_1_2D7A01C0A025CF2F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A10C61F84489A40(::MoleMole::Config::ConfigGachaPerformanceLights* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_CLASS_1_2D7A01C0A025CF2F_METHOD_1_8A10C61F84489A40_OFFSET))(this, a1);
	}
};
