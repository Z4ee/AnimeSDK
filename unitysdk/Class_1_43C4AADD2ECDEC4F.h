#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_43C4AADD2ECDEC4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1363F7E0)
#define CLASS_1_43C4AADD2ECDEC4F_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1363F840)
#define CLASS_1_43C4AADD2ECDEC4F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1363FA00)
#define CLASS_1_43C4AADD2ECDEC4F_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1363FAB0)
#define CLASS_1_43C4AADD2ECDEC4F_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x1363FBD0)
#define CLASS_1_43C4AADD2ECDEC4F_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x1363FB30)
#define CLASS_1_43C4AADD2ECDEC4F_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1363FC10)
#define CLASS_1_43C4AADD2ECDEC4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1363FC50)

inline static constexpr unsigned int Class_1_43C4AADD2ECDEC4F_TypeDefinitionIndex = 64794;

class Class_1_43C4AADD2ECDEC4F : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43C4AADD2ECDEC4F_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}
};
