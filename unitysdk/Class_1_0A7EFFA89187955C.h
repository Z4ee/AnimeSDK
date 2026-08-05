#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A7EFFA89187955C_Struct_2_25AF7E5CD29C404A_1.h"
#include "unitysdk/Enum_3_121CF606CB7E9CD1_4.h"
#include "unitysdk/Enum_3_AF372E25E8B1C1D6.h"
#include "unitysdk/MoleMole/CinemaCameraPosEnum.h"
#include "unitysdk/MoleMole/CinemaSinglePushPullParamsStruct.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/Struct_2_5DC1F047D4EA2A30.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_4;
class Class_1_A677A4EF8BA06398;
class Class_2_5F64140FAB2210F3;
class Class_2_DB3DD38167790643;
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

#define CLASS_1_0A7EFFA89187955C_METHOD_1_014FB4F6CA4115B0_OFFSET UNITYSDK_OFFSET(0x1579C280)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x1579C6C0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x1579B4D0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_0FD2DEE24914FC05_OFFSET UNITYSDK_OFFSET(0x1579B7C0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_12B6EDF68F3CDE7A_OFFSET UNITYSDK_OFFSET(0x15799BE0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_273849BF44D75C59_OFFSET UNITYSDK_OFFSET(0x1579AD60)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_2CBA6A2346720E85_OFFSET UNITYSDK_OFFSET(0x1579C810)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x1579A440)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x1579D090)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1579C790)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1579D940)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1579B8E0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_47EDBC4CA1AB8BEE_1_OFFSET UNITYSDK_OFFSET(0x1579C740)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x15799720)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_57C72D11F44920F7_OFFSET UNITYSDK_OFFSET(0x1579A6D0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_67F7C576EFF8D690_OFFSET UNITYSDK_OFFSET(0x1579CA10)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_745CA43C185AC41A_OFFSET UNITYSDK_OFFSET(0x1579BCA0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_1_OFFSET UNITYSDK_OFFSET(0x1579BDA0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x1579B8D0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9126C9C94FC0FA6A_OFFSET UNITYSDK_OFFSET(0x15799FE0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_927C003551530883_OFFSET UNITYSDK_OFFSET(0x1579D310)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1579B430)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x1579D560)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x15799EF0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_9BFE7737D26CFA72_OFFSET UNITYSDK_OFFSET(0x1579B980)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_A58FC9E4E80C1ACA_OFFSET UNITYSDK_OFFSET(0x1579D9C0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_A7035ECAF0F434D7_OFFSET UNITYSDK_OFFSET(0x1579C070)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x1579BF20)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x1579DC80)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_B49E4F7706129DBE_OFFSET UNITYSDK_OFFSET(0x1579CC00)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_1_OFFSET UNITYSDK_OFFSET(0x1579D7A0)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_OFFSET UNITYSDK_OFFSET(0x1579D600)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA21411944361A57_OFFSET UNITYSDK_OFFSET(0x1579BE70)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1579D520)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1579AD00)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1579D040)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x1579B740)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_D502D8CBCA0FC7CA_OFFSET UNITYSDK_OFFSET(0x1579A130)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_DF5A3649AF308E6F_OFFSET UNITYSDK_OFFSET(0x15799770)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x15799F80)
#define CLASS_1_0A7EFFA89187955C_METHOD_1_F5CA364D5B81CAC2_OFFSET UNITYSDK_OFFSET(0x1579BDB0)
#define CLASS_1_0A7EFFA89187955C__CTOR_OFFSET UNITYSDK_OFFSET(0x15799660)

inline static constexpr unsigned int Class_1_0A7EFFA89187955C_TypeDefinitionIndex = 72396;

