#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigFixedCameraEntry; }
namespace System { class Action; }

#define CLASS_1_77F52DD9FB1CA8B2_CLASS_1_337AD0A1BB17ECF9_METHOD_1_0658A731E22B6569_OFFSET UNITYSDK_OFFSET(0x12333750)
#define CLASS_1_77F52DD9FB1CA8B2_CLASS_1_337AD0A1BB17ECF9__CTOR_OFFSET UNITYSDK_OFFSET(0x12333740)

inline static constexpr unsigned int Class_1_77F52DD9FB1CA8B2_Class_1_337AD0A1BB17ECF9_TypeDefinitionIndex = 89808;

class Class_1_77F52DD9FB1CA8B2_Class_1_337AD0A1BB17ECF9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_CLASS_1_337AD0A1BB17ECF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0658A731E22B6569(::MoleMole::Config::ConfigFixedCameraEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFixedCameraEntry*))((::PBYTE)hIl2Cpp + CLASS_1_77F52DD9FB1CA8B2_CLASS_1_337AD0A1BB17ECF9_METHOD_1_0658A731E22B6569_OFFSET))(this, a1);
	}
};
