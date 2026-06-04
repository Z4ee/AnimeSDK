#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlanetFesUseItemRow; }

#define CLASS_1_4509E9B9ECDD123A_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x13B58F40)
#define CLASS_1_4509E9B9ECDD123A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x13B58F50)
#define CLASS_1_4509E9B9ECDD123A_METHOD_1_68D794DCB2968482_OFFSET UNITYSDK_OFFSET(0x13B58EE0)
#define CLASS_1_4509E9B9ECDD123A_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x13B58F20)
#define CLASS_1_4509E9B9ECDD123A_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x13B58F00)
#define CLASS_1_4509E9B9ECDD123A__CTOR_OFFSET UNITYSDK_OFFSET(0x13B58FC0)

inline static constexpr unsigned int Class_1_4509E9B9ECDD123A_TypeDefinitionIndex = 62340;

class Class_1_4509E9B9ECDD123A : public ::System::Object
{
public:
	::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
	::RPG::GameCore::PlanetFesUseItemRow* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::PlanetFesUseItemRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_4509E9B9ECDD123A__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::PlanetFesItemUseType Method_1_68D794DCB2968482()
	{
		return ((::RPG::GameCore::PlanetFesItemUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4509E9B9ECDD123A_METHOD_1_68D794DCB2968482_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4509E9B9ECDD123A_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4509E9B9ECDD123A_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::Client::ItemData* get_ItemData()
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4509E9B9ECDD123A_GET_ITEMDATA_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4509E9B9ECDD123A_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}
};
