#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PARKOURLEVELGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F10DB0)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9F10DF0)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__GET_HASUNLOCKED_B__16_0_OFFSET UNITYSDK_OFFSET(0x9F10E00)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__GET_ISNEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x9F10E30)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevelGroup___c_TypeDefinitionIndex = 50211;

	class ParkourLevelGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ParkourLevelGroup___c_TypeDefinitionIndex)->GetStaticField(0x45610);
		}
		static ::RPG::Client::ParkourLevelGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ParkourLevelGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ParkourLevelGroup___c_TypeDefinitionIndex)->GetStaticField(0x45618);
		}
		static ::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ParkourLevelGroup___c_TypeDefinitionIndex)->GetStaticField(0x45620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasUnlocked_b__16_0(::RPG::Client::ParkourLevel* level)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__GET_HASUNLOCKED_B__16_0_OFFSET))(this, level);
		}

		::System::Boolean _get_IsNew_b__18_0(::RPG::Client::ParkourLevel* level)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__GET_ISNEW_B__18_0_OFFSET))(this, level);
		}
	};
}
