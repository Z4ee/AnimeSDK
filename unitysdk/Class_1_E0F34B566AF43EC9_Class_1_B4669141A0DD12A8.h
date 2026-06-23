#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { class Action; }

#define CLASS_1_E0F34B566AF43EC9_CLASS_1_B4669141A0DD12A8_METHOD_1_638707458B482BB3_OFFSET UNITYSDK_OFFSET(0x16C431A0)
#define CLASS_1_E0F34B566AF43EC9_CLASS_1_B4669141A0DD12A8__CTOR_OFFSET UNITYSDK_OFFSET(0x16C421E0)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Class_1_B4669141A0DD12A8_TypeDefinitionIndex = 48222;

class Class_1_E0F34B566AF43EC9_Class_1_B4669141A0DD12A8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_CLASS_1_B4669141A0DD12A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_638707458B482BB3(::MoleMole::Config::ConfigHollowChessboardAtmosphere* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardAtmosphere*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_CLASS_1_B4669141A0DD12A8_METHOD_1_638707458B482BB3_OFFSET))(this, a1);
	}
};
