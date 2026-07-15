#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"

class FiveDimRenderingItem;

#define FLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_1_OFFSET UNITYSDK_OFFSET(0x17C80530)
#define FLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET UNITYSDK_OFFSET(0x17C80130)
#define FLIPBOOKOPERATION_METHOD_3_85FE18173B52F41D_OFFSET UNITYSDK_OFFSET(0x17C80460)
#define FLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x17C80800)
#define FLIPBOOKOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17C80870)
#define FLIPBOOKOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17C80850)

inline static constexpr unsigned int FlipBookOperation_TypeDefinitionIndex = 45335;

class FlipBookOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__FlipBookUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlipBookOperation_TypeDefinitionIndex)->GetStaticField(0xE7E0);
	}
	::System::Int32 DefaultFrame; // 0x20
	::System::Int32 FrameLengthX; // 0x24
	::System::Int32 FrameLengthY; // 0x28
	::System::Single FlipBookSpeed; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_6454AD7212B2C6DE(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET))(this, a1);
	}

	::System::Void Method_3_85FE18173B52F41D(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_85FE18173B52F41D_OFFSET))(this, a1);
	}

	::System::Void Method_3_6454AD7212B2C6DE_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
