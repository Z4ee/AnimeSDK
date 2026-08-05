#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyBlendData.h"
#include "unitysdk/MoleMole/HollowChessboard/ColorModifyInfo.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9CFA2C562F612E08_CLASS_1_D3EB61F136290F79__CTOR_OFFSET UNITYSDK_OFFSET(0x13E33FC0)

inline static constexpr unsigned int Class_1_9CFA2C562F612E08_Class_1_D3EB61F136290F79_TypeDefinitionIndex = 76906;

class Class_1_9CFA2C562F612E08_Class_1_D3EB61F136290F79 : public ::System::Object
{
public:
	::System::Nullable_1<::MoleMole::HollowChessboard::ColorModifyBlendData> Field_1_7; // 0x10
	::MoleMole::HollowChessboard::ColorModifyInfo Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CFA2C562F612E08_CLASS_1_D3EB61F136290F79__CTOR_OFFSET))(this);
	}
};
