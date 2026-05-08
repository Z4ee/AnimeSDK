#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E3855AF859F1C128_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA936780)
#define CLASS_1_E3855AF859F1C128_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0xA936950)
#define CLASS_1_E3855AF859F1C128_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0xA9369E0)
#define CLASS_1_E3855AF859F1C128__CTOR_OFFSET UNITYSDK_OFFSET(0xA936770)

inline static constexpr unsigned int Class_1_E3855AF859F1C128_TypeDefinitionIndex = 44095;

class Class_1_E3855AF859F1C128 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_16; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_1_15; // 0x18
	::UnityEngine::AsyncOperation* Field_1_11; // 0x20
	::Class_3_4875884AB352B34E* Field_1_0; // 0x28
	::Class_3_D6DA183EF60F02C8* Field_1_1; // 0x30
	::Foundation::AssetRequestHandle Field_1_12; // 0x38
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_21; // 0x58
	::UnityEngine::GameObject* Field_1_13; // 0x60
	::Foundation::FixedArray8_1<::System::Double> Field_1_17; // 0x68
	::System::UInt32 Field_1_2; // 0xA8
	::UnityEngine::Vector3 Field_1_7; // 0xAC
	::UnityEngine::Quaternion Field_1_8; // 0xB8
	::System::UInt32 Field_1_3; // 0xC8
	::Foundation::FixedArray8_1<::System::Single> Field_1_18; // 0xCC
	::Foundation::FixedArray8_1<::System::Single> Field_1_19; // 0xEC
	::System::Boolean Field_1_20; // 0x10C
	::System::Boolean Field_1_4; // 0x10D
	::System::Boolean Field_1_9; // 0x10E
	::System::Boolean Field_1_5; // 0x10F
	::System::Boolean Field_1_14; // 0x110
	::System::Boolean Field_1_6; // 0x111
	::UnityEngine::Vector3 Field_1_10; // 0x114

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::Class_1_E3855AF859F1C128* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_E3855AF859F1C128*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}

	static ::System::Void Method_1_C260E39B3046D957(::Class_1_E3855AF859F1C128* a1)
	{
		return ((::System::Void(*)(::Class_1_E3855AF859F1C128*))((::PBYTE)hIl2Cpp + CLASS_1_E3855AF859F1C128_METHOD_1_C260E39B3046D957_OFFSET))(a1);
	}
};
