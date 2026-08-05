#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SceneSoundPolygonData; }
namespace System { class String; }

#define MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCENTER_OFFSET UNITYSDK_OFFSET(0x145064B0)
#define MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCORNERSWORLD_OFFSET UNITYSDK_OFFSET(0x14506550)
#define MOLEMOLE_SCENESOUNDPORTALDATA_METHOD_5_992EAF95E88449BA_1_OFFSET UNITYSDK_OFFSET(0x14506D90)
#define MOLEMOLE_SCENESOUNDPORTALDATA_METHOD_5_992EAF95E88449BA_OFFSET UNITYSDK_OFFSET(0x14506B30)
#define MOLEMOLE_SCENESOUNDPORTALDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x14506AC0)

namespace MoleMole
{
	inline static constexpr unsigned int SceneSoundPortalData_TypeDefinitionIndex = 78573;

	class SceneSoundPortalData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* portalKey; // 0x18
		::System::Boolean portalEnabled; // 0x20
		::MoleMole::SceneSoundPolygonData* roomA; // 0x28
		::MoleMole::SceneSoundPolygonData* roomB; // 0x30
		::System::Single transmission; // 0x38
		::System::Boolean isOneWay; // 0x3C
		::System::Single openingWidth; // 0x40
		::System::Single openingHeight; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetOpeningCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCENTER_OFFSET))(this);
		}

		::System::Void GetOpeningCornersWorld(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_GETOPENINGCORNERSWORLD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_992EAF95E88449BA(::MoleMole::SceneSoundPolygonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_METHOD_5_992EAF95E88449BA_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_992EAF95E88449BA_1(::MoleMole::SceneSoundPolygonData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundPolygonData*))((::PBYTE)hIl2Cpp + MOLEMOLE_SCENESOUNDPORTALDATA_METHOD_5_992EAF95E88449BA_1_OFFSET))(this, a1);
		}
	};
}
