#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_7D047D1B6B651F9C;
class Class_1_E5DBED4C784DCB70;
class Class_2_D39C2FCEF4D4B922;
class Class_2_E7B5A02ED2B31407;
namespace MoleMole { class CameraDelayData; }
namespace MoleMole { class CameraDelayDatas; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole { class CameraModuleDirectionData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
template <typename T> class Class_0_16E4307DCC419505_293;

#define CLASS_1_A422B5C99AB5650D_METHOD_1_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0xFEB92F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_05FE9C5ED5EF266A_OFFSET UNITYSDK_OFFSET(0xFEBE140)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0xFEC2900)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_097768D86C218FF4_OFFSET UNITYSDK_OFFSET(0xFEC30B0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_097E072BCEB2DFAF_OFFSET UNITYSDK_OFFSET(0xFEC2A60)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_0C85ED55B43C6510_OFFSET UNITYSDK_OFFSET(0xFEBB4C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_15A0C00D0AF78536_OFFSET UNITYSDK_OFFSET(0xFEC03C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_17999C18C76E1A82_OFFSET UNITYSDK_OFFSET(0xFEBD920)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_205C242D36381FFB_OFFSET UNITYSDK_OFFSET(0xFEC0740)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xFEC28F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_255BE7B5E4C9B018_OFFSET UNITYSDK_OFFSET(0xFEC2540)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_1_OFFSET UNITYSDK_OFFSET(0xFEC18D0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_OFFSET UNITYSDK_OFFSET(0xFEB9B10)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xFEC1310)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_3432859576FFF31F_OFFSET UNITYSDK_OFFSET(0xFEC2A40)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_1_OFFSET UNITYSDK_OFFSET(0xFEBE810)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_OFFSET UNITYSDK_OFFSET(0xFEBDDB0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0xFEBDEC0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4434C1B3C7070205_OFFSET UNITYSDK_OFFSET(0xFEBD910)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_45F378546E6CD4F4_OFFSET UNITYSDK_OFFSET(0xFEB9BE0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_1_OFFSET UNITYSDK_OFFSET(0xFEC2530)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_OFFSET UNITYSDK_OFFSET(0xFEC0730)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_4FD061240A9215BD_OFFSET UNITYSDK_OFFSET(0xFEBC9B0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_5B12FB584315CCB9_OFFSET UNITYSDK_OFFSET(0xFEC13C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_1_OFFSET UNITYSDK_OFFSET(0xFEC3150)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_OFFSET UNITYSDK_OFFSET(0xFEC2610)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_76C6CA61FA3AF162_OFFSET UNITYSDK_OFFSET(0xFEBB6F0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xFEC3020)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_7891671122F5C4CB_OFFSET UNITYSDK_OFFSET(0xFEBD710)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_79A71C42C344F272_OFFSET UNITYSDK_OFFSET(0xFEBD820)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_7D9E0AC8DDDB087D_OFFSET UNITYSDK_OFFSET(0xFEBEE90)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_842333745313F935_OFFSET UNITYSDK_OFFSET(0xFEBEC50)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_89C52E338BB8A276_OFFSET UNITYSDK_OFFSET(0xFEC27E0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_93826312070FC6F3_OFFSET UNITYSDK_OFFSET(0xFEBD370)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_95F053D451652F2E_OFFSET UNITYSDK_OFFSET(0xFEBEB30)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_A43E50D4ABCBF27B_OFFSET UNITYSDK_OFFSET(0xFEBA570)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0xFEB9620)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_B0AA35323E65AF78_OFFSET UNITYSDK_OFFSET(0xFEC1D80)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_B0B02299A559EC10_OFFSET UNITYSDK_OFFSET(0xFEB9A10)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_B228DB26E10594DB_OFFSET UNITYSDK_OFFSET(0xFEBDCC0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0xFEBE750)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_CFDD0CBCDD5C5818_OFFSET UNITYSDK_OFFSET(0xFEBCEF0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xFEC0350)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xFEBE6E0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DA6A516C6C038113_OFFSET UNITYSDK_OFFSET(0xFEB97A0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DC13970E3DDE7FD7_OFFSET UNITYSDK_OFFSET(0xFEB8EF0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DDE751EF948C8CAF_OFFSET UNITYSDK_OFFSET(0xFEBB630)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_DE2C6C862AAD02E2_OFFSET UNITYSDK_OFFSET(0xFEC0FE0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_E4B4A3F40157A79A_OFFSET UNITYSDK_OFFSET(0xFEB8C10)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_E803859F216D3A40_OFFSET UNITYSDK_OFFSET(0xFEBE920)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0xFEC29C0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xFEBD690)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_F0589B1D9EEFB5E2_OFFSET UNITYSDK_OFFSET(0xFEB8AC0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0xFEB9270)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FADE0812A01CB292_OFFSET UNITYSDK_OFFSET(0xFEBDED0)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FB525D2D16F36EA5_OFFSET UNITYSDK_OFFSET(0xFEB9340)
#define CLASS_1_A422B5C99AB5650D_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0xFEBB5C0)
#define CLASS_1_A422B5C99AB5650D__CTOR_OFFSET UNITYSDK_OFFSET(0xFEB8490)

inline static constexpr unsigned int Class_1_A422B5C99AB5650D_TypeDefinitionIndex = 43312;

class Class_1_A422B5C99AB5650D : public ::System::Object
{
public:
	// static const ::System::Single Field_1_8; // 0x0
	// static const ::System::Single Field_1_27; // 0x0
	::Class_1_7D047D1B6B651F9C* Field_1_5; // 0x10
	::Class_0_16E4307DCC419505_293<::System::Single>* Field_1_10; // 0x18
	::Class_1_7D047D1B6B651F9C* Field_1_4; // 0x20
	::Class_2_E7B5A02ED2B31407* Field_1_17; // 0x28
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_19; // 0x30
	::MoleMole::Cameras::CameraDataAccessor* Field_1_2; // 0x38
	::Cinemachine::CameraState Field_1_0; // 0x40
	::MoleMole::CameraDelayData* Field_1_28; // 0x128
	::Class_0_16E4307DCC419505_293<::System::Single>* Field_1_9; // 0x130
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_22; // 0x138
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_21; // 0x140
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_20; // 0x148
	::Class_2_E7B5A02ED2B31407* Field_1_15; // 0x150
	::Class_1_E5DBED4C784DCB70* Field_1_11; // 0x158
	::Class_2_D39C2FCEF4D4B922* Field_1_1; // 0x160
	::Class_2_E7B5A02ED2B31407* Field_1_16; // 0x168
	::MoleMole::CameraModuleDirectionData* Field_1_18; // 0x170
	::UnityEngine::Vector3 Field_1_23; // 0x178
	::UnityEngine::Vector3 Field_1_34; // 0x184
	::UnityEngine::Vector3 Field_1_24; // 0x190
	::UnityEngine::Quaternion Field_1_36; // 0x19C
	::System::Single Field_1_12; // 0x1AC
	::System::Single Field_1_6; // 0x1B0
	::System::Single Field_1_13; // 0x1B4
	::Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0 Field_1_32; // 0x1B8
	::Class_1_A422B5C99AB5650D_Struct_2_15616FB3866945B0 Field_1_31; // 0x208
	::UnityEngine::Vector3 Field_1_38; // 0x258
	::UnityEngine::Vector2 Field_1_35; // 0x264
	::System::Single Field_1_7; // 0x26C
	::System::Byte Field_1_14; // 0x270
	::System::Boolean Field_1_3; // 0x271
	::UnityEngine::Vector3 Field_1_30; // 0x274
	::UnityEngine::Vector3 Field_1_33; // 0x280
	::UnityEngine::Vector3 Field_1_25; // 0x28C
	::UnityEngine::Vector3 Field_1_26; // 0x298
	::System::UInt32 Field_1_37; // 0x2A4
	::System::Single Field_1_29; // 0x2A8
	::UnityEngine::Vector2 Field_1_39; // 0x2AC

