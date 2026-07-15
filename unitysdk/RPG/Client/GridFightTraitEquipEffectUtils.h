#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::GameCore { class GridFightTraitEffectLayerParamConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS_GETEQUIPSITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x1A60B340)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60BA40)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTID_OFFSET UNITYSDK_OFFSET(0x1A60B8F0)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTLAYERCONFIG_OFFSET UNITYSDK_OFFSET(0x1A60B580)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDMAXLAYER_OFFSET UNITYSDK_OFFSET(0x1A60B600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEquipEffectUtils_TypeDefinitionIndex = 62475;

	class GridFightTraitEquipEffectUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetEquipsItemConfigs(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS_GETEQUIPSITEMCONFIGS_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow* _FindEffectLayerConfig(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::RPG::GameCore::GridFightTraitEffectLayerParamConfigRow*(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTLAYERCONFIG_OFFSET))(a1);
		}

		static ::System::UInt32 _FindEffectID(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDEFFECTID_OFFSET))(a1);
		}

		static ::System::UInt32 _FindMaxLayer(::RPG::Client::GridFightTraitConfigBase* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::GridFightTraitConfigBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECTUTILS__FINDMAXLAYER_OFFSET))(a1);
		}
	};
}
