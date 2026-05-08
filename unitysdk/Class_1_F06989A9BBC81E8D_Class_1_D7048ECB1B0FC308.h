#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class TagLibraryConfig; }
namespace System { class Action; }

#define CLASS_1_F06989A9BBC81E8D_CLASS_1_D7048ECB1B0FC308_METHOD_1_E3AF8C75D5A67C2E_OFFSET UNITYSDK_OFFSET(0xE50EF20)
#define CLASS_1_F06989A9BBC81E8D_CLASS_1_D7048ECB1B0FC308__CTOR_OFFSET UNITYSDK_OFFSET(0xE50EF10)

inline static constexpr unsigned int Class_1_F06989A9BBC81E8D_Class_1_D7048ECB1B0FC308_TypeDefinitionIndex = 70655;

class Class_1_F06989A9BBC81E8D_Class_1_D7048ECB1B0FC308 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_CLASS_1_D7048ECB1B0FC308__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E3AF8C75D5A67C2E(::MoleMole::Config::TagLibraryConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TagLibraryConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F06989A9BBC81E8D_CLASS_1_D7048ECB1B0FC308_METHOD_1_E3AF8C75D5A67C2E_OFFSET))(this, a1);
	}
};
