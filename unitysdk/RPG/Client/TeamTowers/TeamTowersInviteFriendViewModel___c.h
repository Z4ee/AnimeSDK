#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1B2060)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE1B20A0)
#define RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__GETROBOTIDLIST_B__3_0_OFFSET UNITYSDK_OFFSET(0xE1B20B0)

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int TeamTowersInviteFriendViewModel___c_TypeDefinitionIndex = 78595;

	class TeamTowersInviteFriendViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamTowers::TeamTowersInviteFriendViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::TeamTowers::TeamTowersInviteFriendViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersInviteFriendViewModel___c_TypeDefinitionIndex)->GetStaticField(0x46060);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TeamTowersInviteFriendViewModel___c_TypeDefinitionIndex)->GetStaticField(0x46068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetRobotIDList_b__3_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMTOWERS_TEAMTOWERSINVITEFRIENDVIEWMODEL___C__GETROBOTIDLIST_B__3_0_OFFSET))(this, a1);
		}
	};
}
