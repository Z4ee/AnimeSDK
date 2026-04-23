#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class WorldData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB76D80)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB76DC0)
#define RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__GET_SHOWWORLDS_B__36_0_OFFSET UNITYSDK_OFFSET(0xAB76DD0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int UniverseData___c_TypeDefinitionIndex = 68870;

	class UniverseData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::NavMap::WorldData*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::WorldData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UniverseData___c_TypeDefinitionIndex)->GetStaticField(0x4FDC0);
		}
		static ::RPG::Client::NavMap::UniverseData___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::UniverseData___c**)Il2CppClass::FromTypeDefinitionIndex(UniverseData___c_TypeDefinitionIndex)->GetStaticField(0x4FDC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ShowWorlds_b__36_0(::RPG::Client::NavMap::WorldData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_UNIVERSEDATA___C__GET_SHOWWORLDS_B__36_0_OFFSET))(this, x);
		}
	};
}
