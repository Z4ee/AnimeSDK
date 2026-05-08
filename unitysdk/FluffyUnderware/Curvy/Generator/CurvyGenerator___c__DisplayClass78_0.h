#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1AB10)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS78_0__GETMODULEUNIQUEID_B__0_OFFSET UNITYSDK_OFFSET(0x1BC1AB20)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator___c__DisplayClass78_0_TypeDefinitionIndex = 37358;

	class CurvyGenerator___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x10
		::System::Int32 id; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetModuleUniqueID_b__0(::FluffyUnderware::Curvy::Generator::CGModule* m)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR___C__DISPLAYCLASS78_0__GETMODULEUNIQUEID_B__0_OFFSET))(this, m);
		}
	};
}
