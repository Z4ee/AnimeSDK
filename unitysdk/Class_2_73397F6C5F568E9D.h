#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

class Class_2_037EA204E69EBC75;

#define CLASS_2_73397F6C5F568E9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C637ED0)
#define CLASS_2_73397F6C5F568E9D_METHOD_2_367A5F1ECD1BC1A2_OFFSET UNITYSDK_OFFSET(0x1C637F80)
#define CLASS_2_73397F6C5F568E9D_METHOD_2_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x1C6385C0)
#define CLASS_2_73397F6C5F568E9D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C637EC0)

inline static constexpr unsigned int Class_2_73397F6C5F568E9D_TypeDefinitionIndex = 41187;

class Class_2_73397F6C5F568E9D : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::Class_2_037EA204E69EBC75* GMFGOGHADKD; // 0x18
	::System::Single HBDJCFFDGDD; // 0x20
	::System::Single PGMIOKKLHIE; // 0x24

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
