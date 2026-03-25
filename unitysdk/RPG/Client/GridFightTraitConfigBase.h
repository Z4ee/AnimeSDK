#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightActivationType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitRemarkPosition.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkLineConfig; }
namespace RPG::GameCore { class GridFightTraitVideoConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_CONTAINSEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x98CEC40)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0x98CE940)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVETEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x98CE830)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x98CE5E0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERS_OFFSET UNITYSDK_OFFSET(0x98CE6C0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITBACKREMARKLINECONFIGS_OFFSET UNITYSDK_OFFSET(0x98CE9D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITFRONTREMARKLINECONFIGS_OFFSET UNITYSDK_OFFSET(0x98CEBF0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_LAYERCONFIGS_OFFSET UNITYSDK_OFFSET(0x98CE3D0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEODESC_OFFSET UNITYSDK_OFFSET(0x98CEF30)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x98CEE10)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET__VIDEOROW_OFFSET UNITYSDK_OFFSET(0x98CEEC0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x98CDFD0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__GETTRAITREMARKLINECONFIGS_OFFSET UNITYSDK_OFFSET(0x98CEA20)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__INITSHAREDLAYERS_OFFSET UNITYSDK_OFFSET(0x98CE3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfigBase_TypeDefinitionIndex = 53124;

	class GridFightTraitConfigBase : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitLayerConfig*>* _layerConfigs; // 0x10

		::System::Void _ctor(::System::UInt32 idToInitializeLayers)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__CTOR_OFFSET))(this, idToInitializeLayers);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightTraitLayerConfig*>* get_LayerConfigs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::GridFightTraitLayerConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_LAYERCONFIGS_OFFSET))(this);
		}

		::System::Void _InitSharedLayers(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__INITSHAREDLAYERS_OFFSET))(this, id);
		}

		::RPG::Client::GridFightTraitLayerConfig* GetLayerConfig(::System::UInt32 layer)
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERCONFIG_OFFSET))(this, layer);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetLayers()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETLAYERS_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitLayerConfig* GetActivetedLayerConfig(::System::UInt32 layer)
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVETEDLAYERCONFIG_OFFSET))(this, layer);
		}

		::System::UInt32 GetActivatedLayer(::System::UInt32 layer)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETACTIVATEDLAYER_OFFSET))(this, layer);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>* GetTraitBackRemarkLineConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITBACKREMARKLINECONFIGS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>* GetTraitFrontRemarkLineConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GETTRAITFRONTREMARKLINECONFIGS_OFFSET))(this);
		}

		::System::Boolean ContainsEffectType(::RPG::GameCore::GridFightTraitEffectType effectType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_CONTAINSEFFECTTYPE_OFFSET))(this, effectType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>* _GetTraitRemarkLineConfigs(::RPG::GameCore::GridFightTraitRemarkPosition position)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitRemarkLineConfig*>*(*)(::PVOID, ::RPG::GameCore::GridFightTraitRemarkPosition))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE__GETTRAITREMARKLINECONFIGS_OFFSET))(this, position);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEOID_OFFSET))(this);
		}

		::RPG::Client::TextID get_VideoDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET_VIDEODESC_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitVideoConfigRow* get__VideoRow()
		{
			return ((::RPG::GameCore::GridFightTraitVideoConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE_GET__VIDEOROW_OFFSET))(this);
		}
	};
}
