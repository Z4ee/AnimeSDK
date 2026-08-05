#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7C6CB4240EC36796_1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x185D1C00)
#define CLASS_1_7C6CB4240EC36796_1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x185D1C90)
#define CLASS_1_7C6CB4240EC36796_1__CTOR_OFFSET UNITYSDK_OFFSET(0x185D1D00)

inline static constexpr unsigned int Class_1_7C6CB4240EC36796_1_TypeDefinitionIndex = 52576;

class Class_1_7C6CB4240EC36796_1 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_1__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
