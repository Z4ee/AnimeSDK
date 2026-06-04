#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_B8E38BF47138A2E5;
class Class_2_D9D2DA2BB37A3C3D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_F3F3282D28A6BB22_METHOD_1_5968BF259E66240C_OFFSET UNITYSDK_OFFSET(0xB2BCA70)
#define CLASS_1_F3F3282D28A6BB22_METHOD_1_5FC9B710B1AB0818_OFFSET UNITYSDK_OFFSET(0xB2BCBC0)
#define CLASS_1_F3F3282D28A6BB22_METHOD_1_6234FCE31B609EBC_OFFSET UNITYSDK_OFFSET(0xB2BC700)
#define CLASS_1_F3F3282D28A6BB22_METHOD_1_861F261726C68D0D_OFFSET UNITYSDK_OFFSET(0xB2BCC90)

inline static constexpr unsigned int Class_1_F3F3282D28A6BB22_TypeDefinitionIndex = 56459;

class Class_1_F3F3282D28A6BB22 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6234FCE31B609EBC(::Class_2_D9D2DA2BB37A3C3D*& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::Class_2_D9D2DA2BB37A3C3D*&, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3F3282D28A6BB22_METHOD_1_6234FCE31B609EBC_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_B8E38BF47138A2E5* Method_1_5968BF259E66240C(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::Class_2_B8E38BF47138A2E5*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3F3282D28A6BB22_METHOD_1_5968BF259E66240C_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::GameEntity* Method_1_5FC9B710B1AB0818(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3F3282D28A6BB22_METHOD_1_5FC9B710B1AB0818_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_861F261726C68D0D(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo*& a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_F3F3282D28A6BB22_METHOD_1_861F261726C68D0D_OFFSET))(a1, a2, a3);
	}
};
