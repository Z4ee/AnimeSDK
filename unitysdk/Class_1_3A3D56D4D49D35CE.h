#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceUnlockConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_3A3D56D4D49D35CE_METHOD_1_239127A8B01A1A3F_OFFSET UNITYSDK_OFFSET(0x1B1FC2A0)
#define CLASS_1_3A3D56D4D49D35CE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1FC3A0)

inline static constexpr unsigned int Class_1_3A3D56D4D49D35CE_TypeDefinitionIndex = 10598;

class Class_1_3A3D56D4D49D35CE : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::GameCore::CakeRaceUnlockConditionType Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A3D56D4D49D35CE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_239127A8B01A1A3F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_3A3D56D4D49D35CE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_3A3D56D4D49D35CE*&))((::PBYTE)hIl2Cpp + CLASS_1_3A3D56D4D49D35CE_METHOD_1_239127A8B01A1A3F_OFFSET))(a1, a2);
	}
};
