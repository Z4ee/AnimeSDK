#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_363;
class Class_1_16D8E68BCE885505;

#define CLASS_1_BCED8B530C55B5E5_GET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x12840470)
#define CLASS_1_BCED8B530C55B5E5_GET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0x12840450)
#define CLASS_1_BCED8B530C55B5E5_SET_AVATARROWDATAPROVIDER_OFFSET UNITYSDK_OFFSET(0x12840480)
#define CLASS_1_BCED8B530C55B5E5_SET_PROTOTYPE_OFFSET UNITYSDK_OFFSET(0x12840460)
#define CLASS_1_BCED8B530C55B5E5__CTOR_OFFSET UNITYSDK_OFFSET(0x12840490)

inline static constexpr unsigned int Class_1_BCED8B530C55B5E5_TypeDefinitionIndex = 47936;

class Class_1_BCED8B530C55B5E5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_363* _AvatarRowDataProvider_k__BackingField; // 0x10
	::Class_1_16D8E68BCE885505* _Prototype_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5__CTOR_OFFSET))(this);
	}

	::Class_1_16D8E68BCE885505* get_Prototype()
	{
		return ((::Class_1_16D8E68BCE885505*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_GET_PROTOTYPE_OFFSET))(this);
	}

	::System::Void set_Prototype(::Class_1_16D8E68BCE885505* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16D8E68BCE885505*))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_SET_PROTOTYPE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_363* get_AvatarRowDataProvider()
	{
		return ((::Class_0_16E4307DCC419505_363*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_GET_AVATARROWDATAPROVIDER_OFFSET))(this);
	}

	::System::Void set_AvatarRowDataProvider(::Class_0_16E4307DCC419505_363* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_363*))((::PBYTE)hIl2Cpp + CLASS_1_BCED8B530C55B5E5_SET_AVATARROWDATAPROVIDER_OFFSET))(this, value);
	}
};
