#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class QuestData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBATMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7EDAF0)
#define RPG_CLIENT_DICECOMBATMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7EDB30)
#define RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_0_OFFSET UNITYSDK_OFFSET(0xB7EDB40)
#define RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_1_OFFSET UNITYSDK_OFFSET(0xB7EDB50)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatModule___c_TypeDefinitionIndex = 59483;

	class DiceCombatModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombatModule___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombatModule___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatModule___c_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatModule___c_TypeDefinitionIndex)->GetStaticField(0x6C48);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatModule___c_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetV2ScoreRewards_b__35_0(::RPG::Client::QuestData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetV2ScoreRewards_b__35_1(::RPG::Client::QuestData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATMODULE___C__GETV2SCOREREWARDS_B__35_1_OFFSET))(this, a1);
		}
	};
}
