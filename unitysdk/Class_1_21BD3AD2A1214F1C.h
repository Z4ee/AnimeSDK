#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BDFB1B98046CDD46.h"
#include "unitysdk/System/Object.h"

class Class_1_D05699509194BF9B;

#define CLASS_1_21BD3AD2A1214F1C_GET_MOLD_OFFSET UNITYSDK_OFFSET(0xE84A980)
#define CLASS_1_21BD3AD2A1214F1C_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xE84A9A0)
#define CLASS_1_21BD3AD2A1214F1C_SET_MOLD_OFFSET UNITYSDK_OFFSET(0xE84A990)
#define CLASS_1_21BD3AD2A1214F1C_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xE84A9C0)
#define CLASS_1_21BD3AD2A1214F1C__CTOR_OFFSET UNITYSDK_OFFSET(0xE84A9D0)

inline static constexpr unsigned int Class_1_21BD3AD2A1214F1C_TypeDefinitionIndex = 79487;

class Class_1_21BD3AD2A1214F1C : public ::System::Object
{
public:
	::Class_1_D05699509194BF9B* _Mold_k__BackingField; // 0x10
	::Struct_2_BDFB1B98046CDD46 _Transform_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21BD3AD2A1214F1C__CTOR_OFFSET))(this);
	}

	::Class_1_D05699509194BF9B* get_Mold()
	{
		return ((::Class_1_D05699509194BF9B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21BD3AD2A1214F1C_GET_MOLD_OFFSET))(this);
	}

	::System::Void set_Mold(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_21BD3AD2A1214F1C_SET_MOLD_OFFSET))(this, a1);
	}

	::Struct_2_BDFB1B98046CDD46 get_Transform()
	{
		return ((::Struct_2_BDFB1B98046CDD46(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21BD3AD2A1214F1C_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::Struct_2_BDFB1B98046CDD46 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BDFB1B98046CDD46))((::PBYTE)hIl2Cpp + CLASS_1_21BD3AD2A1214F1C_SET_TRANSFORM_OFFSET))(this, a1);
	}
};
