#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6F0826F956303ADF.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_6CAED5D1762A09FC_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1CDD12C0)
#define CLASS_3_6CAED5D1762A09FC_METHOD_3_D9EDA7B4A36E6C05_OFFSET UNITYSDK_OFFSET(0x1CDD13C0)
#define CLASS_3_6CAED5D1762A09FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD13B0)

inline static constexpr unsigned int Class_3_6CAED5D1762A09FC_TypeDefinitionIndex = 23338;

class Class_3_6CAED5D1762A09FC : public ::Class_2_6F0826F956303ADF
{
public:
	::RPG::GameCore::DynamicFloat* KIPAGNCANAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6CAED5D1762A09FC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6CAED5D1762A09FC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6CAED5D1762A09FC*&))((::PBYTE)hIl2Cpp + CLASS_3_6CAED5D1762A09FC_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_D9EDA7B4A36E6C05(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6CAED5D1762A09FC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6CAED5D1762A09FC*))((::PBYTE)hIl2Cpp + CLASS_3_6CAED5D1762A09FC_METHOD_3_D9EDA7B4A36E6C05_OFFSET))(a1, a2);
	}
};
