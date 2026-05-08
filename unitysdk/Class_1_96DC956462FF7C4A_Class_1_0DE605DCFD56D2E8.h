#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class GamifiedPropConfig; }
namespace System { class Action; }

#define CLASS_1_96DC956462FF7C4A_CLASS_1_0DE605DCFD56D2E8_METHOD_1_FB92E3A8D1395476_OFFSET UNITYSDK_OFFSET(0x12EBA920)
#define CLASS_1_96DC956462FF7C4A_CLASS_1_0DE605DCFD56D2E8__CTOR_OFFSET UNITYSDK_OFFSET(0x12EBA910)

inline static constexpr unsigned int Class_1_96DC956462FF7C4A_Class_1_0DE605DCFD56D2E8_TypeDefinitionIndex = 65991;

class Class_1_96DC956462FF7C4A_Class_1_0DE605DCFD56D2E8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_CLASS_1_0DE605DCFD56D2E8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB92E3A8D1395476(::MoleMole::Config::GamifiedPropConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::GamifiedPropConfig*))((::PBYTE)hIl2Cpp + CLASS_1_96DC956462FF7C4A_CLASS_1_0DE605DCFD56D2E8_METHOD_1_FB92E3A8D1395476_OFFSET))(this, a1);
	}
};