class Class_1_0A7EFFA89187955C : public ::System::Object
{
public:
	::System::Action* Field_1_11; // 0x10
	::System::Action_1<::MoleMole::UICameraAtom>* Field_1_17; // 0x18
	::Class_2_5F64140FAB2210F3* Field_1_19; // 0x20
	::System::Func_1<::MoleMole::UICameraAtom>* Field_1_18; // 0x28
	::UnityEngine::AnimationCurve* Field_1_0; // 0x30
	::Class_1_47EB23CB5C4B2615_4* Field_1_13; // 0x38
	::UnityEngine::AnimationCurve* Field_1_1; // 0x40
	::System::Collections::Generic::List_1<::Class_1_A677A4EF8BA06398*>* Field_1_8; // 0x48
	::MoleMole::Config::ConfigCameraNoise* Field_1_12; // 0x50
	::System::Action* Field_1_10; // 0x58
	::Class_2_DB3DD38167790643* Field_1_9; // 0x60
	::MoleMole::UICinemaPlayPageController* Field_1_15; // 0x68
	::System::Single Field_1_5; // 0x70
	::Class_1_0A7EFFA89187955C_Struct_2_25AF7E5CD29C404A_1 Field_1_16; // 0x74
	::System::Single Field_1_4; // 0x94
	::Enum_3_121CF606CB7E9CD1_4 Field_1_2; // 0x98
	::System::Single Field_1_6; // 0x9C
	::System::Single Field_1_7; // 0xA0
	::Enum_3_AF372E25E8B1C1D6 Field_1_14; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Method_1_12B6EDF68F3CDE7A(::MoleMole::ConfigUICinema* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_12B6EDF68F3CDE7A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_9126C9C94FC0FA6A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9126C9C94FC0FA6A_OFFSET))(this);
	}

	::MoleMole::UICameraAtom Method_1_D502D8CBCA0FC7CA()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_D502D8CBCA0FC7CA_OFFSET))(this);
	}

	::System::Void Method_1_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_1_DF5A3649AF308E6F(::Enum_3_121CF606CB7E9CD1_4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_121CF606CB7E9CD1_4))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_DF5A3649AF308E6F_OFFSET))(this, a1);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_9BFE7737D26CFA72(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9BFE7737D26CFA72_OFFSET))(this, a1);
	}

	::System::Void Method_1_832295EC279E5994_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_832295EC279E5994_1_OFFSET))(this);
	}

	::System::Void Method_1_F5CA364D5B81CAC2(::MoleMole::UICinemaPlayPageController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICinemaPlayPageController*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_F5CA364D5B81CAC2_OFFSET))(this, a1);
	}

	::MoleMole::UICameraAtom Method_1_CA21411944361A57()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA21411944361A57_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_A7035ECAF0F434D7(::Struct_2_5DC1F047D4EA2A30 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5DC1F047D4EA2A30))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_A7035ECAF0F434D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_745CA43C185AC41A(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_745CA43C185AC41A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBA6A2346720E85(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_2CBA6A2346720E85_OFFSET))(this, a1);
	}

	::System::Void Method_1_B49E4F7706129DBE(::Class_2_5F64140FAB2210F3* a1, ::MoleMole::Config::ConfigHollowCameraShake* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5F64140FAB2210F3*, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_B49E4F7706129DBE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_273849BF44D75C59(::Enum_3_121CF606CB7E9CD1_4 a1, ::MoleMole::CinemaSinglePushPullParamsStruct a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_121CF606CB7E9CD1_4, ::MoleMole::CinemaSinglePushPullParamsStruct))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_273849BF44D75C59_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_67F7C576EFF8D690(::MoleMole::Config::ConfigHollowCameraShake* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowCameraShake*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_67F7C576EFF8D690_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::System::Void Method_1_57C72D11F44920F7(::Enum_3_121CF606CB7E9CD1_4 a1, ::UnityEngine::AnimationCurve* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_121CF606CB7E9CD1_4, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_57C72D11F44920F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_014FB4F6CA4115B0(::MoleMole::CinemaCameraPosEnum a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CinemaCameraPosEnum, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_014FB4F6CA4115B0_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_1_BED485AA59C790B8(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BED485AA59C790B8_1(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_BED485AA59C790B8_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_0AB718BEE9EA06D7(::Class_1_47EB23CB5C4B2615_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_47EB23CB5C4B2615_4*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_927C003551530883(::MoleMole::Config::ConfigCameraNoise* a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::AnimationCurve* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraNoise*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_927C003551530883_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4343F372F34C05BF_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_4343F372F34C05BF_2_OFFSET))(this);
	}

	::System::Void Method_1_A58FC9E4E80C1ACA(::MoleMole::UICameraAtom a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UICameraAtom))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_A58FC9E4E80C1ACA_OFFSET))(this, a1);
	}

	::MoleMole::UICameraAtom Method_1_0FD2DEE24914FC05()
	{
		return ((::MoleMole::UICameraAtom(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_0FD2DEE24914FC05_OFFSET))(this);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_47EDBC4CA1AB8BEE_1_OFFSET))(this);
	}

	::System::Void Method_1_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A7EFFA89187955C_METHOD_1_B3A88D7849969A71_OFFSET))(this, a1);
	}
};
