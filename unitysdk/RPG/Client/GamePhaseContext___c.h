#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_GAMEPHASECONTEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192D80E0)
#define RPG_CLIENT_GAMEPHASECONTEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192D8120)
#define RPG_CLIENT_GAMEPHASECONTEXT___C___ONPSNLOGOUTHANDLER_B__10_0_OFFSET UNITYSDK_OFFSET(0x192D8130)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseContext___c_TypeDefinitionIndex = 58373;

	class GamePhaseContext___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GamePhaseContext___c** StaticGet___9()
		{
			return (::RPG::Client::GamePhaseContext___c**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseContext___c_TypeDefinitionIndex)->GetStaticField(0x1D030);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GamePhaseContext___c_TypeDefinitionIndex)->GetStaticField(0x1D038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnPSNLogOutHandler_b__10_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASECONTEXT___C___ONPSNLOGOUTHANDLER_B__10_0_OFFSET))(this, a1);
		}
	};
}
