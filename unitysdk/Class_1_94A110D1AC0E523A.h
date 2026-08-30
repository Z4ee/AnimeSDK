#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesItemUseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemData; }
namespace RPG::GameCore { class PlanetFesUseItemRow; }

#define CLASS_1_94A110D1AC0E523A_GET_ITEMDATA_OFFSET UNITYSDK_OFFSET(0x159E9B60)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x159E9B70)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_2513F34D07BB5CE0_OFFSET UNITYSDK_OFFSET(0x159E9A70)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0x159E9B10)
#define CLASS_1_94A110D1AC0E523A_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x159E9AC0)
#define CLASS_1_94A110D1AC0E523A__CTOR_OFFSET UNITYSDK_OFFSET(0x159E9BE0)

inline static constexpr unsigned int Class_1_94A110D1AC0E523A_TypeDefinitionIndex = 66691;

class Class_1_94A110D1AC0E523A : public ::System::Object
{
public:
	::RPG::Client::ItemData* _ItemData_k__BackingField; // 0x10
	::RPG::GameCore::PlanetFesUseItemRow* IBPBJBOKKMF; // 0x18

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
