#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }

#define CLASS_1_F0908146372F9108_GETBOUNDCENTER_OFFSET UNITYSDK_OFFSET(0x17F8FA80)
#define CLASS_1_F0908146372F9108_GETRECT_OFFSET UNITYSDK_OFFSET(0x17F8FAF0)
#define CLASS_1_F0908146372F9108__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8F880)

inline static constexpr unsigned int Class_1_F0908146372F9108_TypeDefinitionIndex = 47964;

class Class_1_F0908146372F9108 : public ::System::Object
{
public:
	::UnityEngine::Bounds AFFLPJCLPMG; // 0x10

	::System::Void _ctor(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_F0908146372F9108__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 GetBoundCenter()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0908146372F9108_GETBOUNDCENTER_OFFSET))(this);
	}

	::UnityEngine::Rect GetRect()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0908146372F9108_GETRECT_OFFSET))(this);
	}
};
