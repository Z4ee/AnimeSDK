#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrChangeColorEvent.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrMaterialCfg.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/Client/BrScreenEffect.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/EBrSpeedLevel.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/Struct_2_642E45C6B0A5D00A.h"
#include "unitysdk/Struct_2_806835FEF27B0BFC_2.h"
#include "unitysdk/Struct_2_806835FEF27B0BFC_3.h"
#include "unitysdk/Struct_2_825CDBE011CA0682_1.h"
#include "unitysdk/Struct_2_DE6E731B8C5A5FB8.h"
#include "unitysdk/Struct_2_FBDDDFB807AE5AF5.h"
#include "unitysdk/Struct_2_FBDDDFB807AE5AF5_1.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_5E8D7F836DA392F9;
class Class_1_E85C6B6436A9E3DA;
class Class_3_01B4CC30216C9ABE;
class Class_4_6B5E197F92845903;
class Class_4_D02C44FA813EDE0B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_3_6369AD48BC8AB40A_METHOD_3_004D48F4454AC4AC_OFFSET UNITYSDK_OFFSET(0x1C18C3E0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x1C189610)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_1DA046EF3AB7EF36_OFFSET UNITYSDK_OFFSET(0x1C1890E0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1C18ECA0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_2DFD8112E716FF7B_OFFSET UNITYSDK_OFFSET(0x1C18E020)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_38C4E8B7CE7135C5_OFFSET UNITYSDK_OFFSET(0x1C18BA60)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_3CDB5DB8BD0AC758_OFFSET UNITYSDK_OFFSET(0x1C18A1D0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_46C1572C081ECD2D_OFFSET UNITYSDK_OFFSET(0x1C18E050)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_4CAFE2D98BD991D8_OFFSET UNITYSDK_OFFSET(0x1C18D350)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_51F2B897ACF469BD_OFFSET UNITYSDK_OFFSET(0x1C18CCB0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_5A1C85235CA302C3_OFFSET UNITYSDK_OFFSET(0x1C18C990)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_62C7224EE5981F41_OFFSET UNITYSDK_OFFSET(0x1C18C880)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_66C5F1268DD8D2FC_OFFSET UNITYSDK_OFFSET(0x1C18AFB0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_683F35A5670243E8_OFFSET UNITYSDK_OFFSET(0x1C18E7D0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_6FD22C75466F5A1F_OFFSET UNITYSDK_OFFSET(0x1C189790)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_862ECDA1F0D5FD2B_OFFSET UNITYSDK_OFFSET(0x1C18A030)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_8B62520A41D6C02C_OFFSET UNITYSDK_OFFSET(0x1C18E2C0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_8E0634CDC64D0684_OFFSET UNITYSDK_OFFSET(0x1C189410)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_94B85104EDEA4FFB_OFFSET UNITYSDK_OFFSET(0x1C18EAB0)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x1C189E30)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_B1AC642A1B02DA97_OFFSET UNITYSDK_OFFSET(0x1C18B920)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_C240407BAEA69CE9_OFFSET UNITYSDK_OFFSET(0x1C18CE30)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1C18ED40)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1C18D000)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_D5899D84A5AA954B_1_OFFSET UNITYSDK_OFFSET(0x1C18E980)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_D5899D84A5AA954B_OFFSET UNITYSDK_OFFSET(0x1C18D090)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_DCE709D1A4B35861_OFFSET UNITYSDK_OFFSET(0x1C18E870)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x1C18EA20)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1C18AF20)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1C18E660)
#define CLASS_3_6369AD48BC8AB40A_METHOD_3_EE7339DA6ECF5F6D_OFFSET UNITYSDK_OFFSET(0x1C189830)
#define CLASS_3_6369AD48BC8AB40A__CTOR_OFFSET UNITYSDK_OFFSET(0x1C18ADC0)

inline static constexpr unsigned int Class_3_6369AD48BC8AB40A_TypeDefinitionIndex = 83906;

