#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0F24EAFEC305197B;

#define STRUCT_2_5D22E672620F4553_GET_BLOCKPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1D40)
#define STRUCT_2_5D22E672620F4553_GET_BLOCKVALUE_OFFSET UNITYSDK_OFFSET(0x1D30)
#define STRUCT_2_5D22E672620F4553_METHOD_2_E235E329BFF37EB1_OFFSET UNITYSDK_OFFSET(0x15744920)
#define STRUCT_2_5D22E672620F4553_SET_BLOCKPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x94C0)
#define STRUCT_2_5D22E672620F4553_SET_BLOCKVALUE_OFFSET UNITYSDK_OFFSET(0x94B0)

inline static constexpr unsigned int Struct_2_5D22E672620F4553_TypeDefinitionIndex = 72056;

struct alignas(8) Struct_2_5D22E672620F4553
{
	::RPG::GameCore::FixPoint _BlockValue_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _BlockPercentage_k__BackingField; // 0x18

	static ::Struct_2_5D22E672620F4553 Method_2_E235E329BFF37EB1(::Class_1_0F24EAFEC305197B* a1)
	{
		return ((::Struct_2_5D22E672620F4553(*)(::Class_1_0F24EAFEC305197B*))((::PBYTE)hIl2Cpp + STRUCT_2_5D22E672620F4553_METHOD_2_E235E329BFF37EB1_OFFSET))(a1);
	}

	::RPG::GameCore::FixPoint get_BlockValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D22E672620F4553_GET_BLOCKVALUE_OFFSET))(this);
	}

	::System::Void set_BlockValue(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_5D22E672620F4553_SET_BLOCKVALUE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_BlockPercentage()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D22E672620F4553_GET_BLOCKPERCENTAGE_OFFSET))(this);
	}

	::System::Void set_BlockPercentage(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_5D22E672620F4553_SET_BLOCKPERCENTAGE_OFFSET))(this, a1);
	}
};
