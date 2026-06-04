#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournHex; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC846BA0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC846BE0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__EQUIPHEX_B__29_0_OFFSET UNITYSDK_OFFSET(0xC846BF0)
#define RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C___UNEQUIPHEX_B__32_0_OFFSET UNITYSDK_OFFSET(0xC846C10)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaHexEquipmentViewModel___c_TypeDefinitionIndex = 68090;

	class RogueTournPersonaHexEquipmentViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::IRogueTournHex*, ::System::UInt32>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournHex*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaHexEquipmentViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EEB0);
		}
		static ::RPG::Client::RogueTournPersonaHexEquipmentViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournPersonaHexEquipmentViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaHexEquipmentViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EEB8);
		}
		static ::System::Func_2<::RPG::Client::IRogueTournHex*, ::System::UInt32>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::Client::IRogueTournHex*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournPersonaHexEquipmentViewModel___c_TypeDefinitionIndex)->GetStaticField(0x3EEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _EquipHex_b__29_0(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C__EQUIPHEX_B__29_0_OFFSET))(this, a1);
		}

		::System::UInt32 __UnEquipHex_b__32_0(::RPG::Client::IRogueTournHex* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::IRogueTournHex*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAHEXEQUIPMENTVIEWMODEL___C___UNEQUIPHEX_B__32_0_OFFSET))(this, a1);
		}
	};
}
