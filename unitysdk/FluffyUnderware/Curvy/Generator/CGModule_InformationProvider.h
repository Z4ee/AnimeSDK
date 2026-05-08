#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGModule; }
namespace FluffyUnderware::Curvy::Generator { class ModuleInfoAttribute; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INFORMATIONPROVIDER_GETINFORMATION_OFFSET UNITYSDK_OFFSET(0x1B926160)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INFORMATIONPROVIDER_GET_INFORMATION_OFFSET UNITYSDK_OFFSET(0x1B921200)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INFORMATIONPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B923D20)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModule_InformationProvider_TypeDefinitionIndex = 37319;

	class CGModule_InformationProvider : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute* moduleInformation; // 0x10
		::FluffyUnderware::Curvy::Generator::CGModule* module; // 0x18

		::System::Void _ctor(::FluffyUnderware::Curvy::Generator::CGModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGModule*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INFORMATIONPROVIDER__CTOR_OFFSET))(this, module);
		}

		::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute* get_Information()
		{
			return ((::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INFORMATIONPROVIDER_GET_INFORMATION_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute* GetInformation()
		{
			return ((::FluffyUnderware::Curvy::Generator::ModuleInfoAttribute*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULE_INFORMATIONPROVIDER_GETINFORMATION_OFFSET))(this);
		}
	};
}
