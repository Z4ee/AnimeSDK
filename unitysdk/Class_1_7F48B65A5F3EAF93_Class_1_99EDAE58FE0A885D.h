#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMultiplayer; }
namespace System { class Action; }

#define CLASS_1_7F48B65A5F3EAF93_CLASS_1_99EDAE58FE0A885D_METHOD_1_D63E35DC93BC395B_OFFSET UNITYSDK_OFFSET(0x142F5250)
#define CLASS_1_7F48B65A5F3EAF93_CLASS_1_99EDAE58FE0A885D__CTOR_OFFSET UNITYSDK_OFFSET(0x142F5240)

inline static constexpr unsigned int Class_1_7F48B65A5F3EAF93_Class_1_99EDAE58FE0A885D_TypeDefinitionIndex = 58207;

class Class_1_7F48B65A5F3EAF93_Class_1_99EDAE58FE0A885D : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_CLASS_1_99EDAE58FE0A885D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D63E35DC93BC395B(::MoleMole::Config::ConfigMultiplayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMultiplayer*))((::PBYTE)hIl2Cpp + CLASS_1_7F48B65A5F3EAF93_CLASS_1_99EDAE58FE0A885D_METHOD_1_D63E35DC93BC395B_OFFSET))(this, a1);
	}
};
