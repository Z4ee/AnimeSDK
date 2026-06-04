#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class GridFightTraitLayerConfigRow; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_ALLMEMBERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBC2E760)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_BEPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBC2E780)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_BUFFPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBC2EA10)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0xBC2E580)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xBC20FF0)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_MAZEBUFFDESC_OFFSET UNITYSDK_OFFSET(0xBC2E7A0)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_MAZEBUFFSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xBC2E8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xBC1D140)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG_GET_TRAITMEMBERPROPERTYLIST_OFFSET UNITYSDK_OFFSET(0xBC2E740)
#define RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBC26FE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitLayerConfig_TypeDefinitionIndex = 61187;

	class GridFightTraitLayerConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitLayerConfigRow* _Row; // 0x10
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x18

		::System::Void _ctor(::RPG::GameCore::GridFightTraitLayerConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITLAYERCONFIG__CTOR_OFFSET))(this, a1);
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
