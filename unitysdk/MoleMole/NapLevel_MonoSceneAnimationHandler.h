#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1A07023AFF917E15.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x17927720)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x179276D0)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONINTERRUPT_OFFSET UNITYSDK_OFFSET(0x179277E0)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x17927770)
#define MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17927830)

namespace MoleMole
{
	inline static constexpr unsigned int NapLevel_MonoSceneAnimationHandler_TypeDefinitionIndex = 48511;

	class NapLevel_MonoSceneAnimationHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONDISABLE_OFFSET))(this);
		}

		::Enum_3_1A07023AFF917E15 OnSceneAnimationPlay(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONPLAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Enum_3_1A07023AFF917E15 OnSceneAnimationInterrupt(::System::String* a1)
		{
			return ((::Enum_3_1A07023AFF917E15(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPLEVEL_MONOSCENEANIMATIONHANDLER_ONSCENEANIMATIONINTERRUPT_OFFSET))(this, a1);
		}
	};
}
