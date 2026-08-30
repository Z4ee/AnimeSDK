#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA3D160)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3D1A0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETALLTRAITCANEFFECTSLOT_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BA3D200)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETTRAITS_B__15_0_OFFSET UNITYSDK_OFFSET(0x1BA3D1B0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__ISSHOWSPECIALFRONTBACKTYPETRAIT_B__23_0_OFFSET UNITYSDK_OFFSET(0x1BA3D280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c_TypeDefinitionIndex = 65470;

	class GridFightGameTrait___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x33230);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x33238);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x33240);
		}
		static ::RPG::Client::GridFightGameTrait___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x33248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraits_b__15_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETTRAITS_B__15_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllTraitCanEffectSlot_b__16_0(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETALLTRAITCANEFFECTSLOT_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _IsShowSpecialFrontBackTypeTrait_b__23_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__ISSHOWSPECIALFRONTBACKTYPETRAIT_B__23_0_OFFSET))(this, a1);
		}
	};
}
