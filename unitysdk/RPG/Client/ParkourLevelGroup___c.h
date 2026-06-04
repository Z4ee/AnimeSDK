#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ParkourLevel; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PARKOURLEVELGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC345C30)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC345C70)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__GET_HASUNLOCKED_B__16_0_OFFSET UNITYSDK_OFFSET(0xC345C80)
#define RPG_CLIENT_PARKOURLEVELGROUP___C__GET_ISNEW_B__18_0_OFFSET UNITYSDK_OFFSET(0xC345CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ParkourLevelGroup___c_TypeDefinitionIndex = 57845;

	class ParkourLevelGroup___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ParkourLevelGroup___c_TypeDefinitionIndex)->GetStaticField(0x2170);
		}
		static ::RPG::Client::ParkourLevelGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ParkourLevelGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ParkourLevelGroup___c_TypeDefinitionIndex)->GetStaticField(0x2178);
		}
		static ::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ParkourLevel*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ParkourLevelGroup___c_TypeDefinitionIndex)->GetStaticField(0x2180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasUnlocked_b__16_0(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__GET_HASUNLOCKED_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_IsNew_b__18_0(::RPG::Client::ParkourLevel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ParkourLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURLEVELGROUP___C__GET_ISNEW_B__18_0_OFFSET))(this, a1);
		}
	};
}
