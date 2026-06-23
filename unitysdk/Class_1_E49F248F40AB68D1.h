#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/MoleMole/HollowChessboard/RangeMask.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E49F248F40AB68D1_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1620AB10)
#define CLASS_1_E49F248F40AB68D1_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1620AB50)
#define CLASS_1_E49F248F40AB68D1__CTOR_OFFSET UNITYSDK_OFFSET(0x1620ABC0)

inline static constexpr unsigned int Class_1_E49F248F40AB68D1_TypeDefinitionIndex = 56953;

class Class_1_E49F248F40AB68D1 : public ::System::Object
{
public:
	::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> Field_1_2; // 0x10
	::MoleMole::HollowChessboard::RangeMask Field_1_0; // 0x50
	::MoleMole::HollowChessboard::ColorModifyInfo Field_1_1; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E49F248F40AB68D1__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E49F248F40AB68D1_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E49F248F40AB68D1_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
