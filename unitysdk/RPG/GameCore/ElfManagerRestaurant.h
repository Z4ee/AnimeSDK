#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_700E885577AFFAFC_OFFSET UNITYSDK_OFFSET(0x1718F510)
#define RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_A4C13261FE83CAC8_OFFSET UNITYSDK_OFFSET(0x1718F620)
#define RPG_GAMECORE_ELFMANAGERRESTAURANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1718F5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfManagerRestaurant_TypeDefinitionIndex = 19901;

	class ElfManagerRestaurant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_700E885577AFFAFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfManagerRestaurant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfManagerRestaurant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_700E885577AFFAFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4C13261FE83CAC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfManagerRestaurant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfManagerRestaurant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_A4C13261FE83CAC8_OFFSET))(a1, a2);
		}
	};
}
