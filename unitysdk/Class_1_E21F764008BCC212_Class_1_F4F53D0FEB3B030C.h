#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowNpc; }
namespace System { class Action; }

#define CLASS_1_E21F764008BCC212_CLASS_1_F4F53D0FEB3B030C_METHOD_1_C58737185A747EC3_OFFSET UNITYSDK_OFFSET(0x12775A00)
#define CLASS_1_E21F764008BCC212_CLASS_1_F4F53D0FEB3B030C__CTOR_OFFSET UNITYSDK_OFFSET(0x127759F0)

inline static constexpr unsigned int Class_1_E21F764008BCC212_Class_1_F4F53D0FEB3B030C_TypeDefinitionIndex = 85926;

class Class_1_E21F764008BCC212_Class_1_F4F53D0FEB3B030C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_CLASS_1_F4F53D0FEB3B030C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C58737185A747EC3(::MoleMole::Config::ConfigHollowNpc* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowNpc*))((::PBYTE)hIl2Cpp + CLASS_1_E21F764008BCC212_CLASS_1_F4F53D0FEB3B030C_METHOD_1_C58737185A747EC3_OFFSET))(this, a1);
	}
};
