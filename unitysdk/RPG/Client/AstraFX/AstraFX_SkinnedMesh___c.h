#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AstraFX/AstraFX_SkinnedMesh_SkinnedMeshBinder.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::AstraFX { class AstraFX_SkinnedMesh_PassSettingByMesh; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB335E40)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB335E80)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_0_OFFSET UNITYSDK_OFFSET(0xB335E90)
#define RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_1_OFFSET UNITYSDK_OFFSET(0xB335FB0)

namespace RPG::Client::AstraFX
{
	inline static constexpr unsigned int AstraFX_SkinnedMesh___c_TypeDefinitionIndex = 68787;

	class AstraFX_SkinnedMesh___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AstraFX::AstraFX_SkinnedMesh___c** StaticGet___9()
		{
			return (::RPG::Client::AstraFX::AstraFX_SkinnedMesh___c**)Il2CppClass::FromTypeDefinitionIndex(AstraFX_SkinnedMesh___c_TypeDefinitionIndex)->GetStaticField(0x62140);
		}
		static ::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AstraFX_SkinnedMesh___c_TypeDefinitionIndex)->GetStaticField(0x62148);
		}
		static ::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AstraFX_SkinnedMesh___c_TypeDefinitionIndex)->GetStaticField(0x62150);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ResetSimulationState_b__5_0(::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFX_SkinnedMesh_SkinnedMeshBinder))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _ResetSimulationState_b__5_1(::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AstraFX::AstraFX_SkinnedMesh_PassSettingByMesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASTRAFX_ASTRAFX_SKINNEDMESH___C__RESETSIMULATIONSTATE_B__5_1_OFFSET))(this, a1);
		}
	};
}
