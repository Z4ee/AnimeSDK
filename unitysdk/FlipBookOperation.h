#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"
#include "unitysdk/UnityEngine/Vector4.h"

class FiveDimRenderingItem;

#define FLIPBOOKOPERATION_METHOD_3_29171058AC563AE0_OFFSET UNITYSDK_OFFSET(0x15927A50)
#define FLIPBOOKOPERATION_METHOD_3_2FE10362D7B73426_OFFSET UNITYSDK_OFFSET(0x15927A00)
#define FLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_1_OFFSET UNITYSDK_OFFSET(0x15927680)
#define FLIPBOOKOPERATION_METHOD_3_6454AD7212B2C6DE_OFFSET UNITYSDK_OFFSET(0x15927280)
#define FLIPBOOKOPERATION_METHOD_3_85FE18173B52F41D_OFFSET UNITYSDK_OFFSET(0x159275B0)
#define FLIPBOOKOPERATION_METHOD_3_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x159279A0)
#define FLIPBOOKOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x15927950)
#define FLIPBOOKOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15927B50)
#define FLIPBOOKOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15927B30)

inline static constexpr unsigned int FlipBookOperation_TypeDefinitionIndex = 47114;

class FlipBookOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__FlipBookUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FlipBookOperation_TypeDefinitionIndex)->GetStaticField(0x12FC0);
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

	::System::Int32 Method_3_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_3_2FE10362D7B73426(::FiveDimRenderingItem* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_2FE10362D7B73426_OFFSET))(this, a1);
	}

	::System::Void Method_3_29171058AC563AE0(::UnityEngine::Vector4& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + FLIPBOOKOPERATION_METHOD_3_29171058AC563AE0_OFFSET))(this, a1);
	}
};
