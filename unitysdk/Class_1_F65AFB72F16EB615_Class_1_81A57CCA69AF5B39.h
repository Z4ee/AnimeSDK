#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowTimeRewind; }
namespace System { class Action; }

#define CLASS_1_F65AFB72F16EB615_CLASS_1_81A57CCA69AF5B39_METHOD_1_C029B826697C74FB_OFFSET UNITYSDK_OFFSET(0x1948E950)
#define CLASS_1_F65AFB72F16EB615_CLASS_1_81A57CCA69AF5B39__CTOR_OFFSET UNITYSDK_OFFSET(0x1948E940)

inline static constexpr unsigned int Class_1_F65AFB72F16EB615_Class_1_81A57CCA69AF5B39_TypeDefinitionIndex = 45240;

class Class_1_F65AFB72F16EB615_Class_1_81A57CCA69AF5B39 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_CLASS_1_81A57CCA69AF5B39__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C029B826697C74FB(::MoleMole::Config::ConfigHollowTimeRewind* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowTimeRewind*))((::PBYTE)hIl2Cpp + CLASS_1_F65AFB72F16EB615_CLASS_1_81A57CCA69AF5B39_METHOD_1_C029B826697C74FB_OFFSET))(this, a1);
	}
};
