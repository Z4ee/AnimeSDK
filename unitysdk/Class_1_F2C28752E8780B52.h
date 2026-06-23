#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_D902FC5F64432838;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F2C28752E8780B52_METHOD_1_0129C835B7F766C1_OFFSET UNITYSDK_OFFSET(0x123E1D70)
#define CLASS_1_F2C28752E8780B52_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x123DFFD0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_15CAEDC2DB4E7912_OFFSET UNITYSDK_OFFSET(0x123E0DE0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x123E18E0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_2E57CD09B1B708E4_OFFSET UNITYSDK_OFFSET(0x123E0AE0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_34DBBF9DF1FE5D54_OFFSET UNITYSDK_OFFSET(0x123E2440)
#define CLASS_1_F2C28752E8780B52_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x123E1A40)
#define CLASS_1_F2C28752E8780B52_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x123E2280)
#define CLASS_1_F2C28752E8780B52_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x123E0520)
#define CLASS_1_F2C28752E8780B52_METHOD_1_415CC6FF89E5E6B7_OFFSET UNITYSDK_OFFSET(0x123E0070)
#define CLASS_1_F2C28752E8780B52_METHOD_1_4B6F686441E3E40B_OFFSET UNITYSDK_OFFSET(0x123E0940)
#define CLASS_1_F2C28752E8780B52_METHOD_1_4FF67F8A80038F5D_OFFSET UNITYSDK_OFFSET(0x123E0C60)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x123E0510)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x123E0570)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_3_OFFSET UNITYSDK_OFFSET(0x123E0F20)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_4_OFFSET UNITYSDK_OFFSET(0x123E18C0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_5_OFFSET UNITYSDK_OFFSET(0x123E2040)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_6_OFFSET UNITYSDK_OFFSET(0x123E2240)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_7_OFFSET UNITYSDK_OFFSET(0x123E2250)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_8_OFFSET UNITYSDK_OFFSET(0x123E2410)
#define CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x123E0500)
#define CLASS_1_F2C28752E8780B52_METHOD_1_653EEB7EF259681D_OFFSET UNITYSDK_OFFSET(0x123E0580)
#define CLASS_1_F2C28752E8780B52_METHOD_1_726DF56D115B3A12_OFFSET UNITYSDK_OFFSET(0x123E22E0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_750770844813C963_OFFSET UNITYSDK_OFFSET(0x123E06F0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x123E0020)
#define CLASS_1_F2C28752E8780B52_METHOD_1_96EB22854553A84D_OFFSET UNITYSDK_OFFSET(0x123E1C30)
#define CLASS_1_F2C28752E8780B52_METHOD_1_A07555946EAE9156_OFFSET UNITYSDK_OFFSET(0x123E16B0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_AD8DC73A93D04282_OFFSET UNITYSDK_OFFSET(0x123E1EF0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_B0EC9EBBAEF270FA_OFFSET UNITYSDK_OFFSET(0x123E2050)
#define CLASS_1_F2C28752E8780B52_METHOD_1_BA9D72D2E98D603C_OFFSET UNITYSDK_OFFSET(0x123E0D70)
#define CLASS_1_F2C28752E8780B52_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x123E22D0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x123E2130)
#define CLASS_1_F2C28752E8780B52_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x123E21F0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123E1620)
#define CLASS_1_F2C28752E8780B52_METHOD_1_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0x123E0880)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E1D6344B03CB21FA_OFFSET UNITYSDK_OFFSET(0x123E0F40)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x123E0F30)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET UNITYSDK_OFFSET(0x123E16A0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET UNITYSDK_OFFSET(0x123E18D0)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_4_OFFSET UNITYSDK_OFFSET(0x123E2230)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_5_OFFSET UNITYSDK_OFFSET(0x123E2270)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_6_OFFSET UNITYSDK_OFFSET(0x123E2400)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_7_OFFSET UNITYSDK_OFFSET(0x123E2420)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_8_OFFSET UNITYSDK_OFFSET(0x123E2430)
#define CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x123E0010)
#define CLASS_1_F2C28752E8780B52_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x123E2260)
#define CLASS_1_F2C28752E8780B52_METHOD_1_FF0CBCFE6766CB7C_OFFSET UNITYSDK_OFFSET(0x123E1A90)
#define CLASS_1_F2C28752E8780B52_TOSTRING_OFFSET UNITYSDK_OFFSET(0x123DEFA0)
#define CLASS_1_F2C28752E8780B52__CTOR_OFFSET UNITYSDK_OFFSET(0x123DFFA0)

inline static constexpr unsigned int Class_1_F2C28752E8780B52_TypeDefinitionIndex = 71989;

