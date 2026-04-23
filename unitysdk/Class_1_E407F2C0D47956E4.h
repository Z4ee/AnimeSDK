#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_0C58AD91B0F4D809;
class Class_2_D9D2DA2BB37A3C3D;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_E407F2C0D47956E4_METHOD_1_342851861CBBA705_OFFSET UNITYSDK_OFFSET(0x119621D0)
#define CLASS_1_E407F2C0D47956E4_METHOD_1_5FC9B710B1AB0818_OFFSET UNITYSDK_OFFSET(0x11962680)
#define CLASS_1_E407F2C0D47956E4_METHOD_1_AF255E4EDB275A6C_OFFSET UNITYSDK_OFFSET(0x11962750)
#define CLASS_1_E407F2C0D47956E4_METHOD_1_C349518B6A86AC57_OFFSET UNITYSDK_OFFSET(0x11962530)

inline static constexpr unsigned int Class_1_E407F2C0D47956E4_TypeDefinitionIndex = 55705;

class Class_1_E407F2C0D47956E4 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_342851861CBBA705(::Class_2_D9D2DA2BB37A3C3D*& a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::System::Boolean(*)(::Class_2_D9D2DA2BB37A3C3D*&, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E407F2C0D47956E4_METHOD_1_342851861CBBA705_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_0C58AD91B0F4D809* Method_1_C349518B6A86AC57(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Boolean a4)
	{
		return ((::Class_2_0C58AD91B0F4D809*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E407F2C0D47956E4_METHOD_1_C349518B6A86AC57_OFFSET))(a1, a2, a3, a4);
	}

	static ::RPG::GameCore::GameEntity* Method_1_5FC9B710B1AB0818(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E407F2C0D47956E4_METHOD_1_5FC9B710B1AB0818_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_AF255E4EDB275A6C(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo*& a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*&))((::PBYTE)hIl2Cpp + CLASS_1_E407F2C0D47956E4_METHOD_1_AF255E4EDB275A6C_OFFSET))(a1, a2, a3);
	}
};
