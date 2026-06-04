#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAEE0B0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBAEE0F0)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_0_OFFSET UNITYSDK_OFFSET(0xBAEE100)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c_TypeDefinitionIndex = 60186;

	class GridFightBattleGameContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleGameContext___c_TypeDefinitionIndex)->GetStaticField(0x29830);
		}
		static ::RPG::Client::GridFightBattleGameContext___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleGameContext___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleGameContext___c_TypeDefinitionIndex)->GetStaticField(0x29838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__51_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_0_OFFSET))(this, a1);
		}
	};
}
