#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace System { class String; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS81_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0D500)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS81_0__ISMODULENAMEUNIQUE_B__0_OFFSET UNITYSDK_OFFSET(0x1DB0D510)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator___c__DisplayClass81_0_TypeDefinitionIndex = 38913;

	class CurvyGenerator___c__DisplayClass81_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x10
		::System::String* uniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS81_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsModuleNameUnique_b__0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS81_0__ISMODULENAMEUNIQUE_B__0_OFFSET))(this, m);
		}
	};
}
