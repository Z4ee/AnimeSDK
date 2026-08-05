#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class PerformConfig; }

#define CLASS_1_876421EDE2635269__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA11E0)

inline static constexpr unsigned int Class_1_876421EDE2635269_TypeDefinitionIndex = 89182;

class Class_1_876421EDE2635269 : public ::System::Object
{
public:
	::MoleMole::PerformConfig* Field_1_0; // 0x10
	::MoleMole::PerformConfig* Field_1_6; // 0x18
	::MoleMole::PerformConfig* Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_876421EDE2635269__CTOR_OFFSET))(this);
	}
};
