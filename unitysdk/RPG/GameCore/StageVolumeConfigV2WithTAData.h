#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageVolumeConfigV2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FilterVolumeData; }
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }

#define RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_METHOD_3_3B81F4ADDE81A666_OFFSET UNITYSDK_OFFSET(0x1D5619C0)
#define RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_METHOD_3_B515B547F4B6196B_OFFSET UNITYSDK_OFFSET(0x1D561650)
#define RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D561640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeConfigV2WithTAData_TypeDefinitionIndex = 18925;

	class StageVolumeConfigV2WithTAData : public ::RPG::GameCore::StageVolumeConfigV2
	{
	public:
		::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* BlockVolumeList; // 0x50
		::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* SceneObjLodScaleData; // 0x58
		::RPG::GameCore::FilterVolumeData* FilterVolumeData; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B81F4ADDE81A666(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVolumeConfigV2WithTAData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVolumeConfigV2WithTAData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_METHOD_3_3B81F4ADDE81A666_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B515B547F4B6196B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVolumeConfigV2WithTAData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVolumeConfigV2WithTAData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIGV2WITHTADATA_METHOD_3_B515B547F4B6196B_OFFSET))(a1, a2);
		}
	};
}
