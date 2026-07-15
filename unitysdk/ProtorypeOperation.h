#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIStateOperation.h"

class FiveDimRenderingItem;

#define PROTORYPEOPERATION_METHOD_2_332F0F6F5683AF58_1_OFFSET UNITYSDK_OFFSET(0x17468CF0)
#define PROTORYPEOPERATION_METHOD_2_332F0F6F5683AF58_2_OFFSET UNITYSDK_OFFSET(0x17468DA0)
#define PROTORYPEOPERATION_METHOD_2_332F0F6F5683AF58_OFFSET UNITYSDK_OFFSET(0x17468C40)
#define PROTORYPEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17468E90)

inline static constexpr unsigned int ProtorypeOperation_TypeDefinitionIndex = 45340;

class ProtorypeOperation : public ::FDRIStateOperation
{
public:
	::System::Boolean show; // 0x18
	::System::Int32 prototypeID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_332F0F6F5683AF58(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_METHOD_2_332F0F6F5683AF58_OFFSET))(this, a1);
	}

	::System::Void Method_2_332F0F6F5683AF58_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_METHOD_2_332F0F6F5683AF58_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_332F0F6F5683AF58_2(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_METHOD_2_332F0F6F5683AF58_2_OFFSET))(this, a1);
	}
};
