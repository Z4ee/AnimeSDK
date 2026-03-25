#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_816;

#define CLASS_1_46AC29DEBE45F8A8_2_GET_FREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x8808F40)
#define CLASS_1_46AC29DEBE45F8A8_2_GET_MAXFREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x8808F60)
#define CLASS_1_46AC29DEBE45F8A8_2_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x8808E40)
#define CLASS_1_46AC29DEBE45F8A8_2_SET_FREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x8808F50)
#define CLASS_1_46AC29DEBE45F8A8_2_SET_MAXFREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x8808F70)
#define CLASS_1_46AC29DEBE45F8A8_2_UPDATE_OFFSET UNITYSDK_OFFSET(0x8808EE0)
#define CLASS_1_46AC29DEBE45F8A8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x8808ED0)

inline static constexpr unsigned int Class_1_46AC29DEBE45F8A8_2_TypeDefinitionIndex = 55212;

class Class_1_46AC29DEBE45F8A8_2 : public ::System::Object
{
public:
	::System::UInt32 _FreeGoodsNum_k__BackingField; // 0x10
	::System::UInt32 _MaxFreeGoodsNum_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2__CTOR_OFFSET))(this);
	}

	static ::Class_1_46AC29DEBE45F8A8_2* Method_1_169C9AE8F88E4F64(::Class_1_FA4F4A67B1C04320_816* a1)
	{
		return ((::Class_1_46AC29DEBE45F8A8_2*(*)(::Class_1_FA4F4A67B1C04320_816*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_FA4F4A67B1C04320_816* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_816*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_FreeGoodsNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_GET_FREEGOODSNUM_OFFSET))(this);
	}

	::System::Void set_FreeGoodsNum(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_SET_FREEGOODSNUM_OFFSET))(this, value);
	}

	::System::UInt32 get_MaxFreeGoodsNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_GET_MAXFREEGOODSNUM_OFFSET))(this);
	}

	::System::Void set_MaxFreeGoodsNum(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_SET_MAXFREEGOODSNUM_OFFSET))(this, value);
	}
};
