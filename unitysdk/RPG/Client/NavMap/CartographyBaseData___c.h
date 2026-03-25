#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapTeleportData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DF7CF0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DF7D30)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_0_OFFSET UNITYSDK_OFFSET(0x9DF7D40)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_1_OFFSET UNITYSDK_OFFSET(0x9DF7D90)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int CartographyBaseData___c_TypeDefinitionIndex = 61240;

	class CartographyBaseData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::MapTeleportData*, ::System::Boolean>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::Client::MapTeleportData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CartographyBaseData___c_TypeDefinitionIndex)->GetStaticField(0x45130);
		}
		static ::System::Func_2<::RPG::Client::MapMappingInfoData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::MapMappingInfoData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CartographyBaseData___c_TypeDefinitionIndex)->GetStaticField(0x45138);
		}
		static ::RPG::Client::NavMap::CartographyBaseData___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::CartographyBaseData___c**)Il2CppClass::FromTypeDefinitionIndex(CartographyBaseData___c_TypeDefinitionIndex)->GetStaticField(0x45140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTeleportableIcons_b__2_0(::RPG::Client::MapMappingInfoData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapMappingInfoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_0_OFFSET))(this, data);
		}

		::System::Boolean _GetTeleportableIcons_b__2_1(::RPG::Client::MapTeleportData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapTeleportData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHYBASEDATA___C__GETTELEPORTABLEICONS_B__2_1_OFFSET))(this, data);
		}
	};
}
