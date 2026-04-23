#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_791;
class Class_1_2250AFBBC876BF24_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB021460)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB021490)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_0_OFFSET UNITYSDK_OFFSET(0xB0214A0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_1_OFFSET UNITYSDK_OFFSET(0xB0214B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c_TypeDefinitionIndex = 62064;

	class RogueAdventureModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_2250AFBBC876BF24_1*, ::System::Boolean>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::Class_1_2250AFBBC876BF24_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x17440);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_791*, ::System::Boolean>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_791*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x17448);
		}
		static ::RPG::Client::RogueAdventureModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueAdventureModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x17450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__48_0(::Class_1_2250AFBBC876BF24_1* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2250AFBBC876BF24_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_0_OFFSET))(this, action);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__48_1(::Class_0_16E4307DCC419505_791* action)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_791*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_1_OFFSET))(this, action);
		}
	};
}
