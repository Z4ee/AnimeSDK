#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A4ED94721C8F4303_GET_BIRDID_OFFSET UNITYSDK_OFFSET(0x16AA8740)
#define CLASS_1_A4ED94721C8F4303_METHOD_1_63D1770D8D097315_OFFSET UNITYSDK_OFFSET(0x16AA8760)
#define CLASS_1_A4ED94721C8F4303_SET_BIRDID_OFFSET UNITYSDK_OFFSET(0x16AA8750)
#define CLASS_1_A4ED94721C8F4303__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA87E0)

inline static constexpr unsigned int Class_1_A4ED94721C8F4303_TypeDefinitionIndex = 63130;

class Class_1_A4ED94721C8F4303 : public ::System::Object
{
public:
	::System::UInt32 _BirdID_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_BirdID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_GET_BIRDID_OFFSET))(this);
	}

	::System::Void set_BirdID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_SET_BIRDID_OFFSET))(this, a1);
	}

	static ::Class_1_A4ED94721C8F4303* Method_1_63D1770D8D097315(::System::UInt32 a1)
	{
		return ((::Class_1_A4ED94721C8F4303*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4ED94721C8F4303_METHOD_1_63D1770D8D097315_OFFSET))(a1);
	}
};
