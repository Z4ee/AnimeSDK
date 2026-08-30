#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class IMainTab; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_WORLDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD97A5B0)
#define RPG_CLIENT_NAVMAP_WORLDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD97A5E0)
#define RPG_CLIENT_NAVMAP_WORLDDATA___C__GET_SHOWTABS_B__24_0_OFFSET UNITYSDK_OFFSET(0xD97A5F0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int WorldData___c_TypeDefinitionIndex = 74518;

	class WorldData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::NavMap::WorldData___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::WorldData___c**)Il2CppClass::FromTypeDefinitionIndex(WorldData___c_TypeDefinitionIndex)->GetStaticField(0x2CD50);
		}
		static ::System::Func_2<::RPG::Client::NavMap::IMainTab*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::IMainTab*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WorldData___c_TypeDefinitionIndex)->GetStaticField(0x2CD58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ShowTabs_b__24_0(::RPG::Client::NavMap::IMainTab* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::IMainTab*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_WORLDDATA___C__GET_SHOWTABS_B__24_0_OFFSET))(this, a1);
		}
	};
}
