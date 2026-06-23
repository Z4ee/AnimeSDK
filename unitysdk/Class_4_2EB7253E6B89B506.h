#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FC8546EC097E6B41.h"

namespace MoleMole::Config { class ConfigGachaPerformanceSendCmdWithoutParamsNode; }

#define CLASS_4_2EB7253E6B89B506_METHOD_4_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x123F5AA0)
#define CLASS_4_2EB7253E6B89B506_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x123F59E0)
#define CLASS_4_2EB7253E6B89B506_METHOD_4_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x123F59F0)
#define CLASS_4_2EB7253E6B89B506__CTOR_OFFSET UNITYSDK_OFFSET(0x123F5C30)

inline static constexpr unsigned int Class_4_2EB7253E6B89B506_TypeDefinitionIndex = 64809;

class Class_4_2EB7253E6B89B506 : public ::Class_3_FC8546EC097E6B41
{
public:
	::MoleMole::Config::ConfigGachaPerformanceSendCmdWithoutParamsNode* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2EB7253E6B89B506__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_4_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2EB7253E6B89B506_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_4_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2EB7253E6B89B506_METHOD_4_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_4_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2EB7253E6B89B506_METHOD_4_08A500CCFA7B1882_OFFSET))(this);
	}
};
