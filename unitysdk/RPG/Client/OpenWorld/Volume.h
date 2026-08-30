#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeBase.h"

class Class_1_A335CFE48265E251;
class Class_1_D70A30D666F20D90;
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class FilterVolumeData; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StageVolumeConfig; }
namespace RPG::GameCore { class StageVolumeConfigV2WithTAData; }
namespace RPG::GameCore { class StreamingBlockVolumeComponentEditorData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_1_OFFSET UNITYSDK_OFFSET(0xDA045C0)
#define RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0xDA035C0)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGIONVOLUMEINDEX_OFFSET UNITYSDK_OFFSET(0xDA05460)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGION_OFFSET UNITYSDK_OFFSET(0xDA05440)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_OWNERSTAGE_OFFSET UNITYSDK_OFFSET(0xDA05420)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_3F16A63999F7FECF_OFFSET UNITYSDK_OFFSET(0xDA03B40)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0xDA04BF0)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_919BC32C7F31A55F_OFFSET UNITYSDK_OFFSET(0xDA041F0)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_AC178E7C3533AC6E_OFFSET UNITYSDK_OFFSET(0xDA04050)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDA04AE0)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDA04A60)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDA049D0)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGIONVOLUMEINDEX_OFFSET UNITYSDK_OFFSET(0xDA05470)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGION_OFFSET UNITYSDK_OFFSET(0xDA05450)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_OWNERSTAGE_OFFSET UNITYSDK_OFFSET(0xDA05430)
#define RPG_CLIENT_OPENWORLD_VOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xDA05480)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 73884;

	class Volume : public ::RPG::Client::OpenWorld::VolumeBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::StageVolumeComponentData*>* StageVolumeComponents; // 0xF0
		::System::Collections::Generic::List_1<::RPG::GameCore::StreamingBlockVolumeComponentEditorData*>* BlockVolumeList; // 0xF8
		::System::Collections::Generic::List_1<::Class_1_A335CFE48265E251*>* VolumeComponents; // 0x100
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Single>* VolumeToSceneObjectsLodScaleEditor; // 0x108
		::System::Boolean EMHAACACFOM; // 0x110
		::RPG::Client::Stage* _OwnerStage_k__BackingField; // 0x118
		::System::UInt32 _AttachRegion_k__BackingField; // 0x120
		::System::UInt32 _AttachRegionVolumeIndex_k__BackingField; // 0x124
		::RPG::GameCore::FilterVolumeData* FilterVolumeData; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME__CTOR_OFFSET))(this);
		}

		::System::Void FromStageConfig(::RPG::GameCore::StageVolumeConfig* a1, ::Class_1_D70A30D666F20D90* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfig*, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void FromStageConfig_1(::RPG::GameCore::StageVolumeConfigV2WithTAData* a1, ::Class_1_D70A30D666F20D90* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2WithTAData*, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_AC178E7C3533AC6E(::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_AC178E7C3533AC6E_OFFSET))(this, a1);
		}

		::System::Void Method_6_3F16A63999F7FECF(::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_3F16A63999F7FECF_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_6_8C3DB70FFBBF01C7(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_8C3DB70FFBBF01C7_OFFSET))(this, a1);
		}

		::System::Void Method_6_919BC32C7F31A55F(::Class_1_D70A30D666F20D90* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D70A30D666F20D90*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_919BC32C7F31A55F_OFFSET))(this, a1);
		}

		::RPG::Client::Stage* get_OwnerStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_OWNERSTAGE_OFFSET))(this);
		}

		::System::Void set_OwnerStage(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_OWNERSTAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttachRegion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGION_OFFSET))(this);
		}

		::System::Void set_AttachRegion(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGION_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttachRegionVolumeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGIONVOLUMEINDEX_OFFSET))(this);
		}

		::System::Void set_AttachRegionVolumeIndex(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGIONVOLUMEINDEX_OFFSET))(this, a1);
		}
	};
}
