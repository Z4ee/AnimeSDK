#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimMusicInfo; }
namespace System { class String; }

#define CLASS_1_BCC22A53597699D4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C52E120)

inline static constexpr unsigned int Class_1_BCC22A53597699D4_TypeDefinitionIndex = 41995;

class Class_1_BCC22A53597699D4 : public ::System::Object
{
public:
	::System::String* BGEHFMADMJH; // 0x10
	::System::String* HNKGENHMPGH; // 0x18
	::System::Single DIFPNCHMJBG; // 0x20
	::System::Single PNOPJBELEDM; // 0x24
	::System::Single JBCFPAEELBL; // 0x28
	::System::Single IFEPJHGNCOI; // 0x2C

	::System::Void _ctor(::RPG::GameCore::FiveDimMusicInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimMusicInfo*))((::PBYTE)hIl2Cpp + CLASS_1_BCC22A53597699D4__CTOR_OFFSET))(this, a1);
	}
};
