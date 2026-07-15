#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeBirdData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEPLAYERDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB74760)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB747A0)
#define RPG_CLIENT_MATCHTHREEPLAYERDATA___C__GETALLBIRD_B__4_0_OFFSET UNITYSDK_OFFSET(0x1AB747B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePlayerData___c_TypeDefinitionIndex = 63038;

	class MatchThreePlayerData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreePlayerData___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreePlayerData___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePlayerData___c_TypeDefinitionIndex)->GetStaticField(0x47320);
		}
		static ::System::Func_2<::RPG::Client::MatchThreeBirdData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeBirdData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreePlayerData___c_TypeDefinitionIndex)->GetStaticField(0x47328);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllBird_b__4_0(::RPG::Client::MatchThreeBirdData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeBirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPLAYERDATA___C__GETALLBIRD_B__4_0_OFFSET))(this, a1);
		}
	};
}
