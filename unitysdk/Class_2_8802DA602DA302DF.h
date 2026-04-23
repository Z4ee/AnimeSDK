#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_6660DE6E19DC27BF;

#define CLASS_2_8802DA602DA302DF_METHOD_2_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x17E7D560)
#define CLASS_2_8802DA602DA302DF_METHOD_2_32F9C58B690E51E5_OFFSET UNITYSDK_OFFSET(0x17E7DCC0)
#define CLASS_2_8802DA602DA302DF_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x17E7E560)
#define CLASS_2_8802DA602DA302DF_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x17E7E5D0)
#define CLASS_2_8802DA602DA302DF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7D3D0)

inline static constexpr unsigned int Class_2_8802DA602DA302DF_TypeDefinitionIndex = 38469;

class Class_2_8802DA602DA302DF : public ::Class_1_5BE136E515AF9A61
{
public:
	::Class_2_6660DE6E19DC27BF* Field_2_0; // 0x18
	::Class_2_6660DE6E19DC27BF* Field_2_1; // 0x20
	::UnityEngine::Vector3 Field_2_4; // 0x28
	::System::Single Field_2_3; // 0x34
	::System::Single Field_2_2; // 0x38

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8802DA602DA302DF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1283EC0876EAAACF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8802DA602DA302DF_METHOD_2_1283EC0876EAAACF_OFFSET))(this);
	}

	::System::Void Method_2_32F9C58B690E51E5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8802DA602DA302DF_METHOD_2_32F9C58B690E51E5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8802DA602DA302DF_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8802DA602DA302DF_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
