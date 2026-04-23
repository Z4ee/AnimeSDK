#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlanetFesUseItemRow; }

#define CLASS_1_0751F62F59815236_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0xA059060)
#define CLASS_1_0751F62F59815236_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0xA059070)
#define CLASS_1_0751F62F59815236_METHOD_1_68D794DCB2968482_OFFSET UNITYSDK_OFFSET(0xA059000)
#define CLASS_1_0751F62F59815236_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0xA059040)
#define CLASS_1_0751F62F59815236_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xA059020)
#define CLASS_1_0751F62F59815236__CTOR_OFFSET UNITYSDK_OFFSET(0xA0590E0)

inline static constexpr unsigned int Class_1_0751F62F59815236_TypeDefinitionIndex = 61416;

class Class_1_0751F62F59815236 : public ::System::Object
{
public:
	::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
	::RPG::GameCore::PlanetFesUseItemRow* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::PlanetFesUseItemRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_0751F62F59815236__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::PlanetFesItemUseType Method_1_68D794DCB2968482()
	{
		return ((::RPG::GameCore::PlanetFesItemUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0751F62F59815236_METHOD_1_68D794DCB2968482_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0751F62F59815236_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0751F62F59815236_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::RPG::Client::ItemData* get_ItemData()
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0751F62F59815236_GET_ITEMDATA_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0751F62F59815236_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}
};
