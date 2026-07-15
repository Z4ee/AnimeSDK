#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_110.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
class Class_2_FD0167EB507B9435_7;
namespace RPG::Client { class GridFightRole; }
namespace System { class String; }

#define CLASS_2_B3C653422DA99FC0_METHOD_2_5C5FC8BC43F7FF99_OFFSET UNITYSDK_OFFSET(0x14D28C60)
#define CLASS_2_B3C653422DA99FC0_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x14D278F0)
#define CLASS_2_B3C653422DA99FC0_METHOD_2_9848FA694EB68431_OFFSET UNITYSDK_OFFSET(0x14D27960)
#define CLASS_2_B3C653422DA99FC0_METHOD_2_CFFCEF1B09C44B94_OFFSET UNITYSDK_OFFSET(0x14D28A80)
#define CLASS_2_B3C653422DA99FC0_METHOD_2_F7A7D26B07ECCD74_OFFSET UNITYSDK_OFFSET(0x14D282E0)
#define CLASS_2_B3C653422DA99FC0__CTOR_OFFSET UNITYSDK_OFFSET(0x14D28D20)

inline static constexpr unsigned int Class_2_B3C653422DA99FC0_TypeDefinitionIndex = 62367;

class Class_2_B3C653422DA99FC0 : public ::Class_1_43BD383C98B4C0C5_110
{
public:
	::Class_1_2670985A37556FEA* Field_2_0; // 0x10
	::Class_1_2350AF62BA84EDFD* Field_2_1; // 0x18
	::RPG::Client::GridFightRole* Field_2_2; // 0x20
	::Class_2_FD0167EB507B9435_7* Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_2_9848FA694EB68431(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0_METHOD_2_9848FA694EB68431_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_F7A7D26B07ECCD74()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0_METHOD_2_F7A7D26B07ECCD74_OFFSET))(this);
	}

	::System::String* Method_2_CFFCEF1B09C44B94(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0_METHOD_2_CFFCEF1B09C44B94_OFFSET))(this, a1);
	}

	::System::String* Method_2_5C5FC8BC43F7FF99(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B3C653422DA99FC0_METHOD_2_5C5FC8BC43F7FF99_OFFSET))(this, a1, a2);
	}
};
