#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS_GETEQUIPSITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0xA5BBD70)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BC2B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTID_OFFSET UNITYSDK_OFFSET(0xA5BC190)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0xA5BBF60)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDMAXLAYER_OFFSET UNITYSDK_OFFSET(0xA5BBFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEquipEffectUtils_TypeDefinitionIndex = 60211;

	class GridFightTraitEquipEffectUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetEquipsItemConfigs(::RPG::Client::GridFightTraitConfigBase* traitConfig)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS_GETEQUIPSITEMCONFIGS_OFFSET))(traitConfig);
		}

		static ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* _FindEffectLayerConfig(::RPG::Client::GridFightTraitConfigBase* config)
		{
			return ((::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTLAYERCONFIG_OFFSET))(config);
		}

		static ::System::UInt32 _FindEffectID(::RPG::Client::GridFightTraitConfigBase* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTID_OFFSET))(config);
		}

		static ::System::UInt32 _FindMaxLayer(::RPG::Client::GridFightTraitConfigBase* config)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDMAXLAYER_OFFSET))(config);
		}
	};
}