class Class_1_F2C28752E8780B52 : public ::System::Object
{
public:
	::Class_3_D902FC5F64432838* Field_1_27; // 0x10
	::System::Action_2<::Enum_3_903100312A285543, ::Enum_3_903100312A285543>* Field_1_28; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_9; // 0x20
	::UnityEngine::AnimationCurve* Field_1_17; // 0x28
	::MoleMole::Battle::Entity* Field_1_26; // 0x30
	::System::String* Field_1_1; // 0x38
	::UnityEngine::AnimationCurve* Field_1_16; // 0x40
	::System::Boolean Field_1_18; // 0x48
	::System::Boolean Field_1_20; // 0x49
	::System::Boolean Field_1_48; // 0x4A
	::System::Boolean Field_1_7; // 0x4B
	::System::Single Field_1_34; // 0x4C
	::System::Single Field_1_38; // 0x50
	::System::Single Field_1_31; // 0x54
	::System::Single Field_1_30; // 0x58
	::System::Single Field_1_45; // 0x5C
	::MoleMole::Config::CameraConfigDataStacking Field_1_22; // 0x60
	::System::Single Field_1_46; // 0x64
	::System::Single Field_1_13; // 0x68
	::MoleMole::Config::ConfigDataPlayStacking Field_1_21; // 0x6C
	::MoleMole::Config::ConfigDataPriority Field_1_23; // 0x70
	::System::Single Field_1_10; // 0x74
	::System::Single Field_1_42; // 0x78
	::MoleMole::Config::ValueVariationType Field_1_2; // 0x7C
	::System::Single Field_1_35; // 0x80
	::System::Single Field_1_33; // 0x84
	::System::Single Field_1_15; // 0x88
	::System::Int32 Field_1_25; // 0x8C
	::System::Single Field_1_41; // 0x90
	::System::Single Field_1_43; // 0x94
	::System::Single Field_1_44; // 0x98
	::System::Boolean Field_1_4; // 0x9C
	::System::Boolean Field_1_24; // 0x9D
	::System::Boolean Field_1_6; // 0x9E
	::System::Single Field_1_3; // 0xA0
	::System::Int32 Field_1_0; // 0xA4
	::System::Single Field_1_11; // 0xA8
	::UnityEngine::Vector3 Field_1_5; // 0xAC
	::System::Single Field_1_36; // 0xB8
	::System::Single Field_1_8; // 0xBC
	::System::Single Field_1_37; // 0xC0
	::System::Single Field_1_32; // 0xC4
	::System::Single Field_1_14; // 0xC8
	::System::Single Field_1_47; // 0xCC
	::System::Boolean Field_1_29; // 0xD0
	::System::Boolean Field_1_19; // 0xD1
	::Enum_3_903100312A285543 Field_1_39; // 0xD2
	::System::Boolean Field_1_49; // 0xD3
	::System::Single Field_1_40; // 0xD4
	::System::Single Field_1_12; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B37A17B7A3F06D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_8B37A17B7A3F06D8_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	static ::System::Single Method_1_653EEB7EF259681D()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_653EEB7EF259681D_OFFSET))();
	}

	::System::Void Method_1_750770844813C963(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_750770844813C963_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_15CAEDC2DB4E7912(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_15CAEDC2DB4E7912_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_3_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_E1D6344B03CB21FA(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E1D6344B03CB21FA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A07555946EAE9156()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_A07555946EAE9156_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_4_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA9D72D2E98D603C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_BA9D72D2E98D603C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_FF0CBCFE6766CB7C(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_FF0CBCFE6766CB7C_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_D2038C9A874038B4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_D2038C9A874038B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_0129C835B7F766C1(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_0129C835B7F766C1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_5323F2DF46A044DA_5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_5_OFFSET))(this);
	}

	::System::Single Method_1_2E57CD09B1B708E4(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_2E57CD09B1B708E4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_B0EC9EBBAEF270FA(::MoleMole::Cameras::CameraDataAccessor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_B0EC9EBBAEF270FA_OFFSET))(this, a1);
	}

	::System::Single Method_1_4FF67F8A80038F5D(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_4FF67F8A80038F5D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_415CC6FF89E5E6B7(::Enum_3_903100312A285543 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_903100312A285543, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_415CC6FF89E5E6B7_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_4B6F686441E3E40B(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_4B6F686441E3E40B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_4_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_6()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_6_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_7()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_7_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_5_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_726DF56D115B3A12(::System::Single a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_726DF56D115B3A12_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_6_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_8()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_5323F2DF46A044DA_8_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_7_OFFSET))(this, a1);
	}

	::System::Single Method_1_96EB22854553A84D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_96EB22854553A84D_OFFSET))(this);
	}

	::System::Single Method_1_AD8DC73A93D04282(::MoleMole::Cameras::CameraDataAccessor* a1)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_AD8DC73A93D04282_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_E7F1AECA7CFF8AAD_8_OFFSET))(this, a1);
	}

	::System::Void Method_1_34DBBF9DF1FE5D54(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F2C28752E8780B52_METHOD_1_34DBBF9DF1FE5D54_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
