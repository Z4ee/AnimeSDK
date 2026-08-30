#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_131.h"

namespace RPG::GameCore { class AdventureHitConfig; }

#define CLASS_2_EDD0929F76C2AE5B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF9FF0)

inline static constexpr unsigned int Class_2_EDD0929F76C2AE5B_TypeDefinitionIndex = 57206;

class Class_2_EDD0929F76C2AE5B : public ::Class_1_43BD383C98B4C0C5_131
{
public:
	::RPG::GameCore::AdventureHitConfig* MBOFOKEJDDE; // 0x10
	::System::Single NAJMFEEKEJN; // 0x18
	::System::Single GNFOONMKHMM; // 0x1C
	::System::Single AHEFMJDBGOL; // 0x20
	::System::Single AIGMFDHCBCD; // 0x24
	::System::Single IODDGOBACDE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDD0929F76C2AE5B__CTOR_OFFSET))(this);
	}
};
