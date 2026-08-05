#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A9CCF2F4C9D162AF.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0BF092863AC7E04F;
class Class_1_1F23F8E340B3325C;
class Class_1_5D2B428E9D4BC4BD;
namespace MoleMole { class ConfigCameraTelescope; }
namespace MoleMole::Cameras { class TelescopeCameraConfig; }
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x14EFEA70)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x14EFF2E0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_2A829551B42C81EF_OFFSET UNITYSDK_OFFSET(0x14EFFB40)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_2E2DC98B50F3CCB1_OFFSET UNITYSDK_OFFSET(0x14EFFE10)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_36CADF3BDCB1CF15_OFFSET UNITYSDK_OFFSET(0x14EFEFE0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x14F002D0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_5BB3779CAA97BE71_1_OFFSET UNITYSDK_OFFSET(0x14EFFA90)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_5BB3779CAA97BE71_OFFSET UNITYSDK_OFFSET(0x14EFF9E0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x14EFED20)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x14F00730)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x14EFF340)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_765F20AE50A3938C_OFFSET UNITYSDK_OFFSET(0x14EFF290)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_782BFF1419D9562B_OFFSET UNITYSDK_OFFSET(0x14EFFEF0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_7DF1DC345886EBDA_OFFSET UNITYSDK_OFFSET(0x14EFF560)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_8AD855473D7C6A56_OFFSET UNITYSDK_OFFSET(0x14EFEF20)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_B0386DFE197F17C2_OFFSET UNITYSDK_OFFSET(0x14EFFE70)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_BA7D60C179EED568_OFFSET UNITYSDK_OFFSET(0x14F005B0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14EFEA30)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x14F00550)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x14EFFDB0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x14F00490)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x14EFEC50)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14EFEF80)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x14F006D0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_FF7B2911BBACA4A9_2_OFFSET UNITYSDK_OFFSET(0x14F008F0)
#define CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14F004F0)
#define CLASS_2_7EDC30DD3B0ADEE9_ONDRAG_OFFSET UNITYSDK_OFFSET(0x14EFFBA0)
#define CLASS_2_7EDC30DD3B0ADEE9__CTOR_OFFSET UNITYSDK_OFFSET(0x14EFE9F0)

inline static constexpr unsigned int Class_2_7EDC30DD3B0ADEE9_TypeDefinitionIndex = 73195;

class Class_2_7EDC30DD3B0ADEE9 : public ::Class_1_A9CCF2F4C9D162AF
{
public:
	::MoleMole::ConfigCameraTelescope* Field_2_1; // 0x20
	::Class_1_0BF092863AC7E04F* Field_2_3; // 0x28
	::Class_1_1F23F8E340B3325C* Field_2_0; // 0x30
	::MoleMole::Cameras::TelescopeCameraConfig* Field_2_2; // 0x38
	::System::Nullable_1<::System::Single> Field_2_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::System::Void Method_2_5F0036ED5CF109B4(::Class_1_5D2B428E9D4BC4BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5D2B428E9D4BC4BD*))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_765F20AE50A3938C(::MoleMole::Config::PhotoCameraModeOverride* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_765F20AE50A3938C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Boolean Method_2_7DF1DC345886EBDA(::MoleMole::InputActionEvent a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_7DF1DC345886EBDA_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2E2DC98B50F3CCB1(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_2E2DC98B50F3CCB1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B0386DFE197F17C2(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_B0386DFE197F17C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_508D4DD02D3DB74E_OFFSET))(this);
	}

	::System::Void Method_2_782BFF1419D9562B(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_782BFF1419D9562B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Void Method_2_BA7D60C179EED568(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_BA7D60C179EED568_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5BB3779CAA97BE71(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_5BB3779CAA97BE71_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2A829551B42C81EF(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_2A829551B42C81EF_OFFSET))(this, a1);
	}

	::System::Single Method_2_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_5BB3779CAA97BE71_1(::UnityEngine::Vector2 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_5BB3779CAA97BE71_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_1F23F8E340B3325C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F23F8E340B3325C*))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_36CADF3BDCB1CF15(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_36CADF3BDCB1CF15_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AD855473D7C6A56(::MoleMole::ConfigCameraTelescope* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigCameraTelescope*))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_8AD855473D7C6A56_OFFSET))(this, a1);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7EDC30DD3B0ADEE9_METHOD_2_FF7B2911BBACA4A9_2_OFFSET))(this);
	}
};
