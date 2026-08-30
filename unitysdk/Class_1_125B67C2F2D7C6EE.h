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

#define CLASS_1_125B67C2F2D7C6EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A78EE0)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_51561B6306F77F3A_OFFSET UNITYSDK_OFFSET(0x19A79100)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_9DEEA62E1DF23E4E_OFFSET UNITYSDK_OFFSET(0x19A78F70)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_A6D9E413B271AA3B_OFFSET UNITYSDK_OFFSET(0x19A79310)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_B6F0C2C831C5F31A_OFFSET UNITYSDK_OFFSET(0x19A78E00)
#define CLASS_1_125B67C2F2D7C6EE_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x19A79170)
#define CLASS_1_125B67C2F2D7C6EE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A79860)

inline static constexpr unsigned int Class_1_125B67C2F2D7C6EE_TypeDefinitionIndex = 78037;

class Class_1_125B67C2F2D7C6EE : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_4* BFJBKDGAJMO; // 0x10
	::RPG::GameCore::TransformComponent* NIDHDAOGNKO; // 0x18
	::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x20
	::Class_1_7F77701ED75B8609* BBNMHJBAFDD; // 0x28
	::System::Boolean NHHALCBIMOF; // 0x30
	::System::Boolean PHLFIJDNBGF; // 0x31
	::UnityEngine::Vector3 KOGCFJCMFLD; // 0x34

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
