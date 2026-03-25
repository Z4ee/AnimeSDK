#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98AEB40)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98AEB80)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_ISTRAITTRACKED_B__19_0_OFFSET UNITYSDK_OFFSET(0x98AEB90)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_TRAITS_B__41_0_OFFSET UNITYSDK_OFFSET(0x98AEC60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRole___c_TypeDefinitionIndex = 52976;

	class GridFightShopRole___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightShopRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightShopRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopRole___c_TypeDefinitionIndex)->GetStaticField(0x1A320);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopRole___c_TypeDefinitionIndex)->GetStaticField(0x1A328);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopRole___c_TypeDefinitionIndex)->GetStaticField(0x1A330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsTraitTracked_b__19_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_ISTRAITTRACKED_B__19_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightTraitConfig* _get_Traits_b__41_0(::System::UInt32 traitsID)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_TRAITS_B__41_0_OFFSET))(this, traitsID);
		}
	};
}
