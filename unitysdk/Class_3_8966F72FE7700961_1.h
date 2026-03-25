#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_8966F72FE7700961_1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x10944C70)
#define CLASS_3_8966F72FE7700961_1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x10944C80)
#define CLASS_3_8966F72FE7700961_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10944CD0)

inline static constexpr unsigned int Class_3_8966F72FE7700961_1_TypeDefinitionIndex = 60671;

class Class_3_8966F72FE7700961_1 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Int32>
{
public:
	::System::Int32 Field_3_0; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8966F72FE7700961_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 get_value()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8966F72FE7700961_1_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8966F72FE7700961_1_SET_VALUE_OFFSET))(this, a1);
	}
};
