#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_BCFC54C6C3BB4207___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E83610)
#define CLASS_2_BCFC54C6C3BB4207___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17E83650)
#define CLASS_2_BCFC54C6C3BB4207___C___DEMOTEALLSTACKCAMERAPRIORITIES_B__4_0_OFFSET UNITYSDK_OFFSET(0x17E83660)

inline static constexpr unsigned int Class_2_BCFC54C6C3BB4207___c_TypeDefinitionIndex = 76283;

class Class_2_BCFC54C6C3BB4207___c : public ::System::Object
{
public:
	static ::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>** StaticGet___9__4_0()
	{
		return (::System::Action_2<::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BCFC54C6C3BB4207___c_TypeDefinitionIndex)->GetStaticField(0x1D0A0);
	}
	static ::Class_2_BCFC54C6C3BB4207___c** StaticGet___9()
	{
		return (::Class_2_BCFC54C6C3BB4207___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_BCFC54C6C3BB4207___c_TypeDefinitionIndex)->GetStaticField(0x1D0A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C__CTOR_OFFSET))(this);
	}

	::System::Void __DemoteAllStackCameraPriorities_b__4_0(::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a1, ::Cinemachine::CinemachineVirtualCameraBase* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CLASS_2_BCFC54C6C3BB4207___C___DEMOTEALLSTACKCAMERAPRIORITIES_B__4_0_OFFSET))(this, a1, a2);
	}
};
