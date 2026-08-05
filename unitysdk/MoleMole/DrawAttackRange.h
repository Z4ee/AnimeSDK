#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_DRAWATTACKRANGE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x19BC5EB0)
#define MOLEMOLE_DRAWATTACKRANGE_PAUSE_OFFSET UNITYSDK_OFFSET(0x19BC6100)
#define MOLEMOLE_DRAWATTACKRANGE_PLAY_OFFSET UNITYSDK_OFFSET(0x19BC60B0)
#define MOLEMOLE_DRAWATTACKRANGE_SETATTACKRANGE_OFFSET UNITYSDK_OFFSET(0x19BC6010)
#define MOLEMOLE_DRAWATTACKRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC6160)

namespace MoleMole
{
	inline static constexpr unsigned int DrawAttackRange_TypeDefinitionIndex = 76405;

	class DrawAttackRange : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Field_5_1; // 0x18
		::UnityEngine::Transform* Field_5_0; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_INITIALIZE_OFFSET))(this);
		}

		::System::Void SetAttackRange(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_SETATTACKRANGE_OFFSET))(this, a1);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_PLAY_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DRAWATTACKRANGE_PAUSE_OFFSET))(this);
		}
	};
}
