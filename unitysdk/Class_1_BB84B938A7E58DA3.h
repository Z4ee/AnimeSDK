#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BB84B938A7E58DA3_Enum_3_E03F030AC6F4C17D.h"
#include "unitysdk/Enum_3_903100312A285543.h"
#include "unitysdk/MoleMole/Config/CameraConfigDataStacking.h"
#include "unitysdk/MoleMole/Config/ConfigDataPriority.h"
#include "unitysdk/MoleMole/Config/ValueVariationType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_3_D902FC5F64432838;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_BB84B938A7E58DA3_METHOD_1_1140C34917783735_OFFSET UNITYSDK_OFFSET(0x105AA510)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x105AAA10)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_15CAEDC2DB4E7912_OFFSET UNITYSDK_OFFSET(0x105AA3D0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_2D69DEA94F4D6D5B_OFFSET UNITYSDK_OFFSET(0x105AA710)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x105A9C20)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x105A9FA0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_3E77A8E85BF8DCFD_OFFSET UNITYSDK_OFFSET(0x105AAB40)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x105AAC00)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x105A9FF0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x105A9A50)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_75764DA4C5EDE91E_OFFSET UNITYSDK_OFFSET(0x105A9DB0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_7FCF09501B03EDC5_OFFSET UNITYSDK_OFFSET(0x105A9A60)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_94FC18DF3A0EF6F9_OFFSET UNITYSDK_OFFSET(0x105AA900)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x105AAC60)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x105AA110)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_96EB22854553A84D_OFFSET UNITYSDK_OFFSET(0x105A9C70)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_A07555946EAE9156_OFFSET UNITYSDK_OFFSET(0x105AA1C0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x105AA000)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x105AAA50)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x105AACE0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_C751AE69BABECA8F_OFFSET UNITYSDK_OFFSET(0x105AA0A0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x105AA880)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x105AABF0)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x105AA870)
#define CLASS_1_BB84B938A7E58DA3_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x105AAB30)
#define CLASS_1_BB84B938A7E58DA3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x105A9220)
#define CLASS_1_BB84B938A7E58DA3__CTOR_OFFSET UNITYSDK_OFFSET(0x105A9A30)

inline static constexpr unsigned int Class_1_BB84B938A7E58DA3_TypeDefinitionIndex = 79037;

class Class_1_BB84B938A7E58DA3 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_7; // 0x10
	::System::Action_1<::System::Int32>* Field_1_19; // 0x18
	::MoleMole::Battle::Entity* Field_1_17; // 0x20
	::System::String* Field_1_2; // 0x28
	::Class_3_D902FC5F64432838* Field_1_18; // 0x30
	::System::Int32 Field_1_1; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Boolean Field_1_13; // 0x40
	::System::Boolean Field_1_8; // 0x41
	::System::Boolean Field_1_14; // 0x42
	::UnityEngine::Vector2 Field_1_29; // 0x44
	::Class_1_BB84B938A7E58DA3_Enum_3_E03F030AC6F4C17D Field_1_4; // 0x4C
	::System::Single Field_1_16; // 0x50
	::System::Boolean Field_1_27; // 0x54
	::Enum_3_903100312A285543 Field_1_20; // 0x55
	::System::Boolean Field_1_26; // 0x56
	::System::Boolean Field_1_10; // 0x57
	::System::Single Field_1_21; // 0x58
	::MoleMole::Config::ValueVariationType Field_1_3; // 0x5C
	::MoleMole::Config::ConfigDataPriority Field_1_12; // 0x60
	::System::Single Field_1_24; // 0x64
	::System::Single Field_1_15; // 0x68
	::System::Single Field_1_6; // 0x6C
	::System::Single Field_1_23; // 0x70
	::MoleMole::Config::CameraConfigDataStacking Field_1_11; // 0x74
	::System::Single Field_1_22; // 0x78
	::System::Single Field_1_28; // 0x7C
	::System::Boolean Field_1_30; // 0x80
	::System::Boolean Field_1_9; // 0x81
	::System::Single Field_1_5; // 0x84
	::System::Single Field_1_25; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_TOSTRING_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_7FCF09501B03EDC5(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_7FCF09501B03EDC5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_C751AE69BABECA8F(::Enum_3_903100312A285543 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_903100312A285543, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_C751AE69BABECA8F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_75764DA4C5EDE91E(::MoleMole::Cameras::CameraDataAccessor* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_75764DA4C5EDE91E_OFFSET))(this, a1);
	}

	::System::Void Method_1_15CAEDC2DB4E7912(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_15CAEDC2DB4E7912_OFFSET))(this, a1);
	}

	::System::Void Method_1_1140C34917783735(::System::Single a1, ::MoleMole::Cameras::CameraDataAccessor* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_1140C34917783735_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_1_94FC18DF3A0EF6F9(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Action_1<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_94FC18DF3A0EF6F9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_2D69DEA94F4D6D5B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_2D69DEA94F4D6D5B_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_A07555946EAE9156()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_A07555946EAE9156_OFFSET))(this);
	}

	::System::Void Method_1_3E77A8E85BF8DCFD(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action_1<::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_3E77A8E85BF8DCFD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_1_96EB22854553A84D()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_96EB22854553A84D_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BB84B938A7E58DA3_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
