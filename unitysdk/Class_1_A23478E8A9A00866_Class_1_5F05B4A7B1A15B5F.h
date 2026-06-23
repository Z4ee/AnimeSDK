#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace System { class Action; }

#define CLASS_1_A23478E8A9A00866_CLASS_1_5F05B4A7B1A15B5F_METHOD_1_A7BF66494A108F42_OFFSET UNITYSDK_OFFSET(0x1A0C7FA0)
#define CLASS_1_A23478E8A9A00866_CLASS_1_5F05B4A7B1A15B5F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C7F90)

inline static constexpr unsigned int Class_1_A23478E8A9A00866_Class_1_5F05B4A7B1A15B5F_TypeDefinitionIndex = 56931;

class Class_1_A23478E8A9A00866_Class_1_5F05B4A7B1A15B5F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_CLASS_1_5F05B4A7B1A15B5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7BF66494A108F42(::MoleMole::Config::ConfigSpecialEffectHitWall* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*))((::PBYTE)hIl2Cpp + CLASS_1_A23478E8A9A00866_CLASS_1_5F05B4A7B1A15B5F_METHOD_1_A7BF66494A108F42_OFFSET))(this, a1);
	}
};
