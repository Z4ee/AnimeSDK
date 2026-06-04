#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_891;

#define CLASS_1_46AC29DEBE45F8A8_2_GET_FREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x13C006A0)
#define CLASS_1_46AC29DEBE45F8A8_2_GET_MAXFREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x13C006C0)
#define CLASS_1_46AC29DEBE45F8A8_2_METHOD_1_169C9AE8F88E4F64_OFFSET UNITYSDK_OFFSET(0x13C005A0)
#define CLASS_1_46AC29DEBE45F8A8_2_SET_FREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x13C006B0)
#define CLASS_1_46AC29DEBE45F8A8_2_SET_MAXFREEGOODSNUM_OFFSET UNITYSDK_OFFSET(0x13C006D0)
#define CLASS_1_46AC29DEBE45F8A8_2_UPDATE_OFFSET UNITYSDK_OFFSET(0x13C00640)
#define CLASS_1_46AC29DEBE45F8A8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13C00630)

inline static constexpr unsigned int Class_1_46AC29DEBE45F8A8_2_TypeDefinitionIndex = 63333;

class Class_1_46AC29DEBE45F8A8_2 : public ::System::Object
{
public:
	::System::UInt32 _MaxFreeGoodsNum_k__BackingField; // 0x10
	::System::UInt32 _FreeGoodsNum_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2__CTOR_OFFSET))(this);
	}

	static ::Class_1_46AC29DEBE45F8A8_2* Method_1_169C9AE8F88E4F64(::Class_1_D17272E82AE804C2_891* a1)
	{
		return ((::Class_1_46AC29DEBE45F8A8_2*(*)(::Class_1_D17272E82AE804C2_891*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_METHOD_1_169C9AE8F88E4F64_OFFSET))(a1);
	}

	::System::Void Update(::Class_1_D17272E82AE804C2_891* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_891*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_FreeGoodsNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_GET_FREEGOODSNUM_OFFSET))(this);
	}

	::System::Void set_FreeGoodsNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_SET_FREEGOODSNUM_OFFSET))(this, a1);
	}

	::System::UInt32 get_MaxFreeGoodsNum()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_GET_MAXFREEGOODSNUM_OFFSET))(this);
	}

	::System::Void set_MaxFreeGoodsNum(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_2_SET_MAXFREEGOODSNUM_OFFSET))(this, a1);
	}
};
