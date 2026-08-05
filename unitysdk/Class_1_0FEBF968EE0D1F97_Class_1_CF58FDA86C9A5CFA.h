#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { class Action; }

#define CLASS_1_0FEBF968EE0D1F97_CLASS_1_CF58FDA86C9A5CFA_METHOD_1_8D62750FBCA56C34_OFFSET UNITYSDK_OFFSET(0x133C7070)
#define CLASS_1_0FEBF968EE0D1F97_CLASS_1_CF58FDA86C9A5CFA__CTOR_OFFSET UNITYSDK_OFFSET(0x133C6F70)

inline static constexpr unsigned int Class_1_0FEBF968EE0D1F97_Class_1_CF58FDA86C9A5CFA_TypeDefinitionIndex = 84478;

class Class_1_0FEBF968EE0D1F97_Class_1_CF58FDA86C9A5CFA : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_CLASS_1_CF58FDA86C9A5CFA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8D62750FBCA56C34(::MoleMole::ConfigUIFishV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFishV2*))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_CLASS_1_CF58FDA86C9A5CFA_METHOD_1_8D62750FBCA56C34_OFFSET))(this, a1);
	}
};
