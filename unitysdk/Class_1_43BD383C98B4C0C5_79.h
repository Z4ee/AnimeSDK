#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43BD383C98B4C0C5_79_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18784090)
#define CLASS_1_43BD383C98B4C0C5_79__CTOR_OFFSET UNITYSDK_OFFSET(0x18784080)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_79_TypeDefinitionIndex = 76327;

class Class_1_43BD383C98B4C0C5_79 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* Field_1_12; // 0x10
	::Il2CppArray<::UnityEngine::Plane>* Field_1_14; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_19; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Vector3>* Field_1_13; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::Single Field_1_0; // 0x34
	::UnityEngine::Matrix4x4 Field_1_15; // 0x38
	::System::Single Field_1_3; // 0x78
	::UnityEngine::Vector3 Field_1_8; // 0x7C
	::System::Single Field_1_7; // 0x88
	::System::Single Field_1_4; // 0x8C
	::UnityEngine::Vector3 Field_1_10; // 0x90
	::System::Single Field_1_6; // 0x9C
	::UnityEngine::Vector3 Field_1_11; // 0xA0
	::System::Single Field_1_1; // 0xAC
	::System::Single Field_1_2; // 0xB0
	::UnityEngine::PhysicsScene Field_1_9; // 0xB4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_79__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_79_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
