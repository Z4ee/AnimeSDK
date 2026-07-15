#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD77D10)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD77D50)
#define RPG_CLIENT_GRIDFIGHTSHOPPROJECTION___C__GET_TRAITS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1AD77D60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightShopProjection___c_TypeDefinitionIndex = 62317;

	class GridFightShopProjection___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopProjection___c_TypeDefinitionIndex)->GetStaticField(0x2C650);
		}
		static ::RPG::Client::GridFightShopProjection___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightShopProjection___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightShopProjection___c_TypeDefinitionIndex)->GetStaticField(0x2C658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfig* _get_Traits_b__16_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSHOPPROJECTION___C__GET_TRAITS_B__16_0_OFFSET))(this, a1);
		}
	};
}
