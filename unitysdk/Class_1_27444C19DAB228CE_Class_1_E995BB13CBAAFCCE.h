#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIAdapt; }
namespace System { class Action; }

#define CLASS_1_27444C19DAB228CE_CLASS_1_E995BB13CBAAFCCE_METHOD_1_62B0ACD4C6CF1426_OFFSET UNITYSDK_OFFSET(0x10773340)
#define CLASS_1_27444C19DAB228CE_CLASS_1_E995BB13CBAAFCCE__CTOR_OFFSET UNITYSDK_OFFSET(0x10773330)

inline static constexpr unsigned int Class_1_27444C19DAB228CE_Class_1_E995BB13CBAAFCCE_TypeDefinitionIndex = 46474;

class Class_1_27444C19DAB228CE_Class_1_E995BB13CBAAFCCE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_CLASS_1_E995BB13CBAAFCCE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_62B0ACD4C6CF1426(::MoleMole::ConfigUIAdapt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIAdapt*))((::PBYTE)hIl2Cpp + CLASS_1_27444C19DAB228CE_CLASS_1_E995BB13CBAAFCCE_METHOD_1_62B0ACD4C6CF1426_OFFSET))(this, a1);
	}
};