	::System::Void _ctor(::Class_2_D39C2FCEF4D4B922* a1, ::MoleMole::CameraModuleAvatarDataConfigExt* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D39C2FCEF4D4B922*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector2 Method_1_F0589B1D9EEFB5E2(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_F0589B1D9EEFB5E2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E4B4A3F40157A79A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_E4B4A3F40157A79A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_04DC58A6E3312864_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_FB525D2D16F36EA5(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FB525D2D16F36EA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0B02299A559EC10(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_B0B02299A559EC10_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A43E50D4ABCBF27B(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_A43E50D4ABCBF27B_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_1_CFDD0CBCDD5C5818(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_CFDD0CBCDD5C5818_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_93826312070FC6F3(::UnityEngine::Rect& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_93826312070FC6F3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_1_45F378546E6CD4F4(::Cinemachine::CameraState& a1, ::MoleMole::Cameras::CameraDataAccessor* a2, ::UnityEngine::Rect a3, ::System::Single a4, ::System::Single& a5)
	{
		return ((::System::Single(*)(::Cinemachine::CameraState&, ::MoleMole::Cameras::CameraDataAccessor*, ::UnityEngine::Rect, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_45F378546E6CD4F4_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_4434C1B3C7070205(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4434C1B3C7070205_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_1_17999C18C76E1A82(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_17999C18C76E1A82_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_B228DB26E10594DB(::UnityEngine::Vector4 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_B228DB26E10594DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_426BC41501263DDE(::System::String* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Func_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_2_D39C2FCEF4D4B922* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_D39C2FCEF4D4B922*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::MoleMole::CameraDelayData* Method_1_FADE0812A01CB292(::MoleMole::CameraDelayDatas* a1, ::System::Single a2)
	{
		return ((::MoleMole::CameraDelayData*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FADE0812A01CB292_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Rect Method_1_7891671122F5C4CB(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_7891671122F5C4CB_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_79A71C42C344F272(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_79A71C42C344F272_OFFSET))(a1, a2);
	}

	::System::Single Method_1_05FE9C5ED5EF266A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_05FE9C5ED5EF266A_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_1_426BC41501263DDE_1(::System::String* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Func_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_426BC41501263DDE_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cinemachine::CameraState Method_1_E803859F216D3A40(::UnityEngine::Vector3 a1, ::Struct_2_7E9A981C4706FCC7& a2, ::System::Single a3)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_7E9A981C4706FCC7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_E803859F216D3A40_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_15A0C00D0AF78536(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_15A0C00D0AF78536_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_DC13970E3DDE7FD7(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DC13970E3DDE7FD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F31904B94CD26A8(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_205C242D36381FFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_205C242D36381FFB_OFFSET))(this);
	}

	static ::System::String* Method_1_DE2C6C862AAD02E2(::UnityEngine::Rect a1)
	{
		return ((::System::String*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DE2C6C862AAD02E2_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_A678846DF98684D3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_A678846DF98684D3_OFFSET))(this);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_5B12FB584315CCB9(::Cinemachine::CameraState& a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion& a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_5B12FB584315CCB9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_1_7D9E0AC8DDDB087D(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_7D9E0AC8DDDB087D_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rect Method_1_B0AA35323E65AF78(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_B0AA35323E65AF78_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_1_DA6A516C6C038113(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DA6A516C6C038113_OFFSET))(this, a1);
	}

	::System::Void Method_1_4F31904B94CD26A8_1(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4F31904B94CD26A8_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_4FD061240A9215BD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_4FD061240A9215BD_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_76C6CA61FA3AF162(::Class_1_A422B5C99AB5650D*& a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Quaternion& a6, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>& a7)
	{
		return ((::System::Void(*)(::Class_1_A422B5C99AB5650D*&, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_76C6CA61FA3AF162_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::System::Void Method_1_95F053D451652F2E(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_95F053D451652F2E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_255BE7B5E4C9B018(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_255BE7B5E4C9B018_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_1_2E01693CBA549693()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_5D3291D964FEACFF(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_OFFSET))(this, a1);
	}

	::System::Void Method_1_89C52E338BB8A276(::UnityEngine::Vector3 a1, ::Struct_2_7E9A981C4706FCC7& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_7E9A981C4706FCC7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_89C52E338BB8A276_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_0C85ED55B43C6510(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_0C85ED55B43C6510_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Rect Method_1_2E01693CBA549693_1()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_2E01693CBA549693_1_OFFSET))(this);
	}

	::Class_1_E5DBED4C784DCB70* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E5DBED4C784DCB70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Single Method_1_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_EBF44BC910948FDA_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_EBF44BC910948FDA_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* Method_1_DDE751EF948C8CAF()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_DDE751EF948C8CAF_OFFSET))(this);
	}

	::Cinemachine::CameraState Method_1_3432859576FFF31F()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_3432859576FFF31F_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_097E072BCEB2DFAF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Rect a4, ::UnityEngine::Rect a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_097E072BCEB2DFAF_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	static ::System::String* Method_1_097768D86C218FF4(::UnityEngine::Vector2 a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_097768D86C218FF4_OFFSET))(a1);
	}

	::UnityEngine::Quaternion Method_1_5D3291D964FEACFF_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_5D3291D964FEACFF_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_842333745313F935(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A422B5C99AB5650D_METHOD_1_842333745313F935_OFFSET))(this, a1, a2);
	}
};
