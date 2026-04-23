#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_129E8AF30182E162;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATEGAMEBROADCASTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA33B710)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA33B750)
#define RPG_CLIENT_FATEGAMEBROADCASTINFO___C__REFRESHCURBROADCAST_B__2_0_OFFSET UNITYSDK_OFFSET(0xA33B760)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameBroadcastInfo___c_TypeDefinitionIndex = 58856;

	class FateGameBroadcastInfo___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::Class_1_129E8AF30182E162*>** StaticGet___9__2_0()
		{
			return (::System::Predicate_1<::Class_1_129E8AF30182E162*>**)Il2CppClass::FromTypeDefinitionIndex(FateGameBroadcastInfo___c_TypeDefinitionIndex)->GetStaticField(0xB5F0);
		}
		static ::RPG::Client::FateGameBroadcastInfo___c** StaticGet___9()
		{
			return (::RPG::Client::FateGameBroadcastInfo___c**)Il2CppClass::FromTypeDefinitionIndex(FateGameBroadcastInfo___c_TypeDefinitionIndex)->GetStaticField(0xB5F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshCurBroadcast_b__2_0(::Class_1_129E8AF30182E162* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_129E8AF30182E162*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEBROADCASTINFO___C__REFRESHCURBROADCAST_B__2_0_OFFSET))(this, b);
		}
	};
}
