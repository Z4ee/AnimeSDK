#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightPlayer; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6A9EF6A57FAD498C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184FECF0)
#define CLASS_1_6A9EF6A57FAD498C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184FED30)
#define CLASS_1_6A9EF6A57FAD498C___C__GETPLAYERUIDS_B__15_0_OFFSET UNITYSDK_OFFSET(0x184FED40)

inline static constexpr unsigned int Class_1_6A9EF6A57FAD498C___c_TypeDefinitionIndex = 69325;

class Class_1_6A9EF6A57FAD498C___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::FightPlayer*, ::System::UInt32>** StaticGet___9__15_0()
	{
		return (::System::Func_2<::RPG::Client::FightPlayer*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A9EF6A57FAD498C___c_TypeDefinitionIndex)->GetStaticField(0x5B400);
	}
	static ::Class_1_6A9EF6A57FAD498C___c** StaticGet___9()
	{
		return (::Class_1_6A9EF6A57FAD498C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A9EF6A57FAD498C___c_TypeDefinitionIndex)->GetStaticField(0x5B408);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetPlayerUIDs_b__15_0(::RPG::Client::FightPlayer* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FightPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_6A9EF6A57FAD498C___C__GETPLAYERUIDS_B__15_0_OFFSET))(this, a1);
	}
};
