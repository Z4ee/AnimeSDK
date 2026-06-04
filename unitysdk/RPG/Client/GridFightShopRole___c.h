#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBFF960)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBFF9A0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_ISTRAITTRACKED_B__20_0_OFFSET UNITYSDK_OFFSET(0xBBFF9B0)
#define RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_TRAITS_B__42_0_OFFSET UNITYSDK_OFFSET(0xBBFFA60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopRole___c_TypeDefinitionIndex = 60999;

	class GridFightShopRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__20_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopRole___c_TypeDefinitionIndex)->GetStaticField(0x37320);
		}
		static ::RPG::Client::GridFightShopRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightShopRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopRole___c_TypeDefinitionIndex)->GetStaticField(0x37328);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopRole___c_TypeDefinitionIndex)->GetStaticField(0x37330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsTraitTracked_b__20_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_ISTRAITTRACKED_B__20_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _get_Traits_b__42_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPROLE___C__GET_TRAITS_B__42_0_OFFSET))(this, a1);
		}
	};
}
