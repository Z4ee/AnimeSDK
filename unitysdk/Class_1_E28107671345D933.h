#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Class_1_E28107671345D933_Struct_2_15616FB3866945B0.h"
#include "unitysdk/MoleMole/Cameras/CameraFollowCalcData.h"
#include "unitysdk/MoleMole/Cameras/CameraInfo.h"
#include "unitysdk/Struct_2_7E9A981C4706FCC7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_2C5AEA2EB67235CA;
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
template <typename T> class Class_0_16E4307DCC419505_748;

#define CLASS_1_E28107671345D933_METHOD_1_020E9A935CF391BE_OFFSET UNITYSDK_OFFSET(0x1596E980)
#define CLASS_1_E28107671345D933_METHOD_1_0340884D728972E3_OFFSET UNITYSDK_OFFSET(0x15970770)
#define CLASS_1_E28107671345D933_METHOD_1_04DC58A6E3312864_OFFSET UNITYSDK_OFFSET(0x15975590)
#define CLASS_1_E28107671345D933_METHOD_1_05FE9C5ED5EF266A_OFFSET UNITYSDK_OFFSET(0x159717D0)
#define CLASS_1_E28107671345D933_METHOD_1_090740344CAC81EE_OFFSET UNITYSDK_OFFSET(0x1596AA50)
#define CLASS_1_E28107671345D933_METHOD_1_097768D86C218FF4_OFFSET UNITYSDK_OFFSET(0x15970360)
#define CLASS_1_E28107671345D933_METHOD_1_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0x15973BF0)
#define CLASS_1_E28107671345D933_METHOD_1_109E6695F3195450_OFFSET UNITYSDK_OFFSET(0x15971F90)
#define CLASS_1_E28107671345D933_METHOD_1_15A0C00D0AF78536_OFFSET UNITYSDK_OFFSET(0x15975200)
#define CLASS_1_E28107671345D933_METHOD_1_17999C18C76E1A82_OFFSET UNITYSDK_OFFSET(0x1596ECF0)
#define CLASS_1_E28107671345D933_METHOD_1_1EDB460A3201EA0A_OFFSET UNITYSDK_OFFSET(0x159710B0)
#define CLASS_1_E28107671345D933_METHOD_1_24748FC20F375725_1_OFFSET UNITYSDK_OFFSET(0x15973AD0)
#define CLASS_1_E28107671345D933_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x159710A0)
#define CLASS_1_E28107671345D933_METHOD_1_255BE7B5E4C9B018_OFFSET UNITYSDK_OFFSET(0x15970290)
#define CLASS_1_E28107671345D933_METHOD_1_2B0A6FC6102D3DCA_OFFSET UNITYSDK_OFFSET(0x15974F90)
#define CLASS_1_E28107671345D933_METHOD_1_2E01693CBA549693_1_OFFSET UNITYSDK_OFFSET(0x159742B0)
#define CLASS_1_E28107671345D933_METHOD_1_2E01693CBA549693_OFFSET UNITYSDK_OFFSET(0x1596F9B0)
#define CLASS_1_E28107671345D933_METHOD_1_2FFDD07820DFF6B4_OFFSET UNITYSDK_OFFSET(0x1596E2C0)
#define CLASS_1_E28107671345D933_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1596B2B0)
#define CLASS_1_E28107671345D933_METHOD_1_3432859576FFF31F_OFFSET UNITYSDK_OFFSET(0x13C56A20)
#define CLASS_1_E28107671345D933_METHOD_1_426BC41501263DDE_1_OFFSET UNITYSDK_OFFSET(0x15973AE0)
#define CLASS_1_E28107671345D933_METHOD_1_426BC41501263DDE_OFFSET UNITYSDK_OFFSET(0x15970180)
#define CLASS_1_E28107671345D933_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x159753A0)
#define CLASS_1_E28107671345D933_METHOD_1_4434C1B3C7070205_OFFSET UNITYSDK_OFFSET(0x13C56A10)
#define CLASS_1_E28107671345D933_METHOD_1_4F31904B94CD26A8_1_OFFSET UNITYSDK_OFFSET(0x159753B0)
#define CLASS_1_E28107671345D933_METHOD_1_4F31904B94CD26A8_OFFSET UNITYSDK_OFFSET(0x159742A0)
#define CLASS_1_E28107671345D933_METHOD_1_5D3291D964FEACFF_1_OFFSET UNITYSDK_OFFSET(0x159753C0)
#define CLASS_1_E28107671345D933_METHOD_1_5D3291D964FEACFF_OFFSET UNITYSDK_OFFSET(0x15973E10)
#define CLASS_1_E28107671345D933_METHOD_1_66012F79C8619E94_OFFSET UNITYSDK_OFFSET(0x1596F090)
#define CLASS_1_E28107671345D933_METHOD_1_76C6CA61FA3AF162_OFFSET UNITYSDK_OFFSET(0x1596CFC0)
#define CLASS_1_E28107671345D933_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x1596AB10)
#define CLASS_1_E28107671345D933_METHOD_1_7891671122F5C4CB_OFFSET UNITYSDK_OFFSET(0x15974D90)
#define CLASS_1_E28107671345D933_METHOD_1_79A71C42C344F272_OFFSET UNITYSDK_OFFSET(0x15974EA0)
#define CLASS_1_E28107671345D933_METHOD_1_79C8A89E6CA53ADB_OFFSET UNITYSDK_OFFSET(0x159743A0)
#define CLASS_1_E28107671345D933_METHOD_1_7F7F004EAEEE42CE_OFFSET UNITYSDK_OFFSET(0x1596B3E0)
#define CLASS_1_E28107671345D933_METHOD_1_842333745313F935_OFFSET UNITYSDK_OFFSET(0x15971D60)
#define CLASS_1_E28107671345D933_METHOD_1_89C52E338BB8A276_OFFSET UNITYSDK_OFFSET(0x1596EBE0)
#define CLASS_1_E28107671345D933_METHOD_1_92CDC81783DABA21_OFFSET UNITYSDK_OFFSET(0x13C56A40)
#define CLASS_1_E28107671345D933_METHOD_1_95F053D451652F2E_OFFSET UNITYSDK_OFFSET(0x1596E780)
#define CLASS_1_E28107671345D933_METHOD_1_AB9B1D8989BE15B9_OFFSET UNITYSDK_OFFSET(0x1596FE10)
#define CLASS_1_E28107671345D933_METHOD_1_B0AA35323E65AF78_OFFSET UNITYSDK_OFFSET(0x1596A290)
#define CLASS_1_E28107671345D933_METHOD_1_B0B02299A559EC10_OFFSET UNITYSDK_OFFSET(0x15970670)
#define CLASS_1_E28107671345D933_METHOD_1_B228DB26E10594DB_OFFSET UNITYSDK_OFFSET(0x15974CA0)
#define CLASS_1_E28107671345D933_METHOD_1_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x1596FD50)
#define CLASS_1_E28107671345D933_METHOD_1_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x1596C650)
#define CLASS_1_E28107671345D933_METHOD_1_CD808A5CE51C11C7_OFFSET UNITYSDK_OFFSET(0x13C57700)
#define CLASS_1_E28107671345D933_METHOD_1_CF88D2689AD9F8FA_OFFSET UNITYSDK_OFFSET(0x15973FE0)
#define CLASS_1_E28107671345D933_METHOD_1_CFDD0CBCDD5C5818_OFFSET UNITYSDK_OFFSET(0x1596ABA0)
#define CLASS_1_E28107671345D933_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x159750E0)
#define CLASS_1_E28107671345D933_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x13C57690)
#define CLASS_1_E28107671345D933_METHOD_1_DBE3C6656034E627_OFFSET UNITYSDK_OFFSET(0x1596E8A0)
#define CLASS_1_E28107671345D933_METHOD_1_DC13970E3DDE7FD7_OFFSET UNITYSDK_OFFSET(0x13C57310)
#define CLASS_1_E28107671345D933_METHOD_1_DE2C6C862AAD02E2_OFFSET UNITYSDK_OFFSET(0x159755E0)
#define CLASS_1_E28107671345D933_METHOD_1_DF64B90BA25AAE64_OFFSET UNITYSDK_OFFSET(0x15971550)
#define CLASS_1_E28107671345D933_METHOD_1_E28D14934A7B8499_OFFSET UNITYSDK_OFFSET(0x13C57C20)
#define CLASS_1_E28107671345D933_METHOD_1_E42134237CFDDEF6_OFFSET UNITYSDK_OFFSET(0x15970400)
#define CLASS_1_E28107671345D933_METHOD_1_E4B4A3F40157A79A_OFFSET UNITYSDK_OFFSET(0x1596FA80)
#define CLASS_1_E28107671345D933_METHOD_1_E940B763AAFA2EF1_OFFSET UNITYSDK_OFFSET(0x15975150)
#define CLASS_1_E28107671345D933_METHOD_1_EBF44BC910948FDA_1_OFFSET UNITYSDK_OFFSET(0x1596B360)
#define CLASS_1_E28107671345D933_METHOD_1_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x1596A210)
#define CLASS_1_E28107671345D933_METHOD_1_ED9526B4A80BC9A1_OFFSET UNITYSDK_OFFSET(0x1596C3C0)
#define CLASS_1_E28107671345D933_METHOD_1_F6AFC74FF9D5F2C2_OFFSET UNITYSDK_OFFSET(0x1596C590)
#define CLASS_1_E28107671345D933_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x1596C4A0)
#define CLASS_1_E28107671345D933_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1596C520)
#define CLASS_1_E28107671345D933__CTOR_OFFSET UNITYSDK_OFFSET(0x13C563A0)

