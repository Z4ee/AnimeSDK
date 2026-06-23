#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FC8546EC097E6B41.h"

namespace MoleMole::Config { class ConfigSetAnimatorTriggerCommonNodeV2; }

#define CLASS_4_94FB30A59CF8FB62_METHOD_4_B3CBC181390C9CD1_OFFSET UNITYSDK_OFFSET(0x17A86CD0)
#define CLASS_4_94FB30A59CF8FB62_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17A86C10)
#define CLASS_4_94FB30A59CF8FB62_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x17A86C20)
#define CLASS_4_94FB30A59CF8FB62__CTOR_OFFSET UNITYSDK_OFFSET(0x17A86F00)

inline static constexpr unsigned int Class_4_94FB30A59CF8FB62_TypeDefinitionIndex = 83628;

class Class_4_94FB30A59CF8FB62 : public ::Class_3_FC8546EC097E6B41
{
public:
	::MoleMole::Config::ConfigSetAnimatorTriggerCommonNodeV2* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_B3CBC181390C9CD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_B3CBC181390C9CD1_OFFSET))(this);
	}
};
