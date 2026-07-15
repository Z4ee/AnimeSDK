#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }

#define CLASS_1_F061A380F0650BCC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17051CE0)
#define CLASS_1_F061A380F0650BCC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17051D20)
#define CLASS_1_F061A380F0650BCC___C___SETVCAM_B__10_0_OFFSET UNITYSDK_OFFSET(0x17051D30)

inline static constexpr unsigned int Class_1_F061A380F0650BCC___c_TypeDefinitionIndex = 58036;

class Class_1_F061A380F0650BCC___c : public ::System::Object
{
public:
	static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__10_0()
	{
		return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F061A380F0650BCC___c_TypeDefinitionIndex)->GetStaticField(0x41EC0);
	}
	static ::Class_1_F061A380F0650BCC___c** StaticGet___9()
	{
		return (::Class_1_F061A380F0650BCC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F061A380F0650BCC___c_TypeDefinitionIndex)->GetStaticField(0x41EC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetVCam_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F061A380F0650BCC___C___SETVCAM_B__10_0_OFFSET))(this);
	}
};
