#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0F273758E4A50CDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A018C40)
#define CLASS_1_0F273758E4A50CDA_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1A018D00)
#define CLASS_1_0F273758E4A50CDA_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1A018F90)
#define CLASS_1_0F273758E4A50CDA_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x1A019120)
#define CLASS_1_0F273758E4A50CDA_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0x1A019340)
#define CLASS_1_0F273758E4A50CDA_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0x1A0191A0)
#define CLASS_1_0F273758E4A50CDA_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A019380)
#define CLASS_1_0F273758E4A50CDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0193C0)

inline static constexpr unsigned int Class_1_0F273758E4A50CDA_TypeDefinitionIndex = 69237;

class Class_1_0F273758E4A50CDA : public ::System::Object
{
public:
	::UnityEngine::Transform* NHFCGMANFGF; // 0x10
	::System::Boolean KADJIDHNIEM; // 0x18
	::System::Boolean HNALEMBOBFE; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void OnSpawnAsync(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_ONSPAWNASYNC_OFFSET))(this, a1);
	}

	::System::Void OnCancelSpawn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_ONCANCELSPAWN_OFFSET))(this);
	}

	::System::Boolean UseLightWeightDeactive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F273758E4A50CDA_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}
};
