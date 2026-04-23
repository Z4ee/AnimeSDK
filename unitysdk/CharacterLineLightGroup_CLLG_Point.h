#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CHARACTERLINELIGHTGROUP_CLLG_POINT__CTOR_OFFSET UNITYSDK_OFFSET(0xACFAAA0)

inline static constexpr unsigned int CharacterLineLightGroup_CLLG_Point_TypeDefinitionIndex = 44210;

class CharacterLineLightGroup_CLLG_Point : public ::System::Object
{
public:
	::UnityEngine::Vector3 pos; // 0x10
	::UnityEngine::Vector3 dir; // 0x1C
	::UnityEngine::Color color; // 0x28
	::System::Single intensity; // 0x38
	::UnityEngine::GameObject* Handle; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Lines; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHARACTERLINELIGHTGROUP_CLLG_POINT__CTOR_OFFSET))(this);
	}
};
