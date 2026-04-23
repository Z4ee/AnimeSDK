#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_666;

#define CLASS_1_F55473971DF05D56_METHOD_1_273A009027628C24_1_OFFSET UNITYSDK_OFFSET(0x129E8620)
#define CLASS_1_F55473971DF05D56_METHOD_1_273A009027628C24_OFFSET UNITYSDK_OFFSET(0x129E8500)
#define CLASS_1_F55473971DF05D56__CTOR_OFFSET UNITYSDK_OFFSET(0x129E84F0)

inline static constexpr unsigned int Class_1_F55473971DF05D56_TypeDefinitionIndex = 57694;

class Class_1_F55473971DF05D56 : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_F55473971DF05D56__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_273A009027628C24(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_F55473971DF05D56_METHOD_1_273A009027628C24_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_273A009027628C24_1(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_666* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_666*))((::PBYTE)hIl2Cpp + CLASS_1_F55473971DF05D56_METHOD_1_273A009027628C24_1_OFFSET))(this, a1, a2);
	}
};
