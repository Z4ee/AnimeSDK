#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_7665223D60B5573F___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC2B2AF0)
#define CLASS_1_7665223D60B5573F___C__DISPLAYCLASS14_0___OFFSETMODELWHENREADY_B__0_OFFSET UNITYSDK_OFFSET(0xC2B3430)

inline static constexpr unsigned int Class_1_7665223D60B5573F___c__DisplayClass14_0_TypeDefinitionIndex = 60208;

class Class_1_7665223D60B5573F___c__DisplayClass14_0 : public ::System::Object
{
public:
	::UnityEngine::Vector3 offset; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __OffsetModelWhenReady_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_7665223D60B5573F___C__DISPLAYCLASS14_0___OFFSETMODELWHENREADY_B__0_OFFSET))(this, a1);
	}
};
