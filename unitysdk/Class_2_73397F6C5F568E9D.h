#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_73397F6C5F568E9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C7FF50)
#define CLASS_2_73397F6C5F568E9D_METHOD_2_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x19C80050)
#define CLASS_2_73397F6C5F568E9D_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x19C80710)
#define CLASS_2_73397F6C5F568E9D__CTOR_OFFSET UNITYSDK_OFFSET(0x19C7FF30)

inline static constexpr unsigned int Class_2_73397F6C5F568E9D_TypeDefinitionIndex = 40308;

class Class_2_73397F6C5F568E9D : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x24

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73397F6C5F568E9D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73397F6C5F568E9D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_367A5F1ECD1BC1A2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73397F6C5F568E9D_METHOD_2_367A5F1ECD1BC1A2_OFFSET))(this);
	}

	::System::Void Method_2_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_73397F6C5F568E9D_METHOD_2_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}
};
