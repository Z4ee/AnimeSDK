#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_107.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
class Class_2_FD0167EB507B9435_8;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define CLASS_2_A0C9841090D248E7_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0xAC1F7D0)
#define CLASS_2_A0C9841090D248E7_METHOD_2_4014CA136C4E0108_OFFSET UNITYSDK_OFFSET(0xAC1F810)
#define CLASS_2_A0C9841090D248E7_METHOD_2_5C5FC8BC43F7FF99_OFFSET UNITYSDK_OFFSET(0xAC20870)
#define CLASS_2_A0C9841090D248E7_METHOD_2_C0F45500E2961A25_OFFSET UNITYSDK_OFFSET(0xAC20070)
#define CLASS_2_A0C9841090D248E7_METHOD_2_CFFCEF1B09C44B94_OFFSET UNITYSDK_OFFSET(0xAC20690)
#define CLASS_2_A0C9841090D248E7__CTOR_OFFSET UNITYSDK_OFFSET(0xAC20930)

inline static constexpr unsigned int Class_2_A0C9841090D248E7_TypeDefinitionIndex = 61047;

class Class_2_A0C9841090D248E7 : public ::Class_1_43BD383C98B4C0C5_107
{
public:
	::Class_2_FD0167EB507B9435_8* Field_2_0; // 0x10
	::Class_1_2350AF62BA84EDFD* Field_2_1; // 0x18
	::RPG::Client::GridFightRole* Field_2_2; // 0x20
	::Class_1_2670985A37556FEA* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_4014CA136C4E0108(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_4014CA136C4E0108_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_C0F45500E2961A25()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_C0F45500E2961A25_OFFSET))(this);
	}

	::System::String* Method_2_CFFCEF1B09C44B94(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_CFFCEF1B09C44B94_OFFSET))(this, a1);
	}

	::System::String* Method_2_5C5FC8BC43F7FF99(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_A0C9841090D248E7_METHOD_2_5C5FC8BC43F7FF99_OFFSET))(this, a1, a2);
	}
};
