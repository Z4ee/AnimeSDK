#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x136B61E0)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x136B6220)
#define MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__ENTERCONTROLLABLECAMERA_B__47_0_OFFSET UNITYSDK_OFFSET(0x136B6230)

namespace MoleMole
{
	inline static constexpr unsigned int HackControllableSubsystem___c_TypeDefinitionIndex = 57110;

	class HackControllableSubsystem___c : public ::System::Object
	{
	public:
		static ::MoleMole::HackControllableSubsystem___c** StaticGet___9()
		{
			return (::MoleMole::HackControllableSubsystem___c**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4D700);
		}
		static ::System::Func_1<::UnityEngine::Vector3>** StaticGet___9__47_0()
		{
			return (::System::Func_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(HackControllableSubsystem___c_TypeDefinitionIndex)->GetStaticField(0x4D708);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _EnterControllableCamera_b__47_0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCONTROLLABLESUBSYSTEM___C__ENTERCONTROLLABLECAMERA_B__47_0_OFFSET))(this);
		}
	};
}
