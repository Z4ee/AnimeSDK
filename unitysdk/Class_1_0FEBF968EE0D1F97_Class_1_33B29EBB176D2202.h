#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIFishV2; }
namespace System { class Action; }

#define CLASS_1_0FEBF968EE0D1F97_CLASS_1_33B29EBB176D2202_METHOD_1_A54A91E272E8D90D_OFFSET UNITYSDK_OFFSET(0x1091AF90)
#define CLASS_1_0FEBF968EE0D1F97_CLASS_1_33B29EBB176D2202__CTOR_OFFSET UNITYSDK_OFFSET(0x1091AF80)

inline static constexpr unsigned int Class_1_0FEBF968EE0D1F97_Class_1_33B29EBB176D2202_TypeDefinitionIndex = 57878;

class Class_1_0FEBF968EE0D1F97_Class_1_33B29EBB176D2202 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_CLASS_1_33B29EBB176D2202__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A54A91E272E8D90D(::MoleMole::ConfigUIFishV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIFishV2*))((::PBYTE)hIl2Cpp + CLASS_1_0FEBF968EE0D1F97_CLASS_1_33B29EBB176D2202_METHOD_1_A54A91E272E8D90D_OFFSET))(this, a1);
	}
};
