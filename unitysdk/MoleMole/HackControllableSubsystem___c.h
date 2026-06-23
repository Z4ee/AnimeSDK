#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EECE30)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EECE70)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__ENTERCONTROLLABLECAMERA_B__38_0_OFFSET UNITYSDK_OFFSET(0x13EECE80)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c_TypeDefinitionIndex = 80685;

	class HackControllableSubsystem___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__38_0()
		{
			return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4D950);
		}
		static ::MoleMole::HackControllableSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::HackControllableSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4D958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _EnterControllableCamera_b__38_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__ENTERCONTROLLABLECAMERA_B__38_0_OFFSET))(this);
		}
	};
}
