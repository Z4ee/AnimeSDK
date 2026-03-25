#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitSPBattleAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_CHECKSLOTISEFFECTED_OFFSET UNITYSDK_OFFSET(0x98D7850)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GETSPECIALSLOTLIST_OFFSET UNITYSDK_OFFSET(0x98D77A0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET_EFFECTSLOTLIST_OFFSET UNITYSDK_OFFSET(0x98D78C0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET__AREACONFIG_OFFSET UNITYSDK_OFFSET(0x98D78D0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x98D7690)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_SET__AREACONFIG_OFFSET UNITYSDK_OFFSET(0x98D78E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98D75E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x98D78F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSPSlotEffect_TypeDefinitionIndex = 53092;

	class GridFightTraitSPSlotEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::GameCore::GridFightTraitSPBattleAreaRow* __AreaConfig_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::Void OnTraitChange(::System::UInt32 layer, ::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_ONTRAITCHANGE_OFFSET))(this, layer, isActive);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSpecialSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GETSPECIALSLOTLIST_OFFSET))(this);
		}

		::System::Boolean CheckSlotIsEffected(::System::UInt32 slotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_CHECKSLOTISEFFECTED_OFFSET))(this, slotID);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EffectSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET_EFFECTSLOTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitSPBattleAreaRow* get__AreaConfig()
		{
			return ((::RPG::GameCore::GridFightTraitSPBattleAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET__AREACONFIG_OFFSET))(this);
		}

		::System::Void set__AreaConfig(::RPG::GameCore::GridFightTraitSPBattleAreaRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_SET__AREACONFIG_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 P0, ::System::Boolean P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, P0, P1);
		}
	};
}
