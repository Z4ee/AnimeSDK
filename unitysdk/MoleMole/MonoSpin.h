#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOSPIN_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x170311B0)
#define MOLEMOLE_MONOSPIN_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x170313A0)
#define MOLEMOLE_MONOSPIN_UPDATE_OFFSET UNITYSDK_OFFSET(0x17031160)
#define MOLEMOLE_MONOSPIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17031350)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSpin_TypeDefinitionIndex = 48238;

	class MonoSpin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 mousePos; // 0x20
		::System::Boolean Field_5_2; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPIN_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}
	};
}
