#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeBase.h"

class Class_1_423695772F3F2AA9;
class Class_1_56FF45D7B2C55655;
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

#define RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_1_OFFSET UNITYSDK_OFFSET(0x9EB0720)
#define RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0x9EAF960)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGIONVOLUMEINDEX_OFFSET UNITYSDK_OFFSET(0x9EB15F0)
#define RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGION_OFFSET UNITYSDK_OFFSET(0x9EB15D0)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_0C452A919F54661B_OFFSET UNITYSDK_OFFSET(0x9EB03D0)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_553318531FFFA4F6_OFFSET UNITYSDK_OFFSET(0x9EAFEE0)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_5E024B5F1C148C13_OFFSET UNITYSDK_OFFSET(0x9EB02E0)
#define RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x9EB0D20)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9EB0C40)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9EB0BC0)
#define RPG_CLIENT_OPENWORLD_VOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9EB0B30)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGIONVOLUMEINDEX_OFFSET UNITYSDK_OFFSET(0x9EB1600)
#define RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGION_OFFSET UNITYSDK_OFFSET(0x9EB15E0)
#define RPG_CLIENT_OPENWORLD_VOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x9EB1610)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 60651;

	class Volume : public ::RPG::Client::OpenWorld::VolumeBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::StageVolumeComponentData*>* StageVolumeComponents; // 0xF0
		::System::Collections::Generic::List_1<::RPG::GameCore::StreamingBlockVolumeComponentEditorData*>* BlockVolumeList; // 0xF8
		::System::Collections::Generic::List_1<::Class_1_423695772F3F2AA9*>* VolumeComponents; // 0x100
		::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::System::Single>* VolumeToSceneObjectsLodScaleEditor; // 0x108
		::System::Boolean Field_6_4; // 0x110
		::System::UInt32 _AttachRegion_k__BackingField; // 0x114
		::System::UInt32 _AttachRegionVolumeIndex_k__BackingField; // 0x118
		::RPG::GameCore::FilterVolumeData* FilterVolumeData; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME__CTOR_OFFSET))(this);
		}

		::System::Void FromStageConfig(::RPG::GameCore::StageVolumeConfig* a1, ::Class_1_56FF45D7B2C55655* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfig*, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void FromStageConfig_1(::RPG::GameCore::StageVolumeConfigV2WithTAData* a1, ::Class_1_56FF45D7B2C55655* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeConfigV2WithTAData*, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_FROMSTAGECONFIG_1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_5E024B5F1C148C13(::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_5E024B5F1C148C13_OFFSET))(this, a1);
		}

		::System::Void Method_6_553318531FFFA4F6(::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_553318531FFFA4F6_OFFSET))(this, a1);
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

		::System::Void Method_6_0C452A919F54661B(::Class_1_56FF45D7B2C55655* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_56FF45D7B2C55655*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_METHOD_6_0C452A919F54661B_OFFSET))(this, a1);
		}

		::System::UInt32 get_AttachRegion()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGION_OFFSET))(this);
		}

		::System::Void set_AttachRegion(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGION_OFFSET))(this, value);
		}

		::System::UInt32 get_AttachRegionVolumeIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_GET_ATTACHREGIONVOLUMEINDEX_OFFSET))(this);
		}

		::System::Void set_AttachRegionVolumeIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_VOLUME_SET_ATTACHREGIONVOLUMEINDEX_OFFSET))(this, value);
		}
	};
}
