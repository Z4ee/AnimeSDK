#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7C6CB4240EC36796_2_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x14D1A2B0)
#define CLASS_1_7C6CB4240EC36796_2_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x14D1A340)
#define CLASS_1_7C6CB4240EC36796_2__CTOR_OFFSET UNITYSDK_OFFSET(0x14D1A3B0)

inline static constexpr unsigned int Class_1_7C6CB4240EC36796_2_TypeDefinitionIndex = 70600;

class Class_1_7C6CB4240EC36796_2 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_2__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_2_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_2_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
