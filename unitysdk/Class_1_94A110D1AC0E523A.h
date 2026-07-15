#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlanetFesUseItemRow; }

#define CLASS_1_94A110D1AC0E523A_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x1620C5F0)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x1620C600)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_2513F34D07BB5CE0_OFFSET UNITYSDK_OFFSET(0x1620C500)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x1620C5A0)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1620C550)
#define CLASS_1_94A110D1AC0E523A__CTOR_OFFSET UNITYSDK_OFFSET(0x1620C670)

inline static constexpr unsigned int Class_1_94A110D1AC0E523A_TypeDefinitionIndex = 63706;

class Class_1_94A110D1AC0E523A : public ::System::Object
{
public:
	::RPG::GameCore::PlanetFesUseItemRow* Field_1_0; // 0x10
	::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::PlanetFesUseItemRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesUseItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_94A110D1AC0E523A__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::PlanetFesItemUseType Method_1_2513F34D07BB5CE0()
	{
		return ((::RPG::GameCore::PlanetFesItemUseType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A110D1AC0E523A_METHOD_1_2513F34D07BB5CE0_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A110D1AC0E523A_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A110D1AC0E523A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::RPG::Client::ItemData* get_ItemData()
	{
		return ((::RPG::Client::ItemData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A110D1AC0E523A_GET_ITEMDATA_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A110D1AC0E523A_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}
};