class Class_3_6369AD48BC8AB40A : public ::Class_2_CEC393DDA7BD65D6
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_5; // 0x28
	::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* Field_3_10; // 0x30
	::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* Field_3_9; // 0x38
	::Class_4_6B5E197F92845903* Field_3_4; // 0x40
	::Il2CppArray<::MoleMole::Arcade::BallsRace::Client::BrMaterialCfg>* Field_3_11; // 0x48
	::UnityEngine::Color Field_3_13; // 0x50
	::System::Single Field_3_7; // 0x60
	::System::Int32 Field_3_16; // 0x64
	::MoleMole::Arcade::BallsRace::EBrSpeedLevel Field_3_17; // 0x68
	::UnityEngine::Color Field_3_12; // 0x6C
	::UnityEngine::Color Field_3_15; // 0x7C
	::UnityEngine::Color Field_3_14; // 0x8C
	::System::Single Field_3_6; // 0x9C
	::System::Single Field_3_8; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1DA046EF3AB7EF36(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_1DA046EF3AB7EF36_OFFSET))(this, a1);
	}

	::System::Void Method_3_8E0634CDC64D0684(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_8E0634CDC64D0684_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_EE7339DA6ECF5F6D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_EE7339DA6ECF5F6D_OFFSET))(this);
	}

	::System::Void Method_3_862ECDA1F0D5FD2B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_862ECDA1F0D5FD2B_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_3_66C5F1268DD8D2FC(::Struct_2_825CDBE011CA0682_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_825CDBE011CA0682_1))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_66C5F1268DD8D2FC_OFFSET))(this, a1);
	}

	::System::Void Method_3_62C7224EE5981F41(::Struct_2_FBDDDFB807AE5AF5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBDDDFB807AE5AF5))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_62C7224EE5981F41_OFFSET))(this, a1);
	}

	::System::Void Method_3_51F2B897ACF469BD(::Struct_2_FBDDDFB807AE5AF5_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBDDDFB807AE5AF5_1))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_51F2B897ACF469BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_C240407BAEA69CE9(::Struct_2_806835FEF27B0BFC_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_806835FEF27B0BFC_3))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_C240407BAEA69CE9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_3CDB5DB8BD0AC758(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_3CDB5DB8BD0AC758_OFFSET))(this, a1);
	}

	::System::Void Method_3_D5899D84A5AA954B(::Class_4_D02C44FA813EDE0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D02C44FA813EDE0B*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_D5899D84A5AA954B_OFFSET))(this, a1);
	}

	::System::Void Method_3_4CAFE2D98BD991D8(::Struct_2_806835FEF27B0BFC_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_806835FEF27B0BFC_2))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_4CAFE2D98BD991D8_OFFSET))(this, a1);
	}

	::System::Void Method_3_5A1C85235CA302C3(::System::Int32 a1, ::Class_3_01B4CC30216C9ABE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_01B4CC30216C9ABE*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_5A1C85235CA302C3_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Rendering::Volume* Method_3_2DFD8112E716FF7B()
	{
		return ((::UnityEngine::Rendering::Volume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_2DFD8112E716FF7B_OFFSET))(this);
	}

	::System::Void Method_3_B1AC642A1B02DA97(::System::Collections::Generic::List_1<::MoleMole::Arcade::BallsRace::Client::BrScreenEffect>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Arcade::BallsRace::Client::BrScreenEffect>*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_B1AC642A1B02DA97_OFFSET))(this, a1);
	}

	::System::Void Method_3_8B62520A41D6C02C(::Struct_2_642E45C6B0A5D00A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_642E45C6B0A5D00A))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_8B62520A41D6C02C_OFFSET))(this, a1);
	}

	::System::Void Method_3_004D48F4454AC4AC(::Class_4_D02C44FA813EDE0B* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D02C44FA813EDE0B*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_004D48F4454AC4AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_683F35A5670243E8(::Class_1_5E8D7F836DA392F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5E8D7F836DA392F9*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_683F35A5670243E8_OFFSET))(this, a1);
	}

	::System::Void Method_3_6FD22C75466F5A1F(::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::BallsRace::Client::BrChangeColorEvent))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_6FD22C75466F5A1F_OFFSET))(this, a1);
	}

	::System::Void Method_3_46C1572C081ECD2D(::MoleMole::Config::ScreenEffectType a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_46C1572C081ECD2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_DCE709D1A4B35861(::Struct_2_DE6E731B8C5A5FB8 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_DE6E731B8C5A5FB8))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_DCE709D1A4B35861_OFFSET))(this, a1);
	}

	::System::Void Method_3_D5899D84A5AA954B_1(::Class_4_D02C44FA813EDE0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D02C44FA813EDE0B*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_D5899D84A5AA954B_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9_1(::Class_1_E85C6B6436A9E3DA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E85C6B6436A9E3DA*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_94B85104EDEA4FFB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_94B85104EDEA4FFB_OFFSET))(this, a1);
	}

	::System::Void Method_3_38C4E8B7CE7135C5(::Class_4_D02C44FA813EDE0B* a1, ::Foundation::AssetPath a2, ::System::String* a3, ::UnityEngine::Transform* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D02C44FA813EDE0B*, ::Foundation::AssetPath, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_38C4E8B7CE7135C5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6369AD48BC8AB40A_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}
};
