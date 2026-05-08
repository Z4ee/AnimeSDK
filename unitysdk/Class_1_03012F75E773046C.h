#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_03012F75E773046C_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x17F8FFD0)
#define CLASS_1_03012F75E773046C_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17F8FFC0)
#define CLASS_1_03012F75E773046C__CTOR_OFFSET UNITYSDK_OFFSET(0x17F90010)

inline static constexpr unsigned int Class_1_03012F75E773046C_TypeDefinitionIndex = 68931;

class Class_1_03012F75E773046C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03012F75E773046C_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}
};
