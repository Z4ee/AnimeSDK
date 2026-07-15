#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CE573B7713B36D39_TrackPlayingState.h"
#include "unitysdk/System/Object.h"

class Class_1_BCC22A53597699D4;
class Class_1_BE63256C733AE484;

#define CLASS_1_CE573B7713B36D39_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9000F0)
#define CLASS_1_CE573B7713B36D39_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A900170)
#define CLASS_1_CE573B7713B36D39__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9001C0)

inline static constexpr unsigned int Class_1_CE573B7713B36D39_TypeDefinitionIndex = 40804;

class Class_1_CE573B7713B36D39 : public ::System::Object
{
public:
	::Class_1_BE63256C733AE484* Field_1_0; // 0x10
	::Class_1_BCC22A53597699D4* Field_1_1; // 0x18
	::System::Double Field_1_2; // 0x20
	::Class_1_CE573B7713B36D39_TrackPlayingState Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE573B7713B36D39__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE573B7713B36D39_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE573B7713B36D39_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
