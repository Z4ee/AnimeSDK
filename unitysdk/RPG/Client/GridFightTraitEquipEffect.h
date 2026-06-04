#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightTrait; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_GETEQUIPITEMCONFIGS_OFFSET UNITYSDK_OFFSET(0xBC2DF50)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC2DEE0)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xBC2DE10)
#define RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET UNITYSDK_OFFSET(0xBC2E1F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEquipEffect_TypeDefinitionIndex = 61145;

	class GridFightTraitEquipEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::GridFightTrait* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* GetEquipItemConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT_GETEQUIPITEMCONFIGS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnTraitChange(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEQUIPEFFECT___IFIXBASEPROXY_ONTRAITCHANGE_OFFSET))(this, a1, a2);
		}
	};
}
