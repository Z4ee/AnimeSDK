#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CD8A00A916F754FE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A7CE96953806D8B2;
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayerLockRangeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_5863CECBF1A58D06_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15722020)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15722240)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_1ABD3ED38158BF07_OFFSET UNITYSDK_OFFSET(0x15722630)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_3BB5D2EC283E3034_OFFSET UNITYSDK_OFFSET(0x157221B0)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_5626D10DDE8F3988_OFFSET UNITYSDK_OFFSET(0x15723120)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_5F57EE41996C2D90_OFFSET UNITYSDK_OFFSET(0x15722A10)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_77ACBD7BC5408846_OFFSET UNITYSDK_OFFSET(0x157220A0)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_AE0EBABE679B6632_OFFSET UNITYSDK_OFFSET(0x15723570)
#define CLASS_1_5863CECBF1A58D06__CTOR_OFFSET UNITYSDK_OFFSET(0x157219F0)

inline static constexpr unsigned int Class_1_5863CECBF1A58D06_TypeDefinitionIndex = 60906;

class Class_1_5863CECBF1A58D06 : public ::System::Object
{
public:
	// static const ::System::Single BAHOMNMNIFM; // 0x0
	::Class_1_A7CE96953806D8B2* FCIENMANDEG; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BHAKAOEDEII; // 0x18
	::UnityEngine::Transform* IFFOHHFHPDO; // 0x20
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* PPLFJBHKPDG; // 0x28
	::Il2CppArray<::UnityEngine::RaycastHit>* CIECEBIKPMP; // 0x30
	::System::Single OCGFPOBMDKF; // 0x38
	::System::Single BBGJMDDEKIC; // 0x3C
	::UnityEngine::Vector3 AFJPJMACFPP; // 0x40
	::System::Single NEJLFGKIEMM; // 0x4C
	::System::Single NCGNANEMDCF; // 0x50
	::UnityEngine::Vector3 GCDKCNKNDEN; // 0x54
	::System::Single DKBKELBFMCD; // 0x60
	::Struct_2_CD8A00A916F754FE ILNDMCGIHFH; // 0x64
	::System::Single JLDNDCNNBCL; // 0xC4
	::System::Single PHFMMMBEDKD; // 0xC8
	::System::Single MFOOBPJLGKG; // 0xCC
	::System::Single EEAAFHMHFFB; // 0xD0

	::System::Void _ctor(::RPG::GameCore::PlayerLockRangeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerLockRangeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_77ACBD7BC5408846(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_77ACBD7BC5408846_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BB5D2EC283E3034(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_3BB5D2EC283E3034_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Boolean Method_1_1ABD3ED38158BF07(::RPG::GameCore::EntityTimeRewindComponent* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_1ABD3ED38158BF07_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5F57EE41996C2D90(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::GameEntity* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_5F57EE41996C2D90_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_5626D10DDE8F3988(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Collider* a2, ::System::Boolean& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_5626D10DDE8F3988_OFFSET))(this, a1, a2, a3);
	}

	::RPG::GameCore::GameEntity* Method_1_AE0EBABE679B6632()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_AE0EBABE679B6632_OFFSET))(this);
	}
};
