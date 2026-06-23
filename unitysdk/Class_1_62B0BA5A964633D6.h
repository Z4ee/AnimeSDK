#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/VNoiseParams.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/DissipationMode.h"
#include "unitysdk/MoleMole/Config/ShakeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_1_62B0BA5A964633D6_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1558EAC0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_27C66A2308F65974_OFFSET UNITYSDK_OFFSET(0x1558FAF0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_332A443EF3A83828_OFFSET UNITYSDK_OFFSET(0x1558ED30)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x15590900)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1558FC40)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15590860)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x15590970)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_4E8DF6F8A37B229A_1_OFFSET UNITYSDK_OFFSET(0x15590960)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x1558FC20)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_B552E6D815E9BCDB_OFFSET UNITYSDK_OFFSET(0x1558FCC0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_C5F9823D509784CD_OFFSET UNITYSDK_OFFSET(0x1558EB20)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x1558FC00)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_C74E50CBD41F0264_2_OFFSET UNITYSDK_OFFSET(0x1558FC10)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1558EAA0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1558FB90)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_D37FAD0A6AA04B25_1_OFFSET UNITYSDK_OFFSET(0x1558FCA0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1558EB00)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_E55A0E9CDE84DC6E_OFFSET UNITYSDK_OFFSET(0x1558F4D0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x15590A20)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x15590A30)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1558EAB0)
#define CLASS_1_62B0BA5A964633D6_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1558ECB0)
#define CLASS_1_62B0BA5A964633D6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1558E1B0)
#define CLASS_1_62B0BA5A964633D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1558EA90)

inline static constexpr unsigned int Class_1_62B0BA5A964633D6_TypeDefinitionIndex = 50199;

class Class_1_62B0BA5A964633D6 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_23; // 0x10
	::System::String* Field_1_7; // 0x18
	::UnityEngine::Transform* Field_1_4; // 0x20
	::System::String* Field_1_2; // 0x28
	::UnityEngine::AnimationCurve* Field_1_13; // 0x30
	::System::String* Field_1_1; // 0x38
	::UnityEngine::AnimationCurve* Field_1_19; // 0x40
	::UnityEngine::AnimationCurve* Field_1_21; // 0x48
	::System::Single Field_1_40; // 0x50
	::System::Boolean Field_1_8; // 0x54
	::System::Boolean Field_1_39; // 0x55
	::System::Boolean Field_1_30; // 0x56
	::System::Boolean Field_1_29; // 0x57
	::UnityEngine::Vector3 Field_1_31; // 0x58
	::System::Single Field_1_18; // 0x64
	::System::Int32 Field_1_26; // 0x68
	::UnityEngine::Vector3 Field_1_35; // 0x6C
	::System::Single Field_1_38; // 0x78
	::MoleMole::Config::ConfigDataPriority Field_1_27; // 0x7C
	::System::Single Field_1_33; // 0x80
	::System::Int32 Field_1_0; // 0x84
	::MoleMole::Config::ConfigDataPlayStacking Field_1_25; // 0x88
	::System::Single Field_1_12; // 0x8C
	::UnityEngine::Vector3 Field_1_15; // 0x90
	::MoleMole::Config::ShakeType Field_1_16; // 0x9C
	::UnityEngine::Vector3 Field_1_32; // 0xA0
	::System::Single Field_1_17; // 0xAC
	::System::UInt32 Field_1_3; // 0xB0
	::UnityEngine::Vector3 Field_1_34; // 0xB4
	::UnityEngine::Vector3 Field_1_5; // 0xC0
	::System::Single Field_1_22; // 0xCC
	::UnityEngine::Vector3 Field_1_14; // 0xD0
	::System::Int32 Field_1_36; // 0xDC
	::System::Boolean Field_1_28; // 0xE0
	::System::Boolean Field_1_24; // 0xE1
	::System::Single Field_1_11; // 0xE4
	::System::Single Field_1_20; // 0xE8
	::System::Single Field_1_9; // 0xEC
	::System::Single Field_1_37; // 0xF0
	::MoleMole::Config::DissipationMode Field_1_10; // 0xF4
	::MoleMole::Cameras::VNoiseParams Field_1_6; // 0xF8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_1_C5F9823D509784CD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_C5F9823D509784CD_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_332A443EF3A83828(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_332A443EF3A83828_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_27C66A2308F65974(::UnityEngine::Camera* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_27C66A2308F65974_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_C74E50CBD41F0264_2_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_E55A0E9CDE84DC6E(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_E55A0E9CDE84DC6E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_D37FAD0A6AA04B25_1_OFFSET))(this);
	}

	::System::Void Method_1_B552E6D815E9BCDB(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_B552E6D815E9BCDB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4E8DF6F8A37B229A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_4E8DF6F8A37B229A_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62B0BA5A964633D6_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}
};
