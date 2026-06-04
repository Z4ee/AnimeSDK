#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_78AF2AD995A1A7F0.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_8538CFE7D33834DB_METHOD_3_2DA2FA8F5D77B5B8_OFFSET UNITYSDK_OFFSET(0x19D55AE0)
#define CLASS_3_8538CFE7D33834DB_METHOD_3_D9EDA7B4A36E6C05_OFFSET UNITYSDK_OFFSET(0x19D55BC0)
#define CLASS_3_8538CFE7D33834DB__CTOR_OFFSET UNITYSDK_OFFSET(0x19D55BB0)

inline static constexpr unsigned int Class_3_8538CFE7D33834DB_TypeDefinitionIndex = 22065;

class Class_3_8538CFE7D33834DB : public ::Class_2_78AF2AD995A1A7F0
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8538CFE7D33834DB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2DA2FA8F5D77B5B8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8538CFE7D33834DB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8538CFE7D33834DB*&))((::PBYTE)hIl2Cpp + CLASS_3_8538CFE7D33834DB_METHOD_3_2DA2FA8F5D77B5B8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D9EDA7B4A36E6C05(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8538CFE7D33834DB* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8538CFE7D33834DB*))((::PBYTE)hIl2Cpp + CLASS_3_8538CFE7D33834DB_METHOD_3_D9EDA7B4A36E6C05_OFFSET))(a1, a2);
	}
};
