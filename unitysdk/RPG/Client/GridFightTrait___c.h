#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class IGridFightTraitEditEffect; }
namespace RPG::Client { class IGridFightTraitEffect; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD351120)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD351160)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_0_OFFSET UNITYSDK_OFFSET(0xD351240)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_1_OFFSET UNITYSDK_OFFSET(0xD3512A0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETMEMBERSONBOARD_B__12_0_OFFSET UNITYSDK_OFFSET(0xD351170)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GETSHOWNEFFECTLIST_B__13_0_OFFSET UNITYSDK_OFFSET(0xD3511E0)
#define RPG_CLIENT_GRIDFIGHTTRAIT___C__GET_TRAITPROJECTION_B__32_0_OFFSET UNITYSDK_OFFSET(0xD351300)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrait___c_TypeDefinitionIndex = 65487;

	class GridFightTrait___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitShowEffect*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitShowEffect*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x52EE0);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitEditEffect*>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::RPG::Client::IGridFightTraitEditEffect*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x52EE8);
		}
		static ::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitEffect*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x52EF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x52EF8);
		}
		static ::RPG::Client::GridFightTrait___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x52F00);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTrait___c_TypeDefinitionIndex)->GetStaticField(0x52F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetMembersOnBoard_b__12_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETMEMBERSONBOARD_B__12_0_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitShowEffect* _GetShownEffectList_b__13_0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::RPG::Client::IGridFightTraitShowEffect*(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETSHOWNEFFECTLIST_B__13_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetEditEffectList_b__14_0(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_0_OFFSET))(this, a1);
		}

		::RPG::Client::IGridFightTraitEditEffect* _GetEditEffectList_b__14_1(::RPG::Client::IGridFightTraitEffect* a1)
		{
			return ((::RPG::Client::IGridFightTraitEditEffect*(*)(::PVOID, ::RPG::Client::IGridFightTraitEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GETEDITEFFECTLIST_B__14_1_OFFSET))(this, a1);
		}

		::System::Boolean _get_TraitProjection_b__32_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAIT___C__GET_TRAITPROJECTION_B__32_0_OFFSET))(this, a1);
		}
	};
}
