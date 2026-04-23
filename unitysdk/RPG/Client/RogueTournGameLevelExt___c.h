#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournGameLevelLayer; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB0C82E0)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB0C8310)
#define RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__ROOMCOUNT_B__1_0_OFFSET UNITYSDK_OFFSET(0xB0C8320)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameLevelExt___c_TypeDefinitionIndex = 62346;

	class RogueTournGameLevelExt___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournGameLevelExt___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournGameLevelExt___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournGameLevelExt___c_TypeDefinitionIndex)->GetStaticField(0x18ED0);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournGameLevelLayer*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournGameLevelLayer*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournGameLevelExt___c_TypeDefinitionIndex)->GetStaticField(0x18ED8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RoomCount_b__1_0(::RPG::Client::IRogueTournGameLevelLayer* layer)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournGameLevelLayer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMELEVELEXT___C__ROOMCOUNT_B__1_0_OFFSET))(this, layer);
		}
	};
}
