#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_80FCC156EBF58EC5__CTOR_OFFSET UNITYSDK_OFFSET(0x1537FCD0)

inline static constexpr unsigned int Class_1_80FCC156EBF58EC5_TypeDefinitionIndex = 53928;

class Class_1_80FCC156EBF58EC5 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Vector3>* Field_1_2; // 0x10
	::System::Action_1<::UnityEngine::Vector3>* Field_1_1; // 0x18
	::System::Action_1<::System::Single>* Field_1_5; // 0x20
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_4; // 0x28
	::System::Action_1<::UnityEngine::Vector3>* Field_1_7; // 0x30
	::System::Action_1<::UnityEngine::Vector3>* Field_1_0; // 0x38
	::System::Action_1<::UnityEngine::Vector3>* Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80FCC156EBF58EC5__CTOR_OFFSET))(this);
	}
};
