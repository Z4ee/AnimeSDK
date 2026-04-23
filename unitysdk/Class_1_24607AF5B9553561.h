#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_24607AF5B9553561_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x1897F7E0)
#define CLASS_1_24607AF5B9553561__CTOR_OFFSET UNITYSDK_OFFSET(0x1897FA90)

inline static constexpr unsigned int Class_1_24607AF5B9553561_TypeDefinitionIndex = 13212;

class Class_1_24607AF5B9553561 : public ::System::Object
{
public:
	::System::UInt32 Field_1_5; // 0x10
	::System::UInt32 Field_1_0; // 0x14
	::RPG::Client::TextID Field_1_2; // 0x18
	::RPG::Client::TextID Field_1_3; // 0x28
	::System::UInt32 Field_1_1; // 0x38
	::System::UInt32 Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24607AF5B9553561__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_24607AF5B9553561*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_24607AF5B9553561*&))((::PBYTE)hIl2Cpp + CLASS_1_24607AF5B9553561_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
