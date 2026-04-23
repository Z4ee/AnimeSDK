#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_7F77701ED75B8609;
class Class_3_CD04D3296DF4C842_4;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_125B67C2F2D7C6EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A736D0)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_51561B6306F77F3A_OFFSET UNITYSDK_OFFSET(0x12A738F0)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_9DEEA62E1DF23E4E_OFFSET UNITYSDK_OFFSET(0x12A73770)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_A6D9E413B271AA3B_OFFSET UNITYSDK_OFFSET(0x12A73B00)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0x12A735F0)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x12A73960)
#define CLASS_1_125B67C2F2D7C6EE__CTOR_OFFSET UNITYSDK_OFFSET(0x12A74050)

inline static constexpr unsigned int Class_1_125B67C2F2D7C6EE_TypeDefinitionIndex = 72005;

class Class_1_125B67C2F2D7C6EE : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* Field_1_0; // 0x10
	::Class_3_CD04D3296DF4C842_4* Field_1_4; // 0x18
	::RPG::GameCore::TransformComponent* Field_1_1; // 0x20
	::Class_1_7F77701ED75B8609* Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x30
	::System::Boolean Field_1_6; // 0x3C
	::System::Boolean Field_1_5; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B6F0C2C831C5F31A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE_METHOD_1_B6F0C2C831C5F31A_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_9DEEA62E1DF23E4E(::UnityEngine::Vector3 a1, ::Class_3_CD04D3296DF4C842_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_3_CD04D3296DF4C842_4*))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE_METHOD_1_9DEEA62E1DF23E4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51561B6306F77F3A(::UnityEngine::Vector3 a1, ::Class_3_CD04D3296DF4C842_4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_3_CD04D3296DF4C842_4*))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE_METHOD_1_51561B6306F77F3A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_A6D9E413B271AA3B(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_125B67C2F2D7C6EE_METHOD_1_A6D9E413B271AA3B_OFFSET))(this, a1, a2);
	}
};
