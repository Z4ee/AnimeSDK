#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyBaseGridItemData.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_METHOD_3_2E9E96982BCC171C_OFFSET UNITYSDK_OFFSET(0x16F7A870)
#define RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_METHOD_3_37D571B5773FCB59_OFFSET UNITYSDK_OFFSET(0x16F6E7E0)
#define RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16F6E7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShopGridItemData_TypeDefinitionIndex = 14368;

	class AlleyShopGridItemData : public ::RPG::GameCore::AlleyBaseGridItemData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E9E96982BCC171C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyShopGridItemData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyShopGridItemData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_METHOD_3_2E9E96982BCC171C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_37D571B5773FCB59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AlleyShopGridItemData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AlleyShopGridItemData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPGRIDITEMDATA_METHOD_3_37D571B5773FCB59_OFFSET))(a1, a2);
		}
	};
}
