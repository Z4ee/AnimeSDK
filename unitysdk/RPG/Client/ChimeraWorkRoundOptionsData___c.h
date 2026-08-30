#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraWorkRoundOptionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCC1EA20)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCC1EA60)
#define RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA___C__GET_BANNEDARRANGEMENTS_B__9_0_OFFSET UNITYSDK_OFFSET(0xCC1EA70)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundOptionsData___c_TypeDefinitionIndex = 63578;

	class ChimeraWorkRoundOptionsData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChimeraWorkRoundOptionData*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::ChimeraWorkRoundOptionData*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkRoundOptionsData___c_TypeDefinitionIndex)->GetStaticField(0x53540);
		}
		static ::RPG::Client::ChimeraWorkRoundOptionsData___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraWorkRoundOptionsData___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraWorkRoundOptionsData___c_TypeDefinitionIndex)->GetStaticField(0x53548);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA___C__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* _get_BannedArrangements_b__9_0(::RPG::Client::ChimeraWorkRoundOptionData* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::ChimeraWorkRoundOptionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDOPTIONSDATA___C__GET_BANNEDARRANGEMENTS_B__9_0_OFFSET))(this, a1);
		}
	};
}
