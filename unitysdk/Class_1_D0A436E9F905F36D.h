#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B904A96E82E9689A;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D0A436E9F905F36D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A8DA1C0)
#define CLASS_1_D0A436E9F905F36D_METHOD_1_57D80B372834C5D1_1_OFFSET UNITYSDK_OFFSET(0x1A8DA160)
#define CLASS_1_D0A436E9F905F36D_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x1A8DA110)
#define CLASS_1_D0A436E9F905F36D_METHOD_1_A0C13191B8508BD3_OFFSET UNITYSDK_OFFSET(0x1A8DA0B0)
#define CLASS_1_D0A436E9F905F36D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8DA1B0)

inline static constexpr unsigned int Class_1_D0A436E9F905F36D_TypeDefinitionIndex = 57340;

class Class_1_D0A436E9F905F36D : public ::System::Object
{
public:
	::Class_2_B904A96E82E9689A* COGLGAEHBOD; // 0x10

	::System::Void _ctor(::Class_2_B904A96E82E9689A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B904A96E82E9689A*))((::PBYTE)hIl2Cpp + CLASS_1_D0A436E9F905F36D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_A0C13191B8508BD3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D0A436E9F905F36D_METHOD_1_A0C13191B8508BD3_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D0A436E9F905F36D_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D0A436E9F905F36D_METHOD_1_57D80B372834C5D1_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0A436E9F905F36D_DISPOSE_OFFSET))(this);
	}
};
