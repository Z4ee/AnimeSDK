#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FC8546EC097E6B41.h"

namespace MoleMole::Config { class ConfigSetAnimatorTriggerCommonNodeV2; }

#define CLASS_4_94FB30A59CF8FB62_METHOD_4_95D695706D6CB2FE_OFFSET UNITYSDK_OFFSET(0xEC87350)
#define CLASS_4_94FB30A59CF8FB62_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xEC872A0)
#define CLASS_4_94FB30A59CF8FB62_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xEC87290)
#define CLASS_4_94FB30A59CF8FB62__CTOR_OFFSET UNITYSDK_OFFSET(0xEC87580)

inline static constexpr unsigned int Class_4_94FB30A59CF8FB62_TypeDefinitionIndex = 75982;

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

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_4_95D695706D6CB2FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_94FB30A59CF8FB62_METHOD_4_95D695706D6CB2FE_OFFSET))(this);
	}
};
