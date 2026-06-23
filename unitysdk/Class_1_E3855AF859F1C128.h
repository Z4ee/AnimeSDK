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

#define CLASS_1_E3855AF859F1C128_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1683C360)
#define CLASS_1_E3855AF859F1C128_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x1683C530)
#define CLASS_1_E3855AF859F1C128_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0x1683C5C0)
#define CLASS_1_E3855AF859F1C128__CTOR_OFFSET UNITYSDK_OFFSET(0x1683C350)

inline static constexpr unsigned int Class_1_E3855AF859F1C128_TypeDefinitionIndex = 50296;

class Class_1_E3855AF859F1C128 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_1_15; // 0x10
	::UnityEngine::GameObject* Field_1_16; // 0x18
	::UnityEngine::GameObject* Field_1_13; // 0x20
	::Class_3_D6DA183EF60F02C8* Field_1_1; // 0x28
	::Foundation::AssetRequestHandle Field_1_12; // 0x30
	::UnityEngine::AsyncOperation* Field_1_11; // 0x50
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_21; // 0x58
	::Class_3_4875884AB352B34E* Field_1_0; // 0x60
	::UnityEngine::Vector3 Field_1_7; // 0x68
	::Foundation::FixedArray8_1<::System::Single> Field_1_18; // 0x74
	::System::Boolean Field_1_4; // 0x94
	::System::Boolean Field_1_5; // 0x95
	::System::Boolean Field_1_6; // 0x96
	::System::Boolean Field_1_9; // 0x97
	::UnityEngine::Vector3 Field_1_10; // 0x98
	::Foundation::FixedArray8_1<::System::Single> Field_1_19; // 0xA4
	::System::UInt32 Field_1_3; // 0xC4
	::System::UInt32 Field_1_2; // 0xC8
	::UnityEngine::Quaternion Field_1_8; // 0xCC
	::System::Boolean Field_1_14; // 0xDC
	::System::Boolean Field_1_20; // 0xDD
	::Foundation::FixedArray8_1<::System::Double> Field_1_17; // 0xE0

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
