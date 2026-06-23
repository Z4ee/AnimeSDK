#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssMapIconBaseController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_257976400FD1B345_METHOD_1_39CDB747AD2E83E5_OFFSET UNITYSDK_OFFSET(0x137E8130)
#define CLASS_1_257976400FD1B345__CTOR_OFFSET UNITYSDK_OFFSET(0x137E8120)

inline static constexpr unsigned int Class_1_257976400FD1B345_TypeDefinitionIndex = 46707;

class Class_1_257976400FD1B345 : public ::System::Object
{
public:
	::MoleMole::UIAbyssMapIconBaseController* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::MoleMole::Vector2Int Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_257976400FD1B345__CTOR_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_39CDB747AD2E83E5()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_257976400FD1B345_METHOD_1_39CDB747AD2E83E5_OFFSET))(this);
	}
};
