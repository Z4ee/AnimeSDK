#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_6613F839F709F8CB_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x18B98FD0)
#define CLASS_1_6613F839F709F8CB__CTOR_OFFSET UNITYSDK_OFFSET(0x18B99310)

inline static constexpr unsigned int Class_1_6613F839F709F8CB_TypeDefinitionIndex = 14173;

class Class_1_6613F839F709F8CB : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::System::String* Field_1_6; // 0x18
	::System::String* Field_1_5; // 0x20
	::RPG::GameCore::RogueTournMarkType Field_1_1; // 0x28
	::RPG::GameCore::RogueTournRoomType Field_1_0; // 0x2C
	::RPG::Client::TextID Field_1_2; // 0x30
	::RPG::Client::TextID Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6613F839F709F8CB__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_6613F839F709F8CB*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_6613F839F709F8CB*&))((::PBYTE)hIl2Cpp + CLASS_1_6613F839F709F8CB_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
