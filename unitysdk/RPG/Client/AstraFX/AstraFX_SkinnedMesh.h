#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFX_SkinnedMesh_SkinnedMeshBinder.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"

namespace RPG::Client::AstraFX { class AstraFX_SkinnedMesh_PassSettingByMesh; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x9D45B20)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x9D45BA0)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x9D45B60)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x9D45110)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x9D45BE0)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh_TypeDefinitionIndex = 67825;

	class AstraFX_SkinnedMesh : public ::RPG::Client::TAMonoBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder>* Binders; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*>* PassSettings; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH__CTOR_OFFSET))(this);
		}

		::System::Void ResetSimulationState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_RESETSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void AfterCreateResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_AFTERCREATERESOURCES_OFFSET))(this);
		}

		::System::Void BeforeExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_BEFOREEXECUTEPASSES_OFFSET))(this);
		}

		::System::Void AfterExecutePasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_AFTEREXECUTEPASSES_OFFSET))(this);
		}
	};
}
