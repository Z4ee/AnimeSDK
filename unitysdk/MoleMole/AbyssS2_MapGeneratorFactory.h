#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AbyssS2_GenRouteMapConfig; }
namespace MoleMole { class AbyssS2_IMapGenerator; }

#define MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_CREATEGENERATOR_OFFSET UNITYSDK_OFFSET(0x13EB99D0)
#define MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_TEST_OFFSET UNITYSDK_OFFSET(0x13EB9990)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_MapGeneratorFactory_TypeDefinitionIndex = 85696;

	class AbyssS2_MapGeneratorFactory : public ::System::Object
	{
	public:
		static ::System::Void Test()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_TEST_OFFSET))();
		}

		static ::MoleMole::AbyssS2_IMapGenerator* CreateGenerator(::MoleMole::AbyssS2_GenRouteMapConfig* inConfig)
		{
			return ((::MoleMole::AbyssS2_IMapGenerator*(*)(::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_CREATEGENERATOR_OFFSET))(inConfig);
		}
	};
}
