#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_98274A1A3981A020_1.h"
#include "unitysdk/Foundation/AssetPath.h"

#define CLASS_2_24E19BC99F801C9C_METHOD_2_5B0743536553688C_OFFSET UNITYSDK_OFFSET(0x118A6F60)
#define CLASS_2_24E19BC99F801C9C_METHOD_2_AC762F67FADB2CA3_OFFSET UNITYSDK_OFFSET(0x118A6F70)
#define CLASS_2_24E19BC99F801C9C__CTOR_OFFSET UNITYSDK_OFFSET(0x118A6F50)

inline static constexpr unsigned int Class_2_24E19BC99F801C9C_TypeDefinitionIndex = 67535;

class Class_2_24E19BC99F801C9C : public ::Class_1_98274A1A3981A020_1
{
public:
	::Foundation::AssetPath Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E19BC99F801C9C__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_5B0743536553688C()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24E19BC99F801C9C_METHOD_2_5B0743536553688C_OFFSET))(this);
	}

	::System::Void Method_2_AC762F67FADB2CA3(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_2_24E19BC99F801C9C_METHOD_2_AC762F67FADB2CA3_OFFSET))(this, a1);
	}
};
