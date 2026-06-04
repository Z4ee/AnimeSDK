#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_CLEAR_OFFSET UNITYSDK_OFFSET(0x18E71610)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18E715F0)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_METHOD_1_5E5FAAAE21B44BAE_OFFSET UNITYSDK_OFFSET(0x18E70F70)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_METHOD_1_D8EB89DF128EDA39_OFFSET UNITYSDK_OFFSET(0x18E71350)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18E710E0)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_ONALLOC_OFFSET UNITYSDK_OFFSET(0x18E71660)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x18E716D0)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18E71600)
#define CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2__CTOR_OFFSET UNITYSDK_OFFSET(0x18E71710)

inline static constexpr unsigned int Class_1_F35D4DA7881CD768_Class_1_22407E83B47119C2_TypeDefinitionIndex = 39891;

class Class_1_F35D4DA7881CD768_Class_1_22407E83B47119C2 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14
	::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Single Field_1_4; // 0x20
	::System::Single Field_1_5; // 0x24
	::System::Single _Value_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Single get_Value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_Value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_SET_VALUE_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_5E5FAAAE21B44BAE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_METHOD_1_5E5FAAAE21B44BAE_OFFSET))(this, a1);
	}

	::System::Void Method_1_D8EB89DF128EDA39(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F35D4DA7881CD768_CLASS_1_22407E83B47119C2_METHOD_1_D8EB89DF128EDA39_OFFSET))(this, a1, a2, a3);
	}
};
