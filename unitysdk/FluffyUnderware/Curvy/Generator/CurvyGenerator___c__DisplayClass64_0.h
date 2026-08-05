#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS64_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F40D7F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS64_0__GETMODULE_B__0_OFFSET UNITYSDK_OFFSET(0x1F40FAD0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator___c__DisplayClass64_0_TypeDefinitionIndex = 39651;

	class CurvyGenerator___c__DisplayClass64_0 : public ::System::Object
	{
	public:
		::System::Int32 moduleID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS64_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModule_b__0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS64_0__GETMODULE_B__0_OFFSET))(this, m);
		}
	};
}
