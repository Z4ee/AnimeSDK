#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_A4C13261FE83CAC8_OFFSET UNITYSDK_OFFSET(0x1BB37AE0)
#define RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_F0D0D4A72B4D1D45_OFFSET UNITYSDK_OFFSET(0x1BB37A10)
#define RPG_GAMECORE_ELFMANAGERRESTAURANT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB37AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfManagerRestaurant_TypeDefinitionIndex = 20932;

	class ElfManagerRestaurant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0D0D4A72B4D1D45(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfManagerRestaurant*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfManagerRestaurant*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_F0D0D4A72B4D1D45_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A4C13261FE83CAC8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ElfManagerRestaurant* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ElfManagerRestaurant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFMANAGERRESTAURANT_METHOD_3_A4C13261FE83CAC8_OFFSET))(a1, a2);
		}
	};
}
