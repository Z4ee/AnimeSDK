#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardAtmosphere; }
namespace System { class Action; }

#define CLASS_1_E0F34B566AF43EC9_CLASS_1_E97D5505CDFAAA24_METHOD_1_F15ADB30626F3039_OFFSET UNITYSDK_OFFSET(0x12BD0E80)
#define CLASS_1_E0F34B566AF43EC9_CLASS_1_E97D5505CDFAAA24__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD0E70)

inline static constexpr unsigned int Class_1_E0F34B566AF43EC9_Class_1_E97D5505CDFAAA24_TypeDefinitionIndex = 54838;

class Class_1_E0F34B566AF43EC9_Class_1_E97D5505CDFAAA24 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_CLASS_1_E97D5505CDFAAA24__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F15ADB30626F3039(::MoleMole::Config::ConfigHollowChessboardAtmosphere* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardAtmosphere*))((::PBYTE)hIl2Cpp + CLASS_1_E0F34B566AF43EC9_CLASS_1_E97D5505CDFAAA24_METHOD_1_F15ADB30626F3039_OFFSET))(this, a1);
	}
};
