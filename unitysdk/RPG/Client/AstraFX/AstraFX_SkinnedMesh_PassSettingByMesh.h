#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFX_SkinnedMesh_ThreadGroupsByMesh.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_PASSSETTINGBYMESH_GET_THREADGROUPSEXPLANATION_OFFSET UNITYSDK_OFFSET(0x19B3AFF0)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_PASSSETTINGBYMESH_GET_VALID_OFFSET UNITYSDK_OFFSET(0x19B3AF80)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_PASSSETTINGBYMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3B370)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh_PassSettingByMesh_TypeDefinitionIndex = 70286;

	class AstraFX_SkinnedMesh_PassSettingByMesh : public ::System::Object
	{
	public:
		::System::String* PassName; // 0x10
		::UnityEngine::Mesh* Mesh; // 0x18
		::RPG::Client::AstraFX::AstraFX_SkinnedMesh_ThreadGroupsByMesh ThreadGroupsByMesh; // 0x20
		::System::Single ThreadGroupsBase; // 0x24
		::System::Single ThreadGroupsScale; // 0x28
		::System::Single ThreadGroupsOffset; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_PASSSETTINGBYMESH__CTOR_OFFSET))(this);
		}

		::System::String* get_ThreadGroupsExplanation()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_PASSSETTINGBYMESH_GET_THREADGROUPSEXPLANATION_OFFSET))(this);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH_PASSSETTINGBYMESH_GET_VALID_OFFSET))(this);
		}
	};
}
