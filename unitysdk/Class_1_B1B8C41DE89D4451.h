#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_7472FB6CC4015359;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_B1B8C41DE89D4451_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1589A210)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_2BB22F3AF97DEF2B_OFFSET UNITYSDK_OFFSET(0x15899690)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x15899E70)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x158999F0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x15899A40)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_4E8DF6F8A37B229A_OFFSET UNITYSDK_OFFSET(0x1589A5B0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x158999E0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_7CBBAA5A02D4005E_OFFSET UNITYSDK_OFFSET(0x15899EC0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_7D0B41C2967CEF1F_OFFSET UNITYSDK_OFFSET(0x1589A250)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x15899E00)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1589A590)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1589A2B0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1589A1B0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15899970)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x1589A5C0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x158999D0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1589A5A0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_F7F5869DC2A6806E_OFFSET UNITYSDK_OFFSET(0x1589A5E0)
#define CLASS_1_B1B8C41DE89D4451_METHOD_1_FF0CBCFE6766CB7C_OFFSET UNITYSDK_OFFSET(0x1589A310)
#define CLASS_1_B1B8C41DE89D4451_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15899040)
#define CLASS_1_B1B8C41DE89D4451__CTOR_OFFSET UNITYSDK_OFFSET(0x15899680)

inline static constexpr unsigned int Class_1_B1B8C41DE89D4451_TypeDefinitionIndex = 84731;

class Class_1_B1B8C41DE89D4451 : public ::System::Object
{
public:
	::Class_3_7472FB6CC4015359* Field_1_20; // 0x10
	::System::String* Field_1_2; // 0x18
	::Class_3_C93CC3D2C2AC4067* Field_1_21; // 0x20
	::UnityEngine::AnimationCurve* Field_1_4; // 0x28
	::UnityEngine::Transform* Field_1_27; // 0x30
	::UnityEngine::AnimationCurve* Field_1_5; // 0x38
	::System::String* Field_1_8; // 0x40
	::UnityEngine::Vector3 Field_1_22; // 0x48
	::System::Single Field_1_18; // 0x54
	::System::Boolean Field_1_11; // 0x58
	::System::Boolean Field_1_10; // 0x59
	::System::Single Field_1_1; // 0x5C
	::System::Single Field_1_7; // 0x60
	::UnityEngine::Vector3 Field_1_12; // 0x64
	::System::Single Field_1_6; // 0x70
	::System::Single Field_1_9; // 0x74
	::System::UInt32 Field_1_15; // 0x78
	::System::Single Field_1_23; // 0x7C
	::System::Int32 Field_1_3; // 0x80
	::System::Boolean Field_1_17; // 0x84
	::System::Boolean Field_1_14; // 0x85
	::Enum_3_903100312A285543 Field_1_19; // 0x86
	::System::Single Field_1_0; // 0x88
	::System::Single Field_1_16; // 0x8C
	::System::Single Field_1_13; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_TOSTRING_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2BB22F3AF97DEF2B(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_2BB22F3AF97DEF2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_7CBBAA5A02D4005E(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_7CBBAA5A02D4005E_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_7D0B41C2967CEF1F(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_7D0B41C2967CEF1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_FF0CBCFE6766CB7C(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_FF0CBCFE6766CB7C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_4E8DF6F8A37B229A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_4E8DF6F8A37B229A_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Void Method_1_F7F5869DC2A6806E(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_B1B8C41DE89D4451_METHOD_1_F7F5869DC2A6806E_OFFSET))(this, a1, a2);
	}
};
