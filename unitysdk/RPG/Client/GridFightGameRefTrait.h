#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::GameCore { class GridFightTraitOldLayerConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D94F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xA4D94B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA4D9470)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D9510)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xA4D94D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0xA4D94A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ID_OFFSET UNITYSDK_OFFSET(0xA4CFC00)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xA4C9760)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISCHANGED_OFFSET UNITYSDK_OFFSET(0xA4D9530)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xA4D1600)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_LAYER_OFFSET UNITYSDK_OFFSET(0xA4D9490)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D9500)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xA4D94C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA4D9480)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xA4D9520)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYER_OFFSET UNITYSDK_OFFSET(0xA4D94E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDLAYER_OFFSET UNITYSDK_OFFSET(0xA4CCA20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_LAYER_OFFSET UNITYSDK_OFFSET(0xA4CC930)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CC850)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__INITEXPIREDLAYERCONFIGS_OFFSET UNITYSDK_OFFSET(0xA4D9540)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_EXPIREDLAYER_B__9_0_OFFSET UNITYSDK_OFFSET(0xA4D9700)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_LAYER_B__6_0_OFFSET UNITYSDK_OFFSET(0xA4D96D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTrait_TypeDefinitionIndex = 59663;

	class GridFightGameRefTrait : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GridFightTraitOldLayerConfigRow*>* _ExpiredLayerConfigs; // 0x10
		::RPG::Client::GridFightTraitLayerConfig* _ActivatedLayerConfig_k__BackingField; // 0x18
		::RPG::GameCore::GridFightTraitOldLayerConfigRow* _ExpiredActivatedLayerConfig_k__BackingField; // 0x20
		::RPG::Client::GridFightTraitConfigBase* _Config_k__BackingField; // 0x28
		::System::UInt32 _ExpiredLayer; // 0x30
		::System::UInt32 _ActivatedLayer_k__BackingField; // 0x34
		::System::UInt32 _ExpiredActivatedLayer_k__BackingField; // 0x38
		::System::UInt32 _Layer; // 0x3C

		::System::Void _ctor(::System::UInt32 traitID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__CTOR_OFFSET))(this, traitID);
		}

		::RPG::Client::GridFightTraitConfigBase* get_Config()
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightTraitConfigBase* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_CONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_Layer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_LAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_ExpiredLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDLAYER_OFFSET))(this);
		}

		::System::Void set_ExpiredLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ActivatedLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYER_OFFSET))(this, value);
		}

		::System::UInt32 get_ExpiredActivatedLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYER_OFFSET))(this);
		}

		::System::Void set_ExpiredActivatedLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYER_OFFSET))(this, value);
		}

		::RPG::Client::GridFightTraitLayerConfig* get_ActivatedLayerConfig()
		{
			return ((::RPG::Client::GridFightTraitLayerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ActivatedLayerConfig(::RPG::Client::GridFightTraitLayerConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_ACTIVATEDLAYERCONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightTraitOldLayerConfigRow* get_ExpiredActivatedLayerConfig()
		{
			return ((::RPG::GameCore::GridFightTraitOldLayerConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET))(this);
		}

		::System::Void set_ExpiredActivatedLayerConfig(::RPG::GameCore::GridFightTraitOldLayerConfigRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_SET_EXPIREDACTIVATEDLAYERCONFIG_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::Boolean get_IsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT_GET_ISCHANGED_OFFSET))(this);
		}

		::System::Void _InitExpiredLayerConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__INITEXPIREDLAYERCONFIGS_OFFSET))(this);
		}

		::System::Boolean _set_Layer_b__6_0(::RPG::Client::GridFightTraitLayerConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_LAYER_B__6_0_OFFSET))(this, config);
		}

		::System::Boolean _set_ExpiredLayer_b__9_0(::RPG::GameCore::GridFightTraitOldLayerConfigRow* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTRAIT__SET_EXPIREDLAYER_B__9_0_OFFSET))(this, config);
		}
	};
}
