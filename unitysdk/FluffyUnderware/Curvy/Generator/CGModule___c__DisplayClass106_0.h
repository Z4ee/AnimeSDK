#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleLink; }
namespace FluffyUnderware::Curvy::Generator { class CGModuleSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS106_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC8D010)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS106_0__GETLINKS_B__0_OFFSET UNITYSDK_OFFSET(0x1DC8E1C0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule___c__DisplayClass106_0_TypeDefinitionIndex = 38904;

	class CGModule___c__DisplayClass106_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleSlot* source; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS106_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLinks_b__0(::FluffyUnderware::Curvy::Generator::CGModuleLink* t)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModuleLink*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE___C__DISPLAYCLASS106_0__GETLINKS_B__0_OFFSET))(this, t);
		}
	};
}
