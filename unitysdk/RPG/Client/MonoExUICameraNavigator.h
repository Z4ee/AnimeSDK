#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_MONOEXUICAMERANAVIGATOR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD82CDF0)
#define RPG_CLIENT_MONOEXUICAMERANAVIGATOR_GETGYROOFFSET_OFFSET UNITYSDK_OFFSET(0xD826A30)
#define RPG_CLIENT_MONOEXUICAMERANAVIGATOR_METHOD_5_2A925B778BD82492_OFFSET UNITYSDK_OFFSET(0xD82CE30)
#define RPG_CLIENT_MONOEXUICAMERANAVIGATOR_SETENABLE_OFFSET UNITYSDK_OFFSET(0xD82B1B0)
#define RPG_CLIENT_MONOEXUICAMERANAVIGATOR_START_OFFSET UNITYSDK_OFFSET(0xD82CB70)
#define RPG_CLIENT_MONOEXUICAMERANAVIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD82CEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoExUICameraNavigator_TypeDefinitionIndex = 72903;

	class MonoExUICameraNavigator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Quaternion KDFBNBNECEK; // 0x18
		::System::Boolean BAHOEONCBJD; // 0x28
		::System::Single ParallexRange; // 0x2C
		::System::Single ParallexSensitivity; // 0x30
		::System::Single ParallexBoundHardness; // 0x34
		::System::Single GyroOffsetRange; // 0x38
		::UnityEngine::Quaternion LALGHIKGNDE; // 0x3C
		::UnityEngine::Vector3 MDKGDLJDCLC; // 0x4C
		::UnityEngine::Vector3 FFJNGNNDFHI; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERANAVIGATOR__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERANAVIGATOR_START_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERANAVIGATOR_FIXEDUPDATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetGyroOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERANAVIGATOR_GETGYROOFFSET_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERANAVIGATOR_SETENABLE_OFFSET))(this, a1);
		}

		static ::UnityEngine::Quaternion Method_5_2A925B778BD82492(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEXUICAMERANAVIGATOR_METHOD_5_2A925B778BD82492_OFFSET))(a1);
		}
	};
}
