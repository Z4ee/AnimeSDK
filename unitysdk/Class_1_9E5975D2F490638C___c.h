#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate; }

#define CLASS_1_9E5975D2F490638C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD3B1920)
#define CLASS_1_9E5975D2F490638C___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD3B1960)
#define CLASS_1_9E5975D2F490638C___C___SETVCAM_B__10_0_OFFSET UNITYSDK_OFFSET(0xD3B1970)

inline static constexpr unsigned int Class_1_9E5975D2F490638C___c_TypeDefinitionIndex = 56027;

class Class_1_9E5975D2F490638C___c : public ::System::Object
{
public:
	static ::Class_1_9E5975D2F490638C___c** StaticGet___9()
	{
		return (::Class_1_9E5975D2F490638C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5975D2F490638C___c_TypeDefinitionIndex)->GetStaticField(0x6B360);
	}
	static ::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate** StaticGet___9__10_0()
	{
		return (::Cinemachine::CinemachineVirtualCamera_OnUpdateVirtualCameraDelegate**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E5975D2F490638C___c_TypeDefinitionIndex)->GetStaticField(0x6B368);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C___C__CTOR_OFFSET))(this);
	}

	::System::Void __SetVCam_b__10_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E5975D2F490638C___C___SETVCAM_B__10_0_OFFSET))(this);
	}
};
