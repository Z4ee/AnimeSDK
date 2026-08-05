#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineOrbitalTransposer; }
namespace Cinemachine { class CinemachineOrbitalTransposer_UpdateHeadingDelegate; }

#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6D1700)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D1740)
#define CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C___CTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1F6D1750)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineOrbitalTransposer___c_TypeDefinitionIndex = 34712;

	class CinemachineOrbitalTransposer___c : public ::System::Object
	{
	public:
		static ::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate** StaticGet___9__34_0()
		{
			return (::Cinemachine::CinemachineOrbitalTransposer_UpdateHeadingDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineOrbitalTransposer___c_TypeDefinitionIndex)->GetStaticField(0x28FB0);
		}
		static ::Cinemachine::CinemachineOrbitalTransposer___c** StaticGet___9()
		{
			return (::Cinemachine::CinemachineOrbitalTransposer___c**)Il2CppClass::FromTypeDefinitionIndex(CinemachineOrbitalTransposer___c_TypeDefinitionIndex)->GetStaticField(0x28FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C__CTOR_OFFSET))(this);
		}

		::System::Single __ctor_b__34_0(::Cinemachine::CinemachineOrbitalTransposer* orbital, ::System::Single deltaTime, ::UnityEngine::Vector3 up)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineOrbitalTransposer*, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEORBITALTRANSPOSER___C___CTOR_B__34_0_OFFSET))(this, orbital, deltaTime, up);
		}
	};
}
