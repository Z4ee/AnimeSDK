#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A7EFFA89187955C_Struct_2_25AF7E5CD29C404A.h"
#include "unitysdk/Enum_3_18E03FBA29F375BB.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaSinglePushPullParamsStruct.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_5DC1F047D4EA2A30.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_2;
class Class_1_A677A4EF8BA06398;
class Class_2_5F64140FAB2210F3;
class Class_2_699998D4E6F32559;
namespace MoleMole { class ConfigUICinema; }
namespace MoleMole { class UICinemaPlayPageController; }
namespace MoleMole::Config { class ConfigCameraNoise; }
namespace MoleMole::Config { class ConfigHollowCameraShake; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }

#define CLASS_1_0A7EFFA89187955C_METHOD_1_014FB4F6CA4115B0_OFFSET UNITYSDK_OFFSET(0x10E55AE0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_074895050D26A224_OFFSET UNITYSDK_OFFSET(0x10E56130)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x10E54C50)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x10E589D0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_0FD2DEE24914FC05_OFFSET UNITYSDK_OFFSET(0x10E55FD0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_12B6EDF68F3CDE7A_OFFSET UNITYSDK_OFFSET(0x10E57540)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_1E1FFD875CA8014A_1_OFFSET UNITYSDK_OFFSET(0x10E55EE0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x10E560E0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_2CBA6A2346720E85_OFFSET UNITYSDK_OFFSET(0x10E55250)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x10E584F0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x10E54CD0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x10E58460)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x10E55E50)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10E55960)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_51F2B897ACF469BD_OFFSET UNITYSDK_OFFSET(0x10E58780)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_57C72D11F44920F7_OFFSET UNITYSDK_OFFSET(0x10E565B0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_67F7C576EFF8D690_OFFSET UNITYSDK_OFFSET(0x10E55440)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_745CA43C185AC41A_OFFSET UNITYSDK_OFFSET(0x10E55150)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_78385E9CD11A8E10_OFFSET UNITYSDK_OFFSET(0x10E57850)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x10E58410)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x10E55630)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9126C9C94FC0FA6A_OFFSET UNITYSDK_OFFSET(0x10E56EC0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_927C003551530883_OFFSET UNITYSDK_OFFSET(0x10E54F40)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x10E55F30)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x10E574B0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10E56C70)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9711FBACEDA060A2_OFFSET UNITYSDK_OFFSET(0x10E571A0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9BFE7737D26CFA72_OFFSET UNITYSDK_OFFSET(0x10E58C60)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_A58FC9E4E80C1ACA_OFFSET UNITYSDK_OFFSET(0x10E55640)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x10E56D00)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x10E583A0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_B49E4F7706129DBE_OFFSET UNITYSDK_OFFSET(0x10E57F40)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_1_OFFSET UNITYSDK_OFFSET(0x10E57010)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_OFFSET UNITYSDK_OFFSET(0x10E54AC0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA21411944361A57_OFFSET UNITYSDK_OFFSET(0x10E56BC0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10E56E50)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10E58420)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10E55A10)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x10E55A60)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x10E55900)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_F5CA364D5B81CAC2_OFFSET UNITYSDK_OFFSET(0x10E58910)
#define CLASS_1_0A7EFFA89187955C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E54A00)

inline static constexpr unsigned int Class_1_0A7EFFA89187955C_TypeDefinitionIndex = 58889;

class Class_1_0A7EFFA89187955C : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::UICameraAtom>* Field_1_17; // 0x10
	::System::Action* Field_1_7; // 0x18
	::Class_2_699998D4E6F32559* Field_1_9; // 0x20
	::Class_2_5F64140FAB2210F3* Field_1_15; // 0x28
	::UnityEngine::AnimationCurve* Field_1_1; // 0x30
	::System::Action* Field_1_8; // 0x38
	::System::Collections::Generic::List_1<::Class_1_A677A4EF8BA06398*>* Field_1_10; // 0x40
	::System::Func_1<::MoleMole::UICameraAtom>* Field_1_16; // 0x48
	::Class_1_47EB23CB5C4B2615_2* Field_1_13; // 0x50
	::UnityEngine::AnimationCurve* Field_1_2; // 0x58
	::MoleMole::UICinemaPlayPageController* Field_1_11; // 0x60
	::MoleMole::Config::ConfigCameraNoise* Field_1_14; // 0x68
	::System::Single Field_1_5; // 0x70
	::System::Single Field_1_4; // 0x74
	::Enum_3_AF372E25E8B1C1D6 Field_1_12; // 0x78
	::Class_1_0A7EFFA89187955C_Struct_2_25AF7E5CD29C404A Field_1_18; // 0x7C
	::System::Single Field_1_6; // 0x9C
	::System::Single Field_1_3; // 0xA0
	::Enum_3_18E03FBA29F375BB Field_1_0; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BED485AA59C790B8(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_745CA43C185AC41A(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_745CA43C185AC41A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBA6A2346720E85(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_2CBA6A2346720E85_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_A58FC9E4E80C1ACA(::MoleMole::UICameraAtom a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_A58FC9E4E80C1ACA_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_47EB23CB5C4B2615_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_2*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_014FB4F6CA4115B0(::MoleMole::CinemaCameraPosEnum a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_014FB4F6CA4115B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_927C003551530883(::MoleMole::Config::ConfigCameraNoise* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_927C003551530883_OFFSET))(this, a1, a2, a3, a4);
	}

	::MoleMole::UICameraAtom Method_1_0FD2DEE24914FC05()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_0FD2DEE24914FC05_OFFSET))(this);
	}

	::System::Void Method_1_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_1_57C72D11F44920F7(::Enum_3_18E03FBA29F375BB a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_18E03FBA29F375BB, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_57C72D11F44920F7_OFFSET))(this, a1, a2);
	}

	::MoleMole::UICameraAtom Method_1_CA21411944361A57()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA21411944361A57_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_BED485AA59C790B8_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_1_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::UICameraAtom Method_1_9711FBACEDA060A2()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9711FBACEDA060A2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_074895050D26A224(::Enum_3_18E03FBA29F375BB a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_18E03FBA29F375BB))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_074895050D26A224_OFFSET))(this, a1);
	}

	::System::Void Method_1_67F7C576EFF8D690(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_67F7C576EFF8D690_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_12B6EDF68F3CDE7A(::MoleMole::ConfigUICinema* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_12B6EDF68F3CDE7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_B49E4F7706129DBE(::Class_2_5F64140FAB2210F3* a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5F64140FAB2210F3*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_B49E4F7706129DBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_1E1FFD875CA8014A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_1E1FFD875CA8014A_1_OFFSET))(this);
	}

	::System::Void Method_1_51F2B897ACF469BD(::Struct_2_5DC1F047D4EA2A30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5DC1F047D4EA2A30))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_51F2B897ACF469BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5CA364D5B81CAC2(::MoleMole::UICinemaPlayPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_F5CA364D5B81CAC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9126C9C94FC0FA6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9126C9C94FC0FA6A_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_9BFE7737D26CFA72(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9BFE7737D26CFA72_OFFSET))(this, a1);
	}

	::System::Void Method_1_78385E9CD11A8E10(::Enum_3_18E03FBA29F375BB a1, ::MoleMole::CinemaSinglePushPullParamsStruct a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_18E03FBA29F375BB, ::MoleMole::CinemaSinglePushPullParamsStruct))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_78385E9CD11A8E10_OFFSET))(this, a1, a2);
	}
};
