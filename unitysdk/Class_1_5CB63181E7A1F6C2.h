#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_5CB63181E7A1F6C2_METHOD_1_81F3FEDEB8077FC5_OFFSET UNITYSDK_OFFSET(0x1B3CAEB0)
#define CLASS_1_5CB63181E7A1F6C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3CB070)

inline static constexpr unsigned int Class_1_5CB63181E7A1F6C2_TypeDefinitionIndex = 11231;

class Class_1_5CB63181E7A1F6C2 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::RPG::GameCore::HipplenMiniGameType Field_1_2; // 0x1C
	::System::UInt32 Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CB63181E7A1F6C2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_81F3FEDEB8077FC5(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_5CB63181E7A1F6C2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_5CB63181E7A1F6C2*&))((::PBYTE)hIl2Cpp + CLASS_1_5CB63181E7A1F6C2_METHOD_1_81F3FEDEB8077FC5_OFFSET))(a1, a2);
	}
};
