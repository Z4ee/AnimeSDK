#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapTeleportData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A32AC80)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A32ACB0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1A32ACC0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_1_OFFSET UNITYSDK_OFFSET(0x1A32ACE0)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int CartographyBaseData___c_TypeDefinitionIndex = 74382;

	class CartographyBaseData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::NavMap::CartographyBaseData___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::CartographyBaseData___c**)Il2CppClass::FromTypeDefinitionIndex(CartographyBaseData___c_TypeDefinitionIndex)->GetStaticField(0x30D80);
		}
		static ::System::Func_2<::RPG::Client::MapMappingInfoData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::MapMappingInfoData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CartographyBaseData___c_TypeDefinitionIndex)->GetStaticField(0x30D88);
		}
		static ::System::Func_2<::RPG::Client::MapTeleportData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::MapTeleportData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CartographyBaseData___c_TypeDefinitionIndex)->GetStaticField(0x30D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTeleportableIcons_b__2_0(::RPG::Client::MapMappingInfoData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetTeleportableIcons_b__2_1(::RPG::Client::MapTeleportData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTeleportData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_1_OFFSET))(this, a1);
		}
	};
}
