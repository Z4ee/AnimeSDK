#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_931;
class Class_1_2250AFBBC876BF24_1;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE9CC70)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDE9CCA0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_0_OFFSET UNITYSDK_OFFSET(0xDE9CCB0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_1_OFFSET UNITYSDK_OFFSET(0xDE9CCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c_TypeDefinitionIndex = 67360;

	class RogueAdventureModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueAdventureModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueAdventureModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x62BF0);
		}
		static ::System::Func_2<::Class_0_16E4307DCC419505_931*, ::System::Boolean>** StaticGet___9__48_1()
		{
			return (::System::Func_2<::Class_0_16E4307DCC419505_931*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x62BF8);
		}
		static ::System::Func_2<::Class_1_2250AFBBC876BF24_1*, ::System::Boolean>** StaticGet___9__48_0()
		{
			return (::System::Func_2<::Class_1_2250AFBBC876BF24_1*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueAdventureModule___c_TypeDefinitionIndex)->GetStaticField(0x62C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__48_0(::Class_1_2250AFBBC876BF24_1* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_2250AFBBC876BF24_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean __OnCmdSyncRogueCommonActionResultScNotify_b__48_1(::Class_0_16E4307DCC419505_931* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_931*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C___ONCMDSYNCROGUECOMMONACTIONRESULTSCNOTIFY_B__48_1_OFFSET))(this, a1);
		}
	};
}
