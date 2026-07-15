#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinCaseBoardAvatarType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5D742007D62BA318_METHOD_1_1FAE1389D4EFD9B1_OFFSET UNITYSDK_OFFSET(0x193D3F60)
#define CLASS_1_5D742007D62BA318__CTOR_OFFSET UNITYSDK_OFFSET(0x193D4230)

inline static constexpr unsigned int Class_1_5D742007D62BA318_TypeDefinitionIndex = 11175;

class Class_1_5D742007D62BA318 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::RPG::GameCore::FateRinCaseBoardAvatarType Field_1_6; // 0x40
	::System::UInt32 Field_1_7; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D742007D62BA318__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_1FAE1389D4EFD9B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5D742007D62BA318*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5D742007D62BA318*&))((::PBYTE)hIl2Cpp + CLASS_1_5D742007D62BA318_METHOD_1_1FAE1389D4EFD9B1_OFFSET))(a1, a2);
	}
};
