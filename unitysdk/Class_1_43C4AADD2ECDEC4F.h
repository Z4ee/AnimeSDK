#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_43C4AADD2ECDEC4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A09190)
#define CLASS_1_43C4AADD2ECDEC4F_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x10A091F0)
#define CLASS_1_43C4AADD2ECDEC4F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x10A093B0)
#define CLASS_1_43C4AADD2ECDEC4F_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x10A09460)
#define CLASS_1_43C4AADD2ECDEC4F_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x10A09580)
#define CLASS_1_43C4AADD2ECDEC4F_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x10A094E0)
#define CLASS_1_43C4AADD2ECDEC4F_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x10A095C0)
#define CLASS_1_43C4AADD2ECDEC4F__CTOR_OFFSET UNITYSDK_OFFSET(0x10A09600)

inline static constexpr unsigned int Class_1_43C4AADD2ECDEC4F_TypeDefinitionIndex = 56629;

class Class_1_43C4AADD2ECDEC4F : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_2; // 0x10
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x19

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
