#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
#include "unitysdk/Struct_2_F7888AC8242D2E96.h"
#include "unitysdk/System/Object.h"

class Class_1_8279BFFA57BC2D0E;
class Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }

#define CLASS_1_9CC2555EB23D9C1C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136B8FE0)
#define CLASS_1_9CC2555EB23D9C1C_GET_INFEVER_OFFSET UNITYSDK_OFFSET(0x136BA320)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_01F4392F5E95487D_OFFSET UNITYSDK_OFFSET(0x136B9B10)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_373DDB49638AF10B_OFFSET UNITYSDK_OFFSET(0x136BA0D0)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_3CBEECBF98D416CD_OFFSET UNITYSDK_OFFSET(0x136B91B0)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_4F9EF763A05B12C4_OFFSET UNITYSDK_OFFSET(0x136B9130)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_51521C74BCE1597B_OFFSET UNITYSDK_OFFSET(0x136BA1E0)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_5C3494A3B250FBC5_OFFSET UNITYSDK_OFFSET(0x136B9030)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_5CF2D44BB37E9C8B_OFFSET UNITYSDK_OFFSET(0x136B92D0)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_6181CCC9403E3D45_OFFSET UNITYSDK_OFFSET(0x136B9E10)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_87ABDF7E53C71B00_OFFSET UNITYSDK_OFFSET(0x136BA170)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x136BA310)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_E7654E98C1CAC0C6_OFFSET UNITYSDK_OFFSET(0x136B93B0)
#define CLASS_1_9CC2555EB23D9C1C_METHOD_1_F1AB25067DE4DF8E_OFFSET UNITYSDK_OFFSET(0x136BA260)
#define CLASS_1_9CC2555EB23D9C1C_SET_INFEVER_OFFSET UNITYSDK_OFFSET(0x136BA330)
#define CLASS_1_9CC2555EB23D9C1C__CTOR_OFFSET UNITYSDK_OFFSET(0x136B8FC0)

inline static constexpr unsigned int Class_1_9CC2555EB23D9C1C_TypeDefinitionIndex = 52544;

class Class_1_9CC2555EB23D9C1C : public ::System::Object
{
public:
	::Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96* Field_1_0; // 0x10
	::RPG::GameCore::TurnBasedGameMode* Field_1_1; // 0x18
	::Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96* Field_1_2; // 0x20
	::System::Boolean _InFever_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5C3494A3B250FBC5(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_5C3494A3B250FBC5_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_4F9EF763A05B12C4(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_4F9EF763A05B12C4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3CBEECBF98D416CD(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_3CBEECBF98D416CD_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_E7654E98C1CAC0C6(::RPG::GameCore::TeamType a1, ::RPG::GameCore::VersusBarPropertyType a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamType, ::RPG::GameCore::VersusBarPropertyType, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_E7654E98C1CAC0C6_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_373DDB49638AF10B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_373DDB49638AF10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_51521C74BCE1597B(::Class_1_8279BFFA57BC2D0E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8279BFFA57BC2D0E*))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_51521C74BCE1597B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1AB25067DE4DF8E(::Struct_2_F7888AC8242D2E96 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F7888AC8242D2E96))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_F1AB25067DE4DF8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_01F4392F5E95487D(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_01F4392F5E95487D_OFFSET))(this, a1);
	}

	::Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96* Method_1_5CF2D44BB37E9C8B(::RPG::GameCore::TeamType a1)
	{
		return ((::Class_1_9CC2555EB23D9C1C_Class_1_C086B1B4F7274B96*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_5CF2D44BB37E9C8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_87ABDF7E53C71B00(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_87ABDF7E53C71B00_OFFSET))(this, a1);
	}

	::System::Void Method_1_6181CCC9403E3D45(::RPG::GameCore::TeamType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_6181CCC9403E3D45_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::System::Boolean get_InFever()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_GET_INFEVER_OFFSET))(this);
	}

	::System::Void set_InFever(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CC2555EB23D9C1C_SET_INFEVER_OFFSET))(this, a1);
	}
};
