#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEC1250)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS1_0__SETUNIQUEIDINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x1EEC1260)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule___c__DisplayClass1_0_TypeDefinitionIndex = 39717;

	class CGModule___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModule* __4__this; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetUniqueIdINTERNAL_b__0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS1_0__SETUNIQUEIDINTERNAL_B__0_OFFSET))(this, m);
		}
	};
}
