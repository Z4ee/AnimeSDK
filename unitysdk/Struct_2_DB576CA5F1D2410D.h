#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_DB576CA5F1D2410D_METHOD_2_7588156DD6071C11_OFFSET UNITYSDK_OFFSET(0x395F000)

inline static constexpr unsigned int Struct_2_DB576CA5F1D2410D_TypeDefinitionIndex = 53437;

struct alignas(4) Struct_2_DB576CA5F1D2410D
{
	::RPG::GameCore::PropertyModifyFunction Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void Method_2_7588156DD6071C11(::Struct_2_DB576CA5F1D2410D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DB576CA5F1D2410D))((::PBYTE)hIl2Cpp + STRUCT_2_DB576CA5F1D2410D_METHOD_2_7588156DD6071C11_OFFSET))(this, a1);
	}
};
