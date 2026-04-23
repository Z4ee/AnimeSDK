#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightTraitLayerConfigRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_ALLMEMBERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xA5BC510)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_BEPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xA5BC530)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_BUFFPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA5BC7C0)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA5BC340)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xA5BC290)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_MAZEBUFFDESC_OFFSET UNITYSDK_OFFSET(0xA5BC550)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_MAZEBUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xA5BC680)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xA5BC320)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_TRAITMEMBERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xA5BC4F0)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BC2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitLayerConfig_TypeDefinitionIndex = 60252;

	class GridFightTraitLayerConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x10
		::RPG::GameCore::GridFightTraitLayerConfigRow* _Row; // 0x18

		::System::Void _ctor(::RPG::GameCore::GridFightTraitLayerConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_LAYER_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTrailLayerQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_TraitMemberPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_TRAITMEMBERPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_AllMemberPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_ALLMEMBERPROPERTYLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* get_BEPropertyList()
		{
			return ((::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_BEPROPERTYLIST_OFFSET))(this);
		}

		::System::String* get_MazeBuffDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_MAZEBUFFDESC_OFFSET))(this);
		}

		::System::String* get_MazeBuffSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_MAZEBUFFSIMPLEDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_BuffParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_BUFFPARAMLIST_OFFSET))(this);
		}
	};
}
