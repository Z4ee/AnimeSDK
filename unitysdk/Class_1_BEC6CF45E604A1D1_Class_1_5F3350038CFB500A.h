#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace System { class Action; }

#define CLASS_1_BEC6CF45E604A1D1_CLASS_1_5F3350038CFB500A_METHOD_1_34CE6F29F294C12F_OFFSET UNITYSDK_OFFSET(0x127B0970)
#define CLASS_1_BEC6CF45E604A1D1_CLASS_1_5F3350038CFB500A__CTOR_OFFSET UNITYSDK_OFFSET(0x127B0960)

inline static constexpr unsigned int Class_1_BEC6CF45E604A1D1_Class_1_5F3350038CFB500A_TypeDefinitionIndex = 38566;

class Class_1_BEC6CF45E604A1D1_Class_1_5F3350038CFB500A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_CLASS_1_5F3350038CFB500A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_34CE6F29F294C12F(::MoleMole::Config::ConfigLinkZone* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*))((::PBYTE)hIl2Cpp + CLASS_1_BEC6CF45E604A1D1_CLASS_1_5F3350038CFB500A_METHOD_1_34CE6F29F294C12F_OFFSET))(this, a1);
	}
};
