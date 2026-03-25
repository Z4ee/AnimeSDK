#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class NPCMonsterTrackConfigRow; }

#define CLASS_1_69910A0E3EFCC0FE_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x11337840)
#define CLASS_1_69910A0E3EFCC0FE_METHOD_1_486E62A68E7F379E_OFFSET UNITYSDK_OFFSET(0x11337800)
#define CLASS_1_69910A0E3EFCC0FE_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x11337860)
#define CLASS_1_69910A0E3EFCC0FE_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x11337820)
#define CLASS_1_69910A0E3EFCC0FE_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x11337850)
#define CLASS_1_69910A0E3EFCC0FE__CTOR_OFFSET UNITYSDK_OFFSET(0x11337760)

inline static constexpr unsigned int Class_1_69910A0E3EFCC0FE_TypeDefinitionIndex = 51074;

class Class_1_69910A0E3EFCC0FE : public ::System::Object
{
public:
	::RPG::GameCore::NPCMonsterTrackConfigRow* Field_1_1; // 0x10
	::System::UInt32 _FloorID_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::GameCore::NPCMonsterTrackConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NPCMonsterTrackConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_69910A0E3EFCC0FE__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Int32>* Method_1_486E62A68E7F379E()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69910A0E3EFCC0FE_METHOD_1_486E62A68E7F379E_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69910A0E3EFCC0FE_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69910A0E3EFCC0FE_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69910A0E3EFCC0FE_SET_FLOORID_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69910A0E3EFCC0FE_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}
};
