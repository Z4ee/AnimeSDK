#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDRIMatStateOperation.h"

class FiveDimRenderingItem;

#define FDRIDISSOLVEOPERATION_METHOD_3_4E6960335B200E06_OFFSET UNITYSDK_OFFSET(0x1365FC60)
#define FDRIDISSOLVEOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x136600A0)
#define FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_1_OFFSET UNITYSDK_OFFSET(0x1365FD50)
#define FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_OFFSET UNITYSDK_OFFSET(0x1365F890)
#define FDRIDISSOLVEOPERATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13660110)
#define FDRIDISSOLVEOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x136600F0)

inline static constexpr unsigned int FDRIDissolveOperation_TypeDefinitionIndex = 44467;

class FDRIDissolveOperation : public ::FDRIMatStateOperation
{
public:
	static ::System::Int32* StaticGet__DissolveUseCustomData()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FDRIDissolveOperation_TypeDefinitionIndex)->GetStaticField(0xE9C0);
	}
	::System::Single DissolveRate; // 0x20
	::System::Single DissolveScale; // 0x24
	::System::Boolean DissolveON; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION__CCTOR_OFFSET))();
	}

	::System::Void Method_3_FDBBD6114921827A(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_OFFSET))(this, a1);
	}

	::System::Void Method_3_4E6960335B200E06(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_4E6960335B200E06_OFFSET))(this, a1);
	}

	::System::Void Method_3_FDBBD6114921827A_1(::FiveDimRenderingItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::FiveDimRenderingItem*))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_FDBBD6114921827A_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDRIDISSOLVEOPERATION_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
