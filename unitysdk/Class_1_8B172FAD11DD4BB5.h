#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_600;
class Class_1_8F8B7368C48977DE;
class Class_1_B31117A1E82937F5;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_8B172FAD11DD4BB5_METHOD_1_08C58BF96A41DA20_OFFSET UNITYSDK_OFFSET(0xE5D7360)
#define CLASS_1_8B172FAD11DD4BB5_METHOD_1_14CA6E9DE871D04A_1_OFFSET UNITYSDK_OFFSET(0xE5D71E0)
#define CLASS_1_8B172FAD11DD4BB5_METHOD_1_14CA6E9DE871D04A_OFFSET UNITYSDK_OFFSET(0xE5D6EC0)
#define CLASS_1_8B172FAD11DD4BB5_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0xE5D7620)
#define CLASS_1_8B172FAD11DD4BB5_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0xE5D7040)
#define CLASS_1_8B172FAD11DD4BB5__CTOR_OFFSET UNITYSDK_OFFSET(0xE5D7740)

inline static constexpr unsigned int Class_1_8B172FAD11DD4BB5_TypeDefinitionIndex = 57232;

class Class_1_8B172FAD11DD4BB5 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_600* CONIDCGICDD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B172FAD11DD4BB5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_14CA6E9DE871D04A(::RPG::GameCore::GameEntity* a1, ::Class_1_B31117A1E82937F5* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_B31117A1E82937F5*))((::PBYTE)hIl2Cpp + CLASS_1_8B172FAD11DD4BB5_METHOD_1_14CA6E9DE871D04A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_14CA6E9DE871D04A_1(::RPG::GameCore::GameEntity* a1, ::Class_1_8F8B7368C48977DE* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_8F8B7368C48977DE*))((::PBYTE)hIl2Cpp + CLASS_1_8B172FAD11DD4BB5_METHOD_1_14CA6E9DE871D04A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B172FAD11DD4BB5_METHOD_1_F5447CD65612575D_OFFSET))(this);
	}

	::System::Boolean Method_1_08C58BF96A41DA20(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::System::Boolean& a4, ::UnityEngine::Vector3& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_8B172FAD11DD4BB5_METHOD_1_08C58BF96A41DA20_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B172FAD11DD4BB5_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}
};
