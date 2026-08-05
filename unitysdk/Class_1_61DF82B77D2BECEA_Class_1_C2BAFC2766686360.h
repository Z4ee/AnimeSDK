#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRabGame; }
namespace System { class Action; }

#define CLASS_1_61DF82B77D2BECEA_CLASS_1_C2BAFC2766686360_METHOD_1_6F141D76FBC11D9E_OFFSET UNITYSDK_OFFSET(0x15688940)
#define CLASS_1_61DF82B77D2BECEA_CLASS_1_C2BAFC2766686360__CTOR_OFFSET UNITYSDK_OFFSET(0x15688930)

inline static constexpr unsigned int Class_1_61DF82B77D2BECEA_Class_1_C2BAFC2766686360_TypeDefinitionIndex = 82423;

class Class_1_61DF82B77D2BECEA_Class_1_C2BAFC2766686360 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61DF82B77D2BECEA_CLASS_1_C2BAFC2766686360__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6F141D76FBC11D9E(::MoleMole::Config::ConfigRabGame* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRabGame*))((::PBYTE)hIl2Cpp + CLASS_1_61DF82B77D2BECEA_CLASS_1_C2BAFC2766686360_METHOD_1_6F141D76FBC11D9E_OFFSET))(this, a1);
	}
};
