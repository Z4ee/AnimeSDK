#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_CC9CE4D523046362___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15989AF0)
#define CLASS_1_CC9CE4D523046362___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15989B30)
#define CLASS_1_CC9CE4D523046362___C__GETTEAMMEMBERCOUNTMAP_B__35_0_OFFSET UNITYSDK_OFFSET(0x15989B40)
#define CLASS_1_CC9CE4D523046362___C__GETTEAMMEMBERCOUNTMAP_B__35_1_OFFSET UNITYSDK_OFFSET(0x15989B60)

inline static constexpr unsigned int Class_1_CC9CE4D523046362___c_TypeDefinitionIndex = 63942;

class Class_1_CC9CE4D523046362___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::ExpeditionBattleTeam*, ::System::UInt32>** StaticGet___9__35_0()
	{
		return (::System::Func_2<::RPG::Client::ExpeditionBattleTeam*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC9CE4D523046362___c_TypeDefinitionIndex)->GetStaticField(0x28B10);
	}
	static ::Class_1_CC9CE4D523046362___c** StaticGet___9()
	{
		return (::Class_1_CC9CE4D523046362___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC9CE4D523046362___c_TypeDefinitionIndex)->GetStaticField(0x28B18);
	}
	static ::System::Func_2<::RPG::Client::ExpeditionBattleTeam*, ::System::UInt32>** StaticGet___9__35_1()
	{
		return (::System::Func_2<::RPG::Client::ExpeditionBattleTeam*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC9CE4D523046362___c_TypeDefinitionIndex)->GetStaticField(0x28B20);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 _GetTeamMemberCountMap_b__35_0(::RPG::Client::ExpeditionBattleTeam* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362___C__GETTEAMMEMBERCOUNTMAP_B__35_0_OFFSET))(this, a1);
	}

	::System::UInt32 _GetTeamMemberCountMap_b__35_1(::RPG::Client::ExpeditionBattleTeam* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + CLASS_1_CC9CE4D523046362___C__GETTEAMMEMBERCOUNTMAP_B__35_1_OFFSET))(this, a1);
	}
};
