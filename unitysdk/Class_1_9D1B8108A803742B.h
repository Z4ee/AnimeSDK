#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_51F602F076592C12.h"
#include "unitysdk/System/Object.h"

class Class_1_AB4B43C9994C81FB;
namespace RPG::GameCore { class LittleGameCustomVisibilityConfig; }

#define CLASS_1_9D1B8108A803742B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB76C10)
#define CLASS_1_9D1B8108A803742B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76C70)

inline static constexpr unsigned int Class_1_9D1B8108A803742B_TypeDefinitionIndex = 43299;

class Class_1_9D1B8108A803742B : public ::System::Object
{
public:
	::Struct_2_51F602F076592C12 PBOCJBPJJOE; // 0x10
	::RPG::GameCore::LittleGameCustomVisibilityConfig* EABKOHGCHFP; // 0x20
	::Class_1_AB4B43C9994C81FB* NNANJMDMAOC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D1B8108A803742B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D1B8108A803742B_CLEAR_OFFSET))(this);
	}
};
