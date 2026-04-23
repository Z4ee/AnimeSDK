#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA451A20)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA451A60)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_0_OFFSET UNITYSDK_OFFSET(0xA451A70)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c_TypeDefinitionIndex = 59251;

	class GridFightBattleGameContext___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleGameContext___c_TypeDefinitionIndex)->GetStaticField(0x185D0);
		}
		static ::RPG::Client::GridFightBattleGameContext___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightBattleGameContext___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightBattleGameContext___c_TypeDefinitionIndex)->GetStaticField(0x185D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__51_0(::RPG::Client::GridFightRole* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__GETROLESBYTRAIT_B__51_0_OFFSET))(this, x);
		}
	};
}
