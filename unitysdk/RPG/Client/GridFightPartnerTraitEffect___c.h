#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightPartnerOption; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC60660)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC606A0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GETCOPYEQUIPDATA_B__34_0_OFFSET UNITYSDK_OFFSET(0x1CA4A120)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GET_BONUSTRAITCONFIGS_B__23_0_OFFSET UNITYSDK_OFFSET(0x1BC606B0)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GET_BONUSTRAITS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1BC60710)
#define RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GET_ROLEOPTIONS_B__46_0_OFFSET UNITYSDK_OFFSET(0x1CA4A170)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerTraitEffect___c_TypeDefinitionIndex = 65466;

	class GridFightPartnerTraitEffect___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightPartnerTraitEffect___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightPartnerTraitEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x39BB0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x39BB8);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::GridFightPartnerOption*>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::RPG::Client::GridFightPartnerOption*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x39BC0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x39BC8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerTraitEffect___c_TypeDefinitionIndex)->GetStaticField(0x39BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_BonusTraitConfigs_b__23_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GET_BONUSTRAITCONFIGS_B__23_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_BonusTraits_b__25_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GET_BONUSTRAITS_B__25_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetCopyEquipData_b__34_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GETCOPYEQUIPDATA_B__34_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPartnerOption* _get_RoleOptions_b__46_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::RPG::Client::GridFightPartnerOption*(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNERTRAITEFFECT___C__GET_ROLEOPTIONS_B__46_0_OFFSET))(this, a1);
		}
	};
}
