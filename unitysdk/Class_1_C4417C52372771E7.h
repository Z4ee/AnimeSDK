#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C3A033C60E10FDC7;
class Class_1_D4A8E06EA4E680A0;
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }

#define CLASS_1_C4417C52372771E7_METHOD_1_1143474511DAA1F9_OFFSET UNITYSDK_OFFSET(0xB5176A0)
#define CLASS_1_C4417C52372771E7_METHOD_1_1985768AC5EB80CD_OFFSET UNITYSDK_OFFSET(0xB516DA0)
#define CLASS_1_C4417C52372771E7_METHOD_1_9444915ED5BDE563_OFFSET UNITYSDK_OFFSET(0xB516BA0)
#define CLASS_1_C4417C52372771E7_METHOD_1_98FE8344617B99D4_OFFSET UNITYSDK_OFFSET(0xB516D10)

inline static constexpr unsigned int Class_1_C4417C52372771E7_TypeDefinitionIndex = 65000;

class Class_1_C4417C52372771E7 : public ::System::Object
{
public:
	static ::Class_1_D4A8E06EA4E680A0* Method_1_9444915ED5BDE563(::RPG::GameCore::CRPVirtualCameraConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_D4A8E06EA4E680A0*(*)(::RPG::GameCore::CRPVirtualCameraConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_C4417C52372771E7_METHOD_1_9444915ED5BDE563_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_D4A8E06EA4E680A0* Method_1_98FE8344617B99D4(::Class_1_C3A033C60E10FDC7* a1)
	{
		return ((::Class_1_D4A8E06EA4E680A0*(*)(::Class_1_C3A033C60E10FDC7*))((::PBYTE)hIl2Cpp + CLASS_1_C4417C52372771E7_METHOD_1_98FE8344617B99D4_OFFSET))(a1);
	}

	static ::System::Void Method_1_1985768AC5EB80CD(::Class_1_C3A033C60E10FDC7* a1, ::Class_1_D4A8E06EA4E680A0* a2)
	{
		return ((::System::Void(*)(::Class_1_C3A033C60E10FDC7*, ::Class_1_D4A8E06EA4E680A0*))((::PBYTE)hIl2Cpp + CLASS_1_C4417C52372771E7_METHOD_1_1985768AC5EB80CD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1143474511DAA1F9(::Class_1_C3A033C60E10FDC7* a1, ::Class_1_D4A8E06EA4E680A0* a2, ::RPG::GameCore::GameWorld* a3)
	{
		return ((::System::Void(*)(::Class_1_C3A033C60E10FDC7*, ::Class_1_D4A8E06EA4E680A0*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CLASS_1_C4417C52372771E7_METHOD_1_1143474511DAA1F9_OFFSET))(a1, a2, a3);
	}
};
