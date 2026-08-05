#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_FC8546EC097E6B41.h"

namespace MoleMole::Config { class ConfigGachaPerformanceFadeOutEffectNode; }

#define CLASS_4_33A868B52BA17649_METHOD_4_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x14BA0350)
#define CLASS_4_33A868B52BA17649_METHOD_4_DFD8FD4BA7D3ACA8_OFFSET UNITYSDK_OFFSET(0x14BA0400)
#define CLASS_4_33A868B52BA17649__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA0600)

inline static constexpr unsigned int Class_4_33A868B52BA17649_TypeDefinitionIndex = 89029;

class Class_4_33A868B52BA17649 : public ::Class_3_FC8546EC097E6B41
{
public:
	::MoleMole::Config::ConfigGachaPerformanceFadeOutEffectNode* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_33A868B52BA17649__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_33A868B52BA17649_METHOD_4_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_4_DFD8FD4BA7D3ACA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_33A868B52BA17649_METHOD_4_DFD8FD4BA7D3ACA8_OFFSET))(this);
	}
};
