#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCharacterAimMode; }
namespace System { class Action; }

#define CLASS_1_D6AA1D547C861459_CLASS_1_589CAF5E164988D8_METHOD_1_3B47C878D1FA0481_OFFSET UNITYSDK_OFFSET(0x15644950)
#define CLASS_1_D6AA1D547C861459_CLASS_1_589CAF5E164988D8__CTOR_OFFSET UNITYSDK_OFFSET(0x15644940)

inline static constexpr unsigned int Class_1_D6AA1D547C861459_Class_1_589CAF5E164988D8_TypeDefinitionIndex = 40577;

class Class_1_D6AA1D547C861459_Class_1_589CAF5E164988D8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_CLASS_1_589CAF5E164988D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3B47C878D1FA0481(::MoleMole::Config::ConfigCharacterAimMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAimMode*))((::PBYTE)hIl2Cpp + CLASS_1_D6AA1D547C861459_CLASS_1_589CAF5E164988D8_METHOD_1_3B47C878D1FA0481_OFFSET))(this, a1);
	}
};
