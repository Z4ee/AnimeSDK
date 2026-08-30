#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDF84C10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDF84C40)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA___C__GETDEBUGINFO_B__3_0_OFFSET UNITYSDK_OFFSET(0xDF84C50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelRoomData___c_TypeDefinitionIndex = 67716;

	class RogueTournPersonaGameLevelRoomData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomAttribute*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomAttribute*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelRoomData___c_TypeDefinitionIndex)->GetStaticField(0x15AA0);
		}
		static ::RPG::Client::RogueTournPersonaGameLevelRoomData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameLevelRoomData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelRoomData___c_TypeDefinitionIndex)->GetStaticField(0x15AA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetDebugInfo_b__3_0(::RPG::Client::IRogueTournPersonaRoomAttribute* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomAttribute*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELROOMDATA___C__GETDEBUGINFO_B__3_0_OFFSET))(this, a1);
		}
	};
}
