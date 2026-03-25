#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimMusicInfo; }
namespace System { class String; }

#define CLASS_1_BCC22A53597699D4__CTOR_OFFSET UNITYSDK_OFFSET(0x16838EB0)

inline static constexpr unsigned int Class_1_BCC22A53597699D4_TypeDefinitionIndex = 33648;

class Class_1_BCC22A53597699D4 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_0; // 0x24
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor(::RPG::GameCore::FiveDimMusicInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BCC22A53597699D4__CTOR_OFFSET))(this, a1);
	}
};
