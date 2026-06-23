#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigUICoopTeam3D_CameraConfigEnum.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigUICoopTeam3D_AvatarConfig; }
namespace MoleMole { class ConfigUICoopTeam3D_CameraConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOOPTEAM3D_GETPOSITIONBYAVARTARIDANDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x161AFF60)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_GETSCENECAMERACONFIGBYAVARTARID_OFFSET UNITYSDK_OFFSET(0x161B0110)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_GETYROTATIONBYAVARTARIDANDSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x161AFE00)
#define MOLEMOLE_CONFIGUICOOPTEAM3D__CTOR_OFFSET UNITYSDK_OFFSET(0x161B0260)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICoopTeam3D_TypeDefinitionIndex = 60087;

	class ConfigUICoopTeam3D : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::ConfigUICoopTeam3D_CameraConfigEnum, ::MoleMole::ConfigUICoopTeam3D_CameraConfig*>* CameraConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::ConfigUICoopTeam3D_AvatarConfig*>* AvatarConfigs; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D__CTOR_OFFSET))(this);
		}

		::System::Single GetYRotationByAvartarIDAndSlotIndex(::System::Int32 avartarID, ::System::Int32 slotIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_GETYROTATIONBYAVARTARIDANDSLOTINDEX_OFFSET))(this, avartarID, slotIndex);
		}

		::UnityEngine::Vector3 GetPositionByAvartarIDAndSlotIndex(::System::Int32 avartarID, ::System::Int32 slotIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_GETPOSITIONBYAVARTARIDANDSLOTINDEX_OFFSET))(this, avartarID, slotIndex);
		}

		::MoleMole::ConfigUICoopTeam3D_CameraConfig* GetSceneCameraConfigByAvartarID(::System::Int32 avartarID)
		{
			return ((::MoleMole::ConfigUICoopTeam3D_CameraConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_GETSCENECAMERACONFIGBYAVARTARID_OFFSET))(this, avartarID);
		}
	};
}
