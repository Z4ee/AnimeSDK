#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5C42D0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C4310)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_BONUSTYPECONFIGS_B__46_0_OFFSET UNITYSDK_OFFSET(0xA5C4350)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_ENHANCETYPECONFIGS_B__48_0_OFFSET UNITYSDK_OFFSET(0xA5C4380)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C___CALCULATEEQUIP_B__6_0_OFFSET UNITYSDK_OFFSET(0xA5C4320)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceEffect___c_TypeDefinitionIndex = 59273;

	class GridFightTraitSpaceEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1B860);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1B868);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1B870);
		}
		static ::RPG::Client::GridFightTraitSpaceEffect___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitSpaceEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1B878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __CalculateEquip_b__6_0(::RPG::Client::GridFightEquipItemData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C___CALCULATEEQUIP_B__6_0_OFFSET))(this, x);
		}

		::System::Boolean _get_BonusTypeConfigs_b__46_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_BONUSTYPECONFIGS_B__46_0_OFFSET))(this, config);
		}

		::System::Boolean _get_EnhanceTypeConfigs_b__48_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_ENHANCETYPECONFIGS_B__48_0_OFFSET))(this, config);
		}
	};
}
