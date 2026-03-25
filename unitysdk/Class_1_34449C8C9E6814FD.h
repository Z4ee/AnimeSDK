#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_34449C8C9E6814FD_METHOD_1_F6FF3DE94D09C840_OFFSET UNITYSDK_OFFSET(0x17945D40)
#define CLASS_1_34449C8C9E6814FD__CTOR_OFFSET UNITYSDK_OFFSET(0x17946060)

inline static constexpr unsigned int Class_1_34449C8C9E6814FD_TypeDefinitionIndex = 10743;

class Class_1_34449C8C9E6814FD : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::String* Field_1_5; // 0x20
	::System::UInt32 Field_1_1; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::RPG::Client::TextID Field_1_4; // 0x30
	::System::UInt32 Field_1_3; // 0x40
	::RPG::GameCore::FateClazzType Field_1_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_34449C8C9E6814FD__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_F6FF3DE94D09C840(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_34449C8C9E6814FD*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_34449C8C9E6814FD*&))((::PBYTE)hIl2Cpp + CLASS_1_34449C8C9E6814FD_METHOD_1_F6FF3DE94D09C840_OFFSET))(a1, a2);
	}
};
