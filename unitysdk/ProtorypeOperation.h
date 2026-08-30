#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIStateOperation.h"

class FiveDimRenderingItem;

#define PROTORYPEOPERATION_METHOD_2_45B7C516991B7516_OFFSET UNITYSDK_OFFSET(0xC4947F0)
#define PROTORYPEOPERATION_METHOD_2_D37F02A2689250D1_1_OFFSET UNITYSDK_OFFSET(0xC494740)
#define PROTORYPEOPERATION_METHOD_2_D37F02A2689250D1_OFFSET UNITYSDK_OFFSET(0xC494690)
#define PROTORYPEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0xC4948E0)

inline static constexpr unsigned int ProtorypeOperation_TypeDefinitionIndex = 47579;

class ProtorypeOperation : public ::FDRIStateOperation
{
public:
	::System::Boolean show; // 0x18
	::System::Int32 prototypeID; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D37F02A2689250D1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_METHOD_2_D37F02A2689250D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D37F02A2689250D1_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_METHOD_2_D37F02A2689250D1_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_45B7C516991B7516(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + PROTORYPEOPERATION_METHOD_2_45B7C516991B7516_OFFSET))(this, a1);
	}
};
