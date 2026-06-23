#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPlayStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"

class Class_3_D902FC5F64432838;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_50459AA2C7E65196_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x168CE6E0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_15CAEDC2DB4E7912_OFFSET UNITYSDK_OFFSET(0x168CF3A0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_1D78122D4CBFE760_OFFSET UNITYSDK_OFFSET(0x168CE720)
#define CLASS_1_50459AA2C7E65196_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x168CF110)
#define CLASS_1_50459AA2C7E65196_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x168CF5D0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x168CF620)
#define CLASS_1_50459AA2C7E65196_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x168CECA0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_51AA029DE3B8B5BD_OFFSET UNITYSDK_OFFSET(0x168CEE20)
#define CLASS_1_50459AA2C7E65196_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x168CF390)
#define CLASS_1_50459AA2C7E65196_METHOD_1_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x168CE8D0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x168CF6D0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_96EB22854553A84D_OFFSET UNITYSDK_OFFSET(0x168CE5A0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_A07555946EAE9156_OFFSET UNITYSDK_OFFSET(0x168CF180)
#define CLASS_1_50459AA2C7E65196_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x168CF4E0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_C751AE69BABECA8F_OFFSET UNITYSDK_OFFSET(0x168CE860)
#define CLASS_1_50459AA2C7E65196_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x168CF560)
#define CLASS_1_50459AA2C7E65196_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x168CF670)
#define CLASS_1_50459AA2C7E65196_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x168CF4F0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_E375BB85C82A7CE6_OFFSET UNITYSDK_OFFSET(0x168CE9F0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x168CF6B0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x168CF6C0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_F2242F0282B1FE22_OFFSET UNITYSDK_OFFSET(0x168CECF0)
#define CLASS_1_50459AA2C7E65196_METHOD_1_F240EFA7A704696B_OFFSET UNITYSDK_OFFSET(0x168CEFC0)
#define CLASS_1_50459AA2C7E65196_TOSTRING_OFFSET UNITYSDK_OFFSET(0x168CD8F0)
#define CLASS_1_50459AA2C7E65196__CTOR_OFFSET UNITYSDK_OFFSET(0x168CE590)

inline static constexpr unsigned int Class_1_50459AA2C7E65196_TypeDefinitionIndex = 59258;

class Class_1_50459AA2C7E65196 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_9; // 0x10
	::Class_3_D902FC5F64432838* Field_1_27; // 0x18
	::System::String* Field_1_1; // 0x20
	::UnityEngine::AnimationCurve* Field_1_8; // 0x28
	::MoleMole::Battle::Entity* Field_1_26; // 0x30
	::System::Single Field_1_6; // 0x38
	::System::Boolean Field_1_16; // 0x3C
	::System::Boolean Field_1_10; // 0x3D
	::System::Boolean Field_1_11; // 0x3E
	::MoleMole::Config::ValueVariationType Field_1_2; // 0x40
	::MoleMole::Config::ConfigDataPlayStacking Field_1_13; // 0x44
	::System::Single Field_1_24; // 0x48
	::MoleMole::Config::ConfigDataPriority Field_1_15; // 0x4C
	::System::Single Field_1_22; // 0x50
	::System::Single Field_1_21; // 0x54
	::System::Single Field_1_23; // 0x58
	::System::Single Field_1_17; // 0x5C
	::System::Boolean Field_1_25; // 0x60
	::Enum_3_903100312A285543 Field_1_19; // 0x61
	::System::Boolean Field_1_18; // 0x62
	::System::Boolean Field_1_12; // 0x63
	::System::Single Field_1_7; // 0x64
	::System::Single Field_1_4; // 0x68
	::System::Single Field_1_5; // 0x6C
	::MoleMole::Config::CameraConfigDataStacking Field_1_14; // 0x70
	::System::Int32 Field_1_0; // 0x74
	::System::Single Field_1_20; // 0x78
	::System::Single Field_1_3; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_TOSTRING_OFFSET))(this);
	}

	::System::Single Method_1_96EB22854553A84D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_96EB22854553A84D_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_1D78122D4CBFE760(::MoleMole::Cameras::CameraDataAccessor* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_1D78122D4CBFE760_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_1_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Void Method_1_E375BB85C82A7CE6(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2, ::MoleMole::CameraModuleAvatarDataConfigExt* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::CameraModuleAvatarDataConfigExt*))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_E375BB85C82A7CE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_F2242F0282B1FE22(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_F2242F0282B1FE22_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A07555946EAE9156()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_A07555946EAE9156_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_15CAEDC2DB4E7912(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_15CAEDC2DB4E7912_OFFSET))(this, a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Single Method_1_F240EFA7A704696B(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_F240EFA7A704696B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_51AA029DE3B8B5BD(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_51AA029DE3B8B5BD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C751AE69BABECA8F(::Enum_3_903100312A285543 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_903100312A285543, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_C751AE69BABECA8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50459AA2C7E65196_METHOD_1_9681042564541CD6_OFFSET))(this);
	}
};
