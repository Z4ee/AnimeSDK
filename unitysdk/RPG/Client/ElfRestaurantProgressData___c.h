#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantDayData; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D77DA0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA___C__CREATE_B__0_0_OFFSET UNITYSDK_OFFSET(0x18D77DE0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D77DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressData___c_TypeDefinitionIndex = 60933;

	class ElfRestaurantProgressData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ElfRestaurantProgressData___c** StaticGet___9()
		{
			return (::RPG::Client::ElfRestaurantProgressData___c**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantProgressData___c_TypeDefinitionIndex)->GetStaticField(0x6BDB0);
		}
		static ::System::Comparison_1<::RPG::Client::ElfRestaurantDayData*>** StaticGet___9__0_0()
		{
			return (::System::Comparison_1<::RPG::Client::ElfRestaurantDayData*>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantProgressData___c_TypeDefinitionIndex)->GetStaticField(0x6BDB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__0_0(::RPG::Client::ElfRestaurantDayData* a1, ::RPG::Client::ElfRestaurantDayData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantDayData*, ::RPG::Client::ElfRestaurantDayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSDATA___C__CREATE_B__0_0_OFFSET))(this, a1, a2);
		}
	};
}
