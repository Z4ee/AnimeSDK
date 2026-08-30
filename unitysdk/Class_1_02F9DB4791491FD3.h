#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MapDataKey; }
namespace RPG::GameCore { class NPCMonsterTrackConfigRow; }

#define CLASS_1_02F9DB4791491FD3_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB4FED00)
#define CLASS_1_02F9DB4791491FD3_GET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xB4FED70)
#define CLASS_1_02F9DB4791491FD3_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xB4FED20)
#define CLASS_1_02F9DB4791491FD3_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB4FECB0)
#define CLASS_1_02F9DB4791491FD3_METHOD_1_D65D6257FB73E1EC_OFFSET UNITYSDK_OFFSET(0xB4FEC60)
#define CLASS_1_02F9DB4791491FD3_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB4FED10)
#define CLASS_1_02F9DB4791491FD3_SET_MAPDATAKEY_OFFSET UNITYSDK_OFFSET(0xB4FED80)
#define CLASS_1_02F9DB4791491FD3__CTOR_OFFSET UNITYSDK_OFFSET(0xB4FEB90)

inline static constexpr unsigned int Class_1_02F9DB4791491FD3_TypeDefinitionIndex = 62990;

class Class_1_02F9DB4791491FD3 : public ::System::Object
{
public:
	::RPG::Client::MapDataKey* _MapDataKey_k__BackingField; // 0x10
	::RPG::GameCore::NPCMonsterTrackConfigRow* IBPBJBOKKMF; // 0x18
	::System::UInt32 _FloorID_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::NPCMonsterTrackConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterTrackConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* Method_1_D65D6257FB73E1EC()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_METHOD_1_D65D6257FB73E1EC_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_SET_FLOORID_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::RPG::Client::MapDataKey* get_MapDataKey()
	{
		return ((::RPG::Client::MapDataKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_GET_MAPDATAKEY_OFFSET))(this);
	}

	::System::Void set_MapDataKey(::RPG::Client::MapDataKey* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*))((::PBYTE)hIl2Cpp + CLASS_1_02F9DB4791491FD3_SET_MAPDATAKEY_OFFSET))(this, a1);
	}
};
