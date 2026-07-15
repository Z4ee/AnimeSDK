#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitSPBattleAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_CHECKSLOTISEFFECTED_OFFSET UNITYSDK_OFFSET(0x18FA3F70)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GETSPECIALSLOTLIST_OFFSET UNITYSDK_OFFSET(0x18FA3EC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET_EFFECTSLOTLIST_OFFSET UNITYSDK_OFFSET(0x18FA4090)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET__AREACONFIG_OFFSET UNITYSDK_OFFSET(0x18FA40E0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0x18FA3D70)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_SET__AREACONFIG_OFFSET UNITYSDK_OFFSET(0x18FA40F0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18FA3D60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSPSlotEffect_TypeDefinitionIndex = 62476;

	class GridFightTraitSPSlotEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::RPG::GameCore::GridFightTraitSPBattleAreaRow* __AreaConfig_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetSpecialSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GETSPECIALSLOTLIST_OFFSET))(this);
		}

		::System::Boolean CheckSlotIsEffected(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_CHECKSLOTISEFFECTED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EffectSlotList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET_EFFECTSLOTLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitSPBattleAreaRow* get__AreaConfig()
		{
			return ((::RPG::GameCore::GridFightTraitSPBattleAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_GET__AREACONFIG_OFFSET))(this);
		}

		::System::Void set__AreaConfig(::RPG::GameCore::GridFightTraitSPBattleAreaRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitSPBattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPSLOTEFFECT_SET__AREACONFIG_OFFSET))(this, a1);
		}
	};
}
