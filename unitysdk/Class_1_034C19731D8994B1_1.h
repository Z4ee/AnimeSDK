#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0A051985BE5779B7.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimAvatarConfig; }

#define CLASS_1_034C19731D8994B1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C42D860)

inline static constexpr unsigned int Class_1_034C19731D8994B1_1_TypeDefinitionIndex = 41785;

class Class_1_034C19731D8994B1_1 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimAvatarConfig* JIHEDFDCCAD; // 0x10
	::Struct_2_0A051985BE5779B7 GPMGIHIJDFN; // 0x18
	::Struct_2_4C8453486C91E3A1 IPPKEEBMOEA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_034C19731D8994B1_1__CTOR_OFFSET))(this);
	}
};
