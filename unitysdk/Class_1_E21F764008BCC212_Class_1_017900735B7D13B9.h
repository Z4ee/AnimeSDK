#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { class Action; }

#define CLASS_1_E21F764008BCC212_CLASS_1_017900735B7D13B9_METHOD_1_556E7BD1F02A4F3E_OFFSET UNITYSDK_OFFSET(0x15474390)
#define CLASS_1_E21F764008BCC212_CLASS_1_017900735B7D13B9__CTOR_OFFSET UNITYSDK_OFFSET(0x15474380)

inline static constexpr unsigned int Class_1_E21F764008BCC212_Class_1_017900735B7D13B9_TypeDefinitionIndex = 89736;

class Class_1_E21F764008BCC212_Class_1_017900735B7D13B9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_CLASS_1_017900735B7D13B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_556E7BD1F02A4F3E(::MoleMole::Config::ConfigHollowNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowNpc*))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_CLASS_1_017900735B7D13B9_METHOD_1_556E7BD1F02A4F3E_OFFSET))(this, a1);
	}
};
