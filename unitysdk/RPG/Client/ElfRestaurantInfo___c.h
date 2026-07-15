#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DynamicValue; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFRESTAURANTINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D68E10)
#define RPG_CLIENT_ELFRESTAURANTINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18D68E50)
#define RPG_CLIENT_ELFRESTAURANTINFO___C__TRYGETMANAGESTATISTICS_B__25_0_OFFSET UNITYSDK_OFFSET(0x18D68E60)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantInfo___c_TypeDefinitionIndex = 60949;

	class ElfRestaurantInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ElfRestaurantInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ElfRestaurantInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantInfo___c_TypeDefinitionIndex)->GetStaticField(0x6BD50);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantInfo___c_TypeDefinitionIndex)->GetStaticField(0x6BD58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetManageStatistics_b__25_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTINFO___C__TRYGETMANAGESTATISTICS_B__25_0_OFFSET))(this, a1);
		}
	};
}
