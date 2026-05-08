#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_0D5FDCFAC15CBA6B_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x127CFA20)
#define CLASS_1_0D5FDCFAC15CBA6B__CTOR_OFFSET UNITYSDK_OFFSET(0x127CF940)

inline static constexpr unsigned int Class_1_0D5FDCFAC15CBA6B_TypeDefinitionIndex = 74560;

class Class_1_0D5FDCFAC15CBA6B : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_4; // 0x30
	::System::Single Field_1_7; // 0x3C
	::UnityEngine::Vector3 Field_1_5; // 0x40
	::UnityEngine::Vector3 Field_1_6; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D5FDCFAC15CBA6B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D5FDCFAC15CBA6B_METHOD_1_1290EA767C459179_OFFSET))(this);
	}
};
