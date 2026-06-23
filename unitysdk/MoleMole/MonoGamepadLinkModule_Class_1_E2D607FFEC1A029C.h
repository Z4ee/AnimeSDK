#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadLinkModule; }

#define MOLEMOLE_MONOGAMEPADLINKMODULE_CLASS_1_E2D607FFEC1A029C_METHOD_1_96A00CE49069174B_OFFSET UNITYSDK_OFFSET(0x12BD0460)
#define MOLEMOLE_MONOGAMEPADLINKMODULE_CLASS_1_E2D607FFEC1A029C__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD0450)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadLinkModule_Class_1_E2D607FFEC1A029C_TypeDefinitionIndex = 47357;

	class MonoGamepadLinkModule_Class_1_E2D607FFEC1A029C : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadLinkModule* Field_1_0; // 0x10
		::System::Single Field_1_1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE_CLASS_1_E2D607FFEC1A029C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_96A00CE49069174B(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE_CLASS_1_E2D607FFEC1A029C_METHOD_1_96A00CE49069174B_OFFSET))(this, a1, a2);
		}
	};
}
