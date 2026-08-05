#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Level { class LevelConfig; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_1C852AECEFE1A8CB_METHOD_1_4EB44928B8F0B43E_OFFSET UNITYSDK_OFFSET(0x15639E70)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_1C852AECEFE1A8CB__CTOR_OFFSET UNITYSDK_OFFSET(0x15639E60)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_1C852AECEFE1A8CB_TypeDefinitionIndex = 71695;

class Class_1_2D7A7F4C8725BB96_Class_1_1C852AECEFE1A8CB : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_1C852AECEFE1A8CB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4EB44928B8F0B43E(::MoleMole::Level::LevelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Level::LevelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_1C852AECEFE1A8CB_METHOD_1_4EB44928B8F0B43E_OFFSET))(this, a1);
	}
};
