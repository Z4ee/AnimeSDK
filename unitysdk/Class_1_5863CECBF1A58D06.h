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

#define CLASS_1_5863CECBF1A58D06_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9360E30)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x9361000)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_1ABD3ED38158BF07_OFFSET UNITYSDK_OFFSET(0x93613E0)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_5626D10DDE8F3988_OFFSET UNITYSDK_OFFSET(0x9361F10)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_5C176A0BF7A7A4BB_OFFSET UNITYSDK_OFFSET(0x9362290)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_5F57EE41996C2D90_OFFSET UNITYSDK_OFFSET(0x93617D0)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_D5386D9FEC9AEC59_OFFSET UNITYSDK_OFFSET(0x9360F70)
#define CLASS_1_5863CECBF1A58D06_METHOD_1_DA7DFC1C4D0CC1B1_OFFSET UNITYSDK_OFFSET(0x9360EB0)
#define CLASS_1_5863CECBF1A58D06__CTOR_OFFSET UNITYSDK_OFFSET(0x93608D0)

inline static constexpr unsigned int Class_1_5863CECBF1A58D06_TypeDefinitionIndex = 56070;

class Class_1_5863CECBF1A58D06 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_17; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::Class_1_A7CE96953806D8B2* Field_1_4; // 0x28
	::Il2CppArray<::UnityEngine::RaycastHit>* Field_1_1; // 0x30
	::System::Single Field_1_10; // 0x38
	::System::Single Field_1_12; // 0x3C
	::UnityEngine::Vector3 Field_1_3; // 0x40
	::System::Single Field_1_14; // 0x4C
	::System::Single Field_1_5; // 0x50
	::System::Single Field_1_16; // 0x54
	::System::Single Field_1_9; // 0x58
	::Struct_2_CD8A00A916F754FE Field_1_8; // 0x5C
	::System::Single Field_1_15; // 0xBC
	::System::Single Field_1_11; // 0xC0
	::System::Single Field_1_13; // 0xC4
	::UnityEngine::Vector3 Field_1_7; // 0xC8

	::System::Void _ctor(::RPG::GameCore::PlayerLockRangeConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayerLockRangeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DA7DFC1C4D0CC1B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_DA7DFC1C4D0CC1B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D5386D9FEC9AEC59(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_D5386D9FEC9AEC59_OFFSET))(this, a1);
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

	::RPG::GameCore::GameEntity* Method_1_5C176A0BF7A7A4BB()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5863CECBF1A58D06_METHOD_1_5C176A0BF7A7A4BB_OFFSET))(this);
	}
};
