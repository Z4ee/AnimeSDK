#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeoSync; }
namespace HoudiniEngineUnity { class HEU_PDGAssetLink___c__DisplayClass107_0; }
namespace HoudiniEngineUnity { class HEU_SyncedEventData; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK___C__DISPLAYCLASS107_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11A76920)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK___C__DISPLAYCLASS107_1__LOADRESULTS_B__0_OFFSET UNITYSDK_OFFSET(0x11A773D0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink___c__DisplayClass107_1_TypeDefinitionIndex = 39239;

	class HEU_PDGAssetLink___c__DisplayClass107_1 : public ::System::Object
	{
	public:
		::HoudiniEngineUnity::HEU_GeoSync* geoSync; // 0x10
		::HoudiniEngineUnity::HEU_PDGAssetLink___c__DisplayClass107_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK___C__DISPLAYCLASS107_1__CTOR_OFFSET))(this);
		}

		::System::Void _LoadResults_b__0(::HoudiniEngineUnity::HEU_SyncedEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SyncedEventData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK___C__DISPLAYCLASS107_1__LOADRESULTS_B__0_OFFSET))(this, a1);
		}
	};
}
