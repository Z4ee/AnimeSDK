#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_8C2974ED0C175887_METHOD_1_BA928C31B09C0D39_OFFSET UNITYSDK_OFFSET(0x103CD3A0)
#define CLASS_1_8C2974ED0C175887__CTOR_OFFSET UNITYSDK_OFFSET(0x103CD780)

inline static constexpr unsigned int Class_1_8C2974ED0C175887_TypeDefinitionIndex = 13603;

class Class_1_8C2974ED0C175887 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x40
	::System::UInt32 Field_1_6; // 0x44
	::RPG::Client::TextID Field_1_7; // 0x48
	::System::UInt32 Field_1_8; // 0x58
	::System::UInt32 Field_1_9; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C2974ED0C175887__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_BA928C31B09C0D39(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_8C2974ED0C175887*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_8C2974ED0C175887*&))((::PBYTE)hIl2Cpp + CLASS_1_8C2974ED0C175887_METHOD_1_BA928C31B09C0D39_OFFSET))(a1, a2);
	}
};
