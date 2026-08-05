#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CurvyGenerator; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_ADDMISSINGCHILDMODULES_OFFSET UNITYSDK_OFFSET(0x1F931430)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_CANCELREQUESTS_OFFSET UNITYSDK_OFFSET(0x1F931410)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_PROCESSREQUESTS_OFFSET UNITYSDK_OFFSET(0x1F931420)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_REQUESTSYNCHRONIZATION_OFFSET UNITYSDK_OFFSET(0x1F931400)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F931710)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator_ModulesSynchronizer_TypeDefinitionIndex = 39657;

	class CurvyGenerator_ModulesSynchronizer : public ::System::Object
	{
	public:
		::System::Boolean hasPendingRequest; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER__CTOR_OFFSET))(this);
		}

		::System::Void RequestSynchronization()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_REQUESTSYNCHRONIZATION_OFFSET))(this);
		}

		::System::Void CancelRequests()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_CANCELREQUESTS_OFFSET))(this);
		}

		::System::Void ProcessRequests(::FluffyUnderware::Curvy::Generator::CurvyGenerator* curvyGenerator)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CurvyGenerator*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_PROCESSREQUESTS_OFFSET))(this, curvyGenerator);
		}

		static ::System::Void AddMissingChildModules(::FluffyUnderware::Curvy::Generator::CurvyGenerator* curvyGenerator)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::Generator::CurvyGenerator*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_MODULESSYNCHRONIZER_ADDMISSINGCHILDMODULES_OFFSET))(curvyGenerator);
		}
	};
}
