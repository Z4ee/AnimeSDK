#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6B6ABCFFA3C00A45_CLASS_1_1E8DC8FBD51B7520_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6EF10)

inline static constexpr unsigned int Class_2_6B6ABCFFA3C00A45_Class_1_1E8DC8FBD51B7520_1_TypeDefinitionIndex = 71791;

class Class_2_6B6ABCFFA3C00A45_Class_1_1E8DC8FBD51B7520_1 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::UnityEngine::Transform* EGMMEEKIKMA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6B6ABCFFA3C00A45_CLASS_1_1E8DC8FBD51B7520_1__CTOR_OFFSET))(this);
	}
};
