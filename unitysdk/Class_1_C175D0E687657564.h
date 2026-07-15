#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/TargetGenderType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C175D0E687657564_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x1BE90660)
#define CLASS_1_C175D0E687657564__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE90A50)

inline static constexpr unsigned int Class_1_C175D0E687657564_TypeDefinitionIndex = 13932;

class Class_1_C175D0E687657564 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::RPG::Client::TextID Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_4; // 0x38
	::RPG::GameCore::ItemRarity Field_1_5; // 0x48
	::RPG::GameCore::TargetGenderType Field_1_6; // 0x4C
	::System::UInt32 Field_1_7; // 0x50
	::RPG::Client::TextID Field_1_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C175D0E687657564__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C175D0E687657564*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C175D0E687657564*&))((::PBYTE)hIl2Cpp + CLASS_1_C175D0E687657564_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
