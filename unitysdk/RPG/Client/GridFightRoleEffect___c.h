#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5750B0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5750F0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__GETSHOWNEFFECTS_B__4_0_OFFSET UNITYSDK_OFFSET(0xA575100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleEffect___c_TypeDefinitionIndex = 59959;

	class GridFightRoleEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IGridFightTraitShowEffect*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::IGridFightTraitShowEffect*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleEffect___c_TypeDefinitionIndex)->GetStaticField(0x18070);
		}
		static ::RPG::Client::GridFightRoleEffect___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightRoleEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightRoleEffect___c_TypeDefinitionIndex)->GetStaticField(0x18078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetShownEffects_b__4_0(::RPG::Client::IGridFightTraitShowEffect* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT___C__GETSHOWNEFFECTS_B__4_0_OFFSET))(this, x);
		}
	};
}
