#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelAddOnConfig; }
namespace System { class Action; }

#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_B8DB1A0CEC3C85B3_METHOD_1_2992063E3D3355B1_OFFSET UNITYSDK_OFFSET(0xF899230)
#define CLASS_1_2D7A7F4C8725BB96_CLASS_1_B8DB1A0CEC3C85B3__CTOR_OFFSET UNITYSDK_OFFSET(0xF899220)

inline static constexpr unsigned int Class_1_2D7A7F4C8725BB96_Class_1_B8DB1A0CEC3C85B3_TypeDefinitionIndex = 81264;

class Class_1_2D7A7F4C8725BB96_Class_1_B8DB1A0CEC3C85B3 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_B8DB1A0CEC3C85B3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2992063E3D3355B1(::MoleMole::Config::LevelAddOnConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelAddOnConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2D7A7F4C8725BB96_CLASS_1_B8DB1A0CEC3C85B3_METHOD_1_2992063E3D3355B1_OFFSET))(this, a1);
	}
};
