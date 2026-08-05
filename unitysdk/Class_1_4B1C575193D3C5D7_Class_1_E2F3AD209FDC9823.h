#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGachaPerformanceLights; }
namespace System { class Action; }

#define CLASS_1_4B1C575193D3C5D7_CLASS_1_E2F3AD209FDC9823_METHOD_1_31B10DB6CE06AAAB_OFFSET UNITYSDK_OFFSET(0x13EC9C60)
#define CLASS_1_4B1C575193D3C5D7_CLASS_1_E2F3AD209FDC9823__CTOR_OFFSET UNITYSDK_OFFSET(0x13EC9C50)

inline static constexpr unsigned int Class_1_4B1C575193D3C5D7_Class_1_E2F3AD209FDC9823_TypeDefinitionIndex = 70900;

class Class_1_4B1C575193D3C5D7_Class_1_E2F3AD209FDC9823 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_CLASS_1_E2F3AD209FDC9823__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31B10DB6CE06AAAB(::MoleMole::Config::ConfigGachaPerformanceLights* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGachaPerformanceLights*))((::PBYTE)hIl2Cpp + CLASS_1_4B1C575193D3C5D7_CLASS_1_E2F3AD209FDC9823_METHOD_1_31B10DB6CE06AAAB_OFFSET))(this, a1);
	}
};
