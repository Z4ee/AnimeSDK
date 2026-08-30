#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DB576CA5F1D2410D_METHOD_2_7588156DD6071C11_OFFSET UNITYSDK_OFFSET(0x3AB7DA0)

inline static constexpr unsigned int Struct_2_DB576CA5F1D2410D_TypeDefinitionIndex = 56151;

struct alignas(4) Struct_2_DB576CA5F1D2410D
{
	::RPG::GameCore::PropertyModifyFunction DNKFJMBHINL; // 0x10
	::System::Int32 AJHHCOHFIFA; // 0x14

	::System::Void Method_2_7588156DD6071C11(::Struct_2_DB576CA5F1D2410D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DB576CA5F1D2410D))((::PBYTE)hIl2Cpp + STRUCT_2_DB576CA5F1D2410D_METHOD_2_7588156DD6071C11_OFFSET))(this, a1);
	}
};
