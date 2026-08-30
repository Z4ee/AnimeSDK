#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_8991CAAB94B47333_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBE189D0)
#define CLASS_3_8991CAAB94B47333_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBE189E0)
#define CLASS_3_8991CAAB94B47333__CTOR_OFFSET UNITYSDK_OFFSET(0xBE18A50)

inline static constexpr unsigned int Class_3_8991CAAB94B47333_TypeDefinitionIndex = 73914;

class Class_3_8991CAAB94B47333 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Single>
{
public:
	::System::Single PJKFLONMKED; // 0x18
	::System::Single ENMIPOPKOOL; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8991CAAB94B47333__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single get_value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8991CAAB94B47333_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8991CAAB94B47333_SET_VALUE_OFFSET))(this, a1);
	}
};
