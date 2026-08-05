#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1670F1E0)
#define CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1670F180)
#define CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1670F280)
#define CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1670F240)
#define CLASS_1_2BABAD86425D1A28__CTOR_OFFSET UNITYSDK_OFFSET(0x1670F170)

inline static constexpr unsigned int Class_1_2BABAD86425D1A28_TypeDefinitionIndex = 68933;

class Class_1_2BABAD86425D1A28 : public ::System::Object
{
public:
	::Struct_2_90E529DB4DCB014F Field_1_7; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_0; // 0x1C

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::Struct_2_90E529DB4DCB014F a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::Struct_2_90E529DB4DCB014F))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BABAD86425D1A28_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
