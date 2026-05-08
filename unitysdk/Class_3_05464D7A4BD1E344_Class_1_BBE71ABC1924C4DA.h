#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }

#define CLASS_3_05464D7A4BD1E344_CLASS_1_BBE71ABC1924C4DA_METHOD_1_11B1C20FCBBF55BA_OFFSET UNITYSDK_OFFSET(0x136776F0)
#define CLASS_3_05464D7A4BD1E344_CLASS_1_BBE71ABC1924C4DA_METHOD_1_9A1F8A6928985E4C_OFFSET UNITYSDK_OFFSET(0x13677700)
#define CLASS_3_05464D7A4BD1E344_CLASS_1_BBE71ABC1924C4DA__CTOR_OFFSET UNITYSDK_OFFSET(0x136776E0)

inline static constexpr unsigned int Class_3_05464D7A4BD1E344_Class_1_BBE71ABC1924C4DA_TypeDefinitionIndex = 69395;

class Class_3_05464D7A4BD1E344_Class_1_BBE71ABC1924C4DA : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_05464D7A4BD1E344_CLASS_1_BBE71ABC1924C4DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_11B1C20FCBBF55BA(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_05464D7A4BD1E344_CLASS_1_BBE71ABC1924C4DA_METHOD_1_11B1C20FCBBF55BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A1F8A6928985E4C(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_3_05464D7A4BD1E344_CLASS_1_BBE71ABC1924C4DA_METHOD_1_9A1F8A6928985E4C_OFFSET))(this, a1);
	}
};
