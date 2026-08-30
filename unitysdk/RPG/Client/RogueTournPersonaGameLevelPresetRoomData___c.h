#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaRoomAttribute; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C357AE0)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C357B10)
#define RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__GETDEBUGINFO_B__38_0_OFFSET UNITYSDK_OFFSET(0x1C357B20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaGameLevelPresetRoomData___c_TypeDefinitionIndex = 67713;

	class RogueTournPersonaGameLevelPresetRoomData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournPersonaRoomAttribute*, ::System::UInt32>** StaticGet___9__38_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournPersonaRoomAttribute*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelPresetRoomData___c_TypeDefinitionIndex)->GetStaticField(0x16010);
		}
		static ::RPG::Client::RogueTournPersonaGameLevelPresetRoomData___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaGameLevelPresetRoomData___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaGameLevelPresetRoomData___c_TypeDefinitionIndex)->GetStaticField(0x16018);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetDebugInfo_b__38_0(::RPG::Client::IRogueTournPersonaRoomAttribute* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournPersonaRoomAttribute*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAGAMELEVELPRESETROOMDATA___C__GETDEBUGINFO_B__38_0_OFFSET))(this, a1);
		}
	};
}
