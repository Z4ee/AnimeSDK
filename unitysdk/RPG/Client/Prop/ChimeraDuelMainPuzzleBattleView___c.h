#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelChimeraModelView; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E275B0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E275F0)
#define RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__LOADCHIMERAWITHANCHOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x16E27600)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelMainPuzzleBattleView___c_TypeDefinitionIndex = 74415;

	class ChimeraDuelMainPuzzleBattleView___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::RPG::Client::Prop::ChimeraDuelChimeraModelView*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleBattleView___c_TypeDefinitionIndex)->GetStaticField(0x6B160);
		}
		static ::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraDuelMainPuzzleBattleView___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMainPuzzleBattleView___c_TypeDefinitionIndex)->GetStaticField(0x6B168);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void _LoadChimeraWithAnchor_b__15_0(::RPG::Client::Prop::ChimeraDuelChimeraModelView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelChimeraModelView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELMAINPUZZLEBATTLEVIEW___C__LOADCHIMERAWITHANCHOR_B__15_0_OFFSET))(this, a1);
		}
	};
}
