#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_96AA239AB4E18A9D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F04300)
#define CLASS_1_96AA239AB4E18A9D_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x17F043C0)
#define CLASS_1_96AA239AB4E18A9D_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x17F04650)
#define CLASS_1_96AA239AB4E18A9D_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x17F047E0)
#define CLASS_1_96AA239AB4E18A9D_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x17F04960)
#define CLASS_1_96AA239AB4E18A9D_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x17F04860)
#define CLASS_1_96AA239AB4E18A9D_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x17F049A0)
#define CLASS_1_96AA239AB4E18A9D__CTOR_OFFSET UNITYSDK_OFFSET(0x17F049E0)

inline static constexpr unsigned int Class_1_96AA239AB4E18A9D_TypeDefinitionIndex = 66195;

class Class_1_96AA239AB4E18A9D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96AA239AB4E18A9D_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}
};
