#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_DE4C6B309308A230;
namespace RPG::Client { class RuntimeRegionVolume; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2; }
namespace System { class String; }

#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_1_OFFSET UNITYSDK_OFFSET(0x9EB24D0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_2_OFFSET UNITYSDK_OFFSET(0x9EB2800)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_OFFSET UNITYSDK_OFFSET(0x9EB2450)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_16C90E0F008EA620_OFFSET UNITYSDK_OFFSET(0x9EB1010)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x9EB17D0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_7951E2DB4B5A91D5_OFFSET UNITYSDK_OFFSET(0x9EB1730)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_C97E2C3DD6E5FF49_OFFSET UNITYSDK_OFFSET(0x9EB35F0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_DF0DE2420FA94983_OFFSET UNITYSDK_OFFSET(0x9EB1580)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x9EB31D0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_SETREGIONVOLUME_OFFSET UNITYSDK_OFFSET(0x9EB22F0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_1_OFFSET UNITYSDK_OFFSET(0x9EB07B0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_OFFSET UNITYSDK_OFFSET(0x9EAF9F0)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE_WRITEREGIONTOSTAGEVOLUMECONFIGV2_OFFSET UNITYSDK_OFFSET(0x9EB1D20)
#define RPG_CLIENT_OPENWORLD_VOLUMEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB1720)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int VolumeBase_TypeDefinitionIndex = 60649;

	class VolumeBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::StageVolumeConfigV2* Field_5_0; // 0x18
		::System::String* Field_5_1; // 0x20
		::UnityEngine::Matrix4x4 Field_5_2; // 0x28
		::UnityEngine::Matrix4x4 Field_5_3; // 0x68
		::RPG::Client::RuntimeRegionVolume* Field_5_4; // 0xA8
		::System::Int32 Priority; // 0xB0
		::UnityEngine::Vector3 Size; // 0xB4
		::UnityEngine::Bounds LocalBounds; // 0xC0
		::UnityEngine::Bounds WorldBounds; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE__CTOR_OFFSET))(this);
		}

		::System::Void UpdateVolume(::RPG::GameCore::StageVolumeConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_OFFSET))(this, a1);
		}

		::System::Void UpdateVolume_1(::RPG::GameCore::StageVolumeConfigV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_UPDATEVOLUME_1_OFFSET))(this, a1);
		}

		::System::Void WriteRegionToStageVolumeConfigV2(::RPG::GameCore::StageVolumeConfigV2* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_WRITEREGIONTOSTAGEVOLUMECONFIGV2_OFFSET))(this, a1);
		}

		::System::Void SetRegionVolume(::RPG::Client::RuntimeRegionVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeRegionVolume*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_SETREGIONVOLUME_OFFSET))(this, a1);
		}

		::System::Void Method_5_40E03D354D1ACC85()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_40E03D354D1ACC85_OFFSET))(this);
		}

		::UnityEngine::Bounds Method_5_16C90E0F008EA620()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_16C90E0F008EA620_OFFSET))(this);
		}

		::System::Boolean CheckBoundContain(::Class_1_DE4C6B309308A230* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_DE4C6B309308A230*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_OFFSET))(this, a1);
		}

		::System::Boolean CheckBoundContain_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_1_OFFSET))(this, a1);
		}

		::System::Boolean CheckBoundContain_2(::UnityEngine::Bounds a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_CHECKBOUNDCONTAIN_2_OFFSET))(this, a1);
		}

		::RPG::Client::RuntimeRegionVolume* Method_5_DF0DE2420FA94983()
		{
			return ((::RPG::Client::RuntimeRegionVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_DF0DE2420FA94983_OFFSET))(this);
		}

		::System::Void Method_5_7951E2DB4B5A91D5(::RPG::Client::RuntimeRegionVolume* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeRegionVolume*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_7951E2DB4B5A91D5_OFFSET))(this, a1);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void Method_5_C97E2C3DD6E5FF49(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUMEBASE_METHOD_5_C97E2C3DD6E5FF49_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
