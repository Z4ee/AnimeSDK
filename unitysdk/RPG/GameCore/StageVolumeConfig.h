#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace RPG::GameCore { class StreamingSceneObjLodScaleVolumeComponentData; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_STAGEVOLUMECONFIG_METHOD_2_5875E3BE0F78DB0F_OFFSET UNITYSDK_OFFSET(0x1B0B6A50)
#define RPG_GAMECORE_STAGEVOLUMECONFIG_METHOD_2_BC482C8128371606_OFFSET UNITYSDK_OFFSET(0x1B0B6D20)
#define RPG_GAMECORE_STAGEVOLUMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B6CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StageVolumeConfig_TypeDefinitionIndex = 18398;

	class StageVolumeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* VolumeName; // 0x10
		::System::Int32 Priority; // 0x18
		::RPG::MVector3 Center; // 0x1C
		::RPG::MVector3 Size; // 0x28
		::RPG::MVector3 Rotation; // 0x34
		::Il2CppArray<::RPG::GameCore::StageVolumeComponentData*>* VolumeComponents; // 0x40
		::RPG::GameCore::StreamingSceneObjLodScaleVolumeComponentData* SceneObjLodScaleData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5875E3BE0F78DB0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StageVolumeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StageVolumeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIG_METHOD_2_5875E3BE0F78DB0F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_BC482C8128371606(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::StageVolumeConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::StageVolumeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEVOLUMECONFIG_METHOD_2_BC482C8128371606_OFFSET))(a1, a2);
		}
	};
}
