#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5610B7568BF432BE_CLASS_1_07A071497BFBCF79__CTOR_OFFSET UNITYSDK_OFFSET(0x170243D0)

inline static constexpr unsigned int Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79_TypeDefinitionIndex = 64780;

class Class_1_5610B7568BF432BE_Class_1_07A071497BFBCF79 : public ::System::Object
{
public:
	::System::UInt64 LikeCount; // 0x10
	::System::Boolean IsLike; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5610B7568BF432BE_CLASS_1_07A071497BFBCF79__CTOR_OFFSET))(this);
	}
};
