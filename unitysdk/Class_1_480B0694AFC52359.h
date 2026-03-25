#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_980894BED8163CEE;

#define CLASS_1_480B0694AFC52359_METHOD_1_5571B0305629FE12_OFFSET UNITYSDK_OFFSET(0x17929C00)
#define CLASS_1_480B0694AFC52359__CTOR_OFFSET UNITYSDK_OFFSET(0x17929E40)

inline static constexpr unsigned int Class_1_480B0694AFC52359_TypeDefinitionIndex = 14153;

class Class_1_480B0694AFC52359 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_980894BED8163CEE*>* Field_1_4; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::RPG::GameCore::CombatPowerRelicRarityType Field_1_1; // 0x1C
	::RPG::GameCore::UpgradeAvatarSubRelicType Field_1_0; // 0x20
	::RPG::GameCore::RelicType Field_1_3; // 0x24
	::System::UInt32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_480B0694AFC52359__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_5571B0305629FE12(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_480B0694AFC52359*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_480B0694AFC52359*&))((::PBYTE)hIl2Cpp + CLASS_1_480B0694AFC52359_METHOD_1_5571B0305629FE12_OFFSET))(a1, a2);
	}
};
