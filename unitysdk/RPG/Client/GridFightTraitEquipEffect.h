#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_GETEQUIPITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0x98D3020)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x98D2FB0)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98D2F00)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x98D3220)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEquipEffect_TypeDefinitionIndex = 53090;

	class GridFightTraitEquipEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void OnTraitChange(::System::UInt32 layer, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_ONTRAITCHANGE_OFFSET))(this, layer, isActive);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetEquipItemConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_GETEQUIPITEMCONFIGS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, P0, P1);
		}
	};
}
