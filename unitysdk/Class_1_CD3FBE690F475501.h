#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Foundation/FixedArray8_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EB17FFFFC6F5C998;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_CD3FBE690F475501_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1AC29C50)
#define CLASS_1_CD3FBE690F475501_METHOD_1_2A0F87BBFF6387F7_OFFSET UNITYSDK_OFFSET(0x1AC29E30)
#define CLASS_1_CD3FBE690F475501_METHOD_1_C14045483B1EE7A4_OFFSET UNITYSDK_OFFSET(0x1AC29BB0)
#define CLASS_1_CD3FBE690F475501__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC29BA0)

inline static constexpr unsigned int Class_1_CD3FBE690F475501_TypeDefinitionIndex = 42339;

class Class_1_CD3FBE690F475501 : public ::System::Object
{
public:
	::Class_1_EB17FFFFC6F5C998* Field_1_20; // 0x10
	::Class_3_D6DA183EF60F02C8* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_18; // 0x20
	::UnityEngine::AsyncOperation* Field_1_15; // 0x28
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_1_21; // 0x30
	::Class_3_4875884AB352B34E* Field_1_2; // 0x38
	::UnityEngine::GameObject* Field_1_13; // 0x40
	::System::Collections::Generic::List_1<::UnityEngine::AnimatorStateInfo>* Field_1_19; // 0x48
	::Foundation::AssetRequestHandle Field_1_14; // 0x50
	::System::UInt32 Field_1_0; // 0x70
	::System::Boolean Field_1_6; // 0x74
	::System::Boolean Field_1_9; // 0x75
	::System::UInt32 Field_1_7; // 0x78
	::UnityEngine::Quaternion Field_1_10; // 0x7C
	::Foundation::FixedArray8_1<::System::Double> Field_1_17; // 0x90
	::Foundation::FixedArray8_1<::System::Single> Field_1_23; // 0xD0
	::UnityEngine::Vector3 Field_1_11; // 0xF0
	::System::Boolean Field_1_4; // 0xFC
	::System::Boolean Field_1_5; // 0xFD
	::System::Boolean Field_1_12; // 0xFE
	::System::Boolean Field_1_22; // 0xFF
	::Foundation::FixedArray8_1<::System::Single> Field_1_16; // 0x100
	::UnityEngine::Vector3 Field_1_8; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_C14045483B1EE7A4(::Class_1_CD3FBE690F475501* a1)
	{
		return ((::System::Void(*)(::Class_1_CD3FBE690F475501*))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_METHOD_1_C14045483B1EE7A4_OFFSET))(a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	static ::Class_1_CD3FBE690F475501* Method_1_2A0F87BBFF6387F7()
	{
		return ((::Class_1_CD3FBE690F475501*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3FBE690F475501_METHOD_1_2A0F87BBFF6387F7_OFFSET))();
	}
};