inline static constexpr unsigned int Class_1_E28107671345D933_TypeDefinitionIndex = 90872;

class Class_1_E28107671345D933 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_17; // 0x0
	// static const ::System::Single Field_1_38; // 0x0
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_28; // 0x10
	::Class_2_E7B5A02ED2B31407* Field_1_24; // 0x18
	::MoleMole::Cameras::CameraDataAccessor* Field_1_6; // 0x20
	::Class_2_E7B5A02ED2B31407* Field_1_25; // 0x28
	::Class_2_D39C2FCEF4D4B922* Field_1_7; // 0x30
	::Class_0_16E4307DCC419505_748<::System::Single>* Field_1_23; // 0x38
	::Class_1_7D047D1B6B651F9C* Field_1_13; // 0x40
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_35; // 0x48
	::MoleMole::CameraModuleDirectionData* Field_1_31; // 0x50
	::Class_1_E5DBED4C784DCB70* Field_1_22; // 0x58
	::Class_1_2C5AEA2EB67235CA* Field_1_4; // 0x60
	::Class_2_E7B5A02ED2B31407* Field_1_26; // 0x68
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_30; // 0x70
	::Cinemachine::CameraState Field_1_0; // 0x78
	::Il2CppArray<::UnityEngine::Vector4>* Field_1_29; // 0x160
	::Class_1_7D047D1B6B651F9C* Field_1_12; // 0x168
	::MoleMole::CameraDelayData* Field_1_37; // 0x170
	::Class_0_16E4307DCC419505_748<::System::Single>* Field_1_16; // 0x178
	::UnityEngine::Vector3 Field_1_14; // 0x180
	::UnityEngine::Vector3 Field_1_40; // 0x18C
	::UnityEngine::Vector3 Field_1_34; // 0x198
	::UnityEngine::Vector2 Field_1_46; // 0x1A4
	::System::Single Field_1_21; // 0x1AC
	::System::Single Field_1_36; // 0x1B0
	::UnityEngine::Vector3 Field_1_39; // 0x1B4
	::UnityEngine::Vector3 Field_1_47; // 0x1C0
	::System::Single Field_1_51; // 0x1CC
	::Class_1_E28107671345D933_Struct_2_15616FB3866945B0 Field_1_42; // 0x1D0
	::System::Single Field_1_19; // 0x220
	::System::Single Field_1_18; // 0x224
	::UnityEngine::Vector3 Field_1_32; // 0x228
	::UnityEngine::Vector3 Field_1_33; // 0x234
	::System::Single Field_1_20; // 0x240
	::System::Boolean Field_1_5; // 0x244
	::System::Byte Field_1_27; // 0x245
	::System::Boolean Field_1_44; // 0x246
	::System::Boolean Field_1_11; // 0x247
	::UnityEngine::Vector3 Field_1_9; // 0x248
	::UnityEngine::Quaternion Field_1_45; // 0x254
	::UnityEngine::Vector3 Field_1_8; // 0x264
	::UnityEngine::Vector3 Field_1_43; // 0x270
	::Class_1_E28107671345D933_Struct_2_15616FB3866945B0 Field_1_41; // 0x27C
	::UnityEngine::Vector3 Field_1_10; // 0x2CC
	::System::Single Field_1_50; // 0x2D8
	::UnityEngine::Vector2 Field_1_55; // 0x2DC
	::UnityEngine::Vector3 Field_1_48; // 0x2E4
	::UnityEngine::Vector3 Field_1_15; // 0x2F0
	::System::UInt32 Field_1_49; // 0x2FC

	::System::Void _ctor(::Class_2_D39C2FCEF4D4B922* a1, ::MoleMole::CameraModuleAvatarDataConfigExt* a2, ::MoleMole::Cameras::CameraDataAccessor* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D39C2FCEF4D4B922*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4434C1B3C7070205(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_4434C1B3C7070205_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_1_3432859576FFF31F()
	{
		return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_3432859576FFF31F_OFFSET))(this);
	}

	::System::Void Method_1_92CDC81783DABA21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_92CDC81783DABA21_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_DC13970E3DDE7FD7(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_DC13970E3DDE7FD7_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_CD808A5CE51C11C7(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Rect a4, ::UnityEngine::Rect a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_CD808A5CE51C11C7_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::CameraDelayData* Method_1_E28D14934A7B8499(::MoleMole::CameraDelayDatas* a1, ::System::Single a2)
	{
		return ((::MoleMole::CameraDelayData*(*)(::PVOID, ::MoleMole::CameraDelayDatas*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_E28D14934A7B8499_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_1_B0AA35323E65AF78(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_B0AA35323E65AF78_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Single Method_1_090740344CAC81EE(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_090740344CAC81EE_OFFSET))(a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::Cinemachine::CameraState Method_1_CFDD0CBCDD5C5818(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_CFDD0CBCDD5C5818_OFFSET))(this, a1);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_1_EBF44BC910948FDA_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_EBF44BC910948FDA_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F7F004EAEEE42CE(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_7F7F004EAEEE42CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_95F053D451652F2E(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_95F053D451652F2E_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_DBE3C6656034E627(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_DBE3C6656034E627_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_020E9A935CF391BE(::UnityEngine::Rect& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_020E9A935CF391BE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_89C52E338BB8A276(::UnityEngine::Vector3 a1, ::Struct_2_7E9A981C4706FCC7& a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_7E9A981C4706FCC7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_89C52E338BB8A276_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Rect Method_1_2E01693CBA549693()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_2E01693CBA549693_OFFSET))(this);
	}

	::System::Void Method_1_E4B4A3F40157A79A(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_E4B4A3F40157A79A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_1_AB9B1D8989BE15B9(::MoleMole::Cameras::CameraInfo& a1, ::MoleMole::Cameras::CameraFollowCalcData& a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraInfo&, ::MoleMole::Cameras::CameraFollowCalcData&))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_AB9B1D8989BE15B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_426BC41501263DDE(::System::String* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Func_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_426BC41501263DDE_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_255BE7B5E4C9B018(::Cinemachine::CameraState a1)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_255BE7B5E4C9B018_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_097768D86C218FF4(::UnityEngine::Vector2 a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_097768D86C218FF4_OFFSET))(a1);
	}

	::UnityEngine::Vector3 Method_1_E42134237CFDDEF6(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_E42134237CFDDEF6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B0B02299A559EC10(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_B0B02299A559EC10_OFFSET))(this, a1, a2);
	}

	::Class_1_E5DBED4C784DCB70* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E5DBED4C784DCB70*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_1EDB460A3201EA0A(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_1EDB460A3201EA0A_OFFSET))(this, a1, a2);
	}

	::Cinemachine::CameraState Method_1_66012F79C8619E94(::UnityEngine::Vector3 a1, ::Struct_2_7E9A981C4706FCC7& a2, ::System::Single a3)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::Struct_2_7E9A981C4706FCC7&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_66012F79C8619E94_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_2C5AEA2EB67235CA* Method_1_24748FC20F375725_1()
	{
		return ((::Class_1_2C5AEA2EB67235CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_24748FC20F375725_1_OFFSET))(this);
	}

	::System::Void Method_1_426BC41501263DDE_1(::System::String* a1, ::System::Single a2, ::System::UInt32 a3, ::System::Single a4, ::System::Func_1<::System::Single>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::UInt32, ::System::Single, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_426BC41501263DDE_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0AD139A96804E15E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_0AD139A96804E15E_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_5D3291D964FEACFF(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_5D3291D964FEACFF_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_ED9526B4A80BC9A1(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_ED9526B4A80BC9A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4F31904B94CD26A8(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_4F31904B94CD26A8_OFFSET))(this, a1);
	}

	::Cinemachine::CameraState Method_1_17999C18C76E1A82(::UnityEngine::Vector3 a1)
	{
		return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_17999C18C76E1A82_OFFSET))(this, a1);
	}

	::System::Void Method_1_109E6695F3195450(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_109E6695F3195450_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector4 Method_1_B228DB26E10594DB(::UnityEngine::Vector4 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_B228DB26E10594DB_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Single Method_1_0340884D728972E3(::Cinemachine::CameraState& a1, ::MoleMole::Cameras::CameraDataAccessor* a2, ::UnityEngine::Rect a3, ::System::Single a4, ::System::Single& a5)
	{
		return ((::System::Single(*)(::Cinemachine::CameraState&, ::MoleMole::Cameras::CameraDataAccessor*, ::UnityEngine::Rect, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_0340884D728972E3_OFFSET))(a1, a2, a3, a4, a5);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_DF64B90BA25AAE64(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_DF64B90BA25AAE64_OFFSET))(this, a1);
	}

	::System::Single Method_1_CF88D2689AD9F8FA(::Cinemachine::CameraState& a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_CF88D2689AD9F8FA_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::CameraModuleAvatarDataConfigExt* Method_1_F6AFC74FF9D5F2C2()
	{
		return ((::MoleMole::CameraModuleAvatarDataConfigExt*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_F6AFC74FF9D5F2C2_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 Method_1_79A71C42C344F272(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_79A71C42C344F272_OFFSET))(a1, a2);
	}

	::System::Single Method_1_05FE9C5ED5EF266A(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_05FE9C5ED5EF266A_OFFSET))(this, a1);
	}

	::System::Void Method_1_842333745313F935(::Cinemachine::CameraState& a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_842333745313F935_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E940B763AAFA2EF1(::MoleMole::Cameras::CameraInfo& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraInfo&))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_E940B763AAFA2EF1_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_1_15A0C00D0AF78536(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_15A0C00D0AF78536_OFFSET))(a1, a2, a3);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Void Method_1_C7BF9C1E6A78DCAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_C7BF9C1E6A78DCAB_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2FFDD07820DFF6B4(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Single a6)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_2FFDD07820DFF6B4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::Class_2_D39C2FCEF4D4B922* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_D39C2FCEF4D4B922*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_4F31904B94CD26A8_1(::UnityEngine::Rect a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_4F31904B94CD26A8_1_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion Method_1_5D3291D964FEACFF_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_5D3291D964FEACFF_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_2B0A6FC6102D3DCA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_2B0A6FC6102D3DCA_OFFSET))(this);
	}

	::UnityEngine::Rect Method_1_2E01693CBA549693_1()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_2E01693CBA549693_1_OFFSET))(this);
	}

	::System::Void Method_1_04DC58A6E3312864(::MoleMole::CameraModuleAvatarDataConfigExt* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_04DC58A6E3312864_OFFSET))(this, a1);
	}

	static ::UnityEngine::Rect Method_1_7891671122F5C4CB(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::UnityEngine::Rect(*)(::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_7891671122F5C4CB_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_79C8A89E6CA53ADB(::Cinemachine::CameraState& a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion& a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_79C8A89E6CA53ADB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void Method_1_76C6CA61FA3AF162(::Class_1_E28107671345D933*& a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3& a5, ::UnityEngine::Quaternion& a6, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>& a7)
	{
		return ((::System::Void(*)(::Class_1_E28107671345D933*&, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_76C6CA61FA3AF162_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::String* Method_1_DE2C6C862AAD02E2(::UnityEngine::Rect a1)
	{
		return ((::System::String*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_E28107671345D933_METHOD_1_DE2C6C862AAD02E2_OFFSET))(a1);
	}
};
