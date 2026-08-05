#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A.h"
#include "unitysdk/Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A.h"
#include "unitysdk/Class_2_208CC9941471731A_1184_Enum_3_F581B404422FC8CC.h"
#include "unitysdk/Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A.h"
#include "unitysdk/MoleMole/BattleGameWeatherAndTime.h"
#include "unitysdk/MoleMole/Config/TimePeriodType.h"
#include "unitysdk/MoleMole/Config/WeatherType.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_WeatherType.h"

class Class_0_16E4307DCC419505_596;
class Class_1_48F4A404A08692BE_193;
class Class_1_74DD9FA5B6A527B6;
class Class_1_A2FBD6B251153BAC;
class Class_1_CF69DA127BBBD8F0;
class Class_1_F98F6D057426F2FB_1;
class Class_2_208CC9941471731A_1185;
class Class_2_208CC9941471731A_1186;
class Class_2_5E8E56AB26D3F10E_Class_1_73C31DDA126AE455;
class Class_3_9C3360906FA2AD63_2;
class Class_3_AE02BC8285203464_31;
class Class_3_D92B2BEF6622D84D;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole { class InLevelBuddyDataItem; }
namespace MoleMole { class TeamDataItem; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_54B6207171F8D635_METHOD_2_00824730CACA0911_OFFSET UNITYSDK_OFFSET(0x138DCD90)
#define CLASS_2_54B6207171F8D635_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x138D8130)
#define CLASS_2_54B6207171F8D635_METHOD_2_05A14EB98992CE42_OFFSET UNITYSDK_OFFSET(0x138DB2B0)
#define CLASS_2_54B6207171F8D635_METHOD_2_0BAAE29521A4F0F5_OFFSET UNITYSDK_OFFSET(0x138D7F30)
#define CLASS_2_54B6207171F8D635_METHOD_2_0ED2EEE19D10A0A7_OFFSET UNITYSDK_OFFSET(0x138D77A0)
#define CLASS_2_54B6207171F8D635_METHOD_2_11B0F6D96BF99697_1_OFFSET UNITYSDK_OFFSET(0x138DE590)
#define CLASS_2_54B6207171F8D635_METHOD_2_11B0F6D96BF99697_OFFSET UNITYSDK_OFFSET(0x138DCAF0)
#define CLASS_2_54B6207171F8D635_METHOD_2_1251211870078049_OFFSET UNITYSDK_OFFSET(0x138DD120)
#define CLASS_2_54B6207171F8D635_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x138DD720)
#define CLASS_2_54B6207171F8D635_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x138DA710)
#define CLASS_2_54B6207171F8D635_METHOD_2_1385360DE083EEBC_OFFSET UNITYSDK_OFFSET(0x138D9760)
#define CLASS_2_54B6207171F8D635_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x138DDB60)
#define CLASS_2_54B6207171F8D635_METHOD_2_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x138D76F0)
#define CLASS_2_54B6207171F8D635_METHOD_2_2FED925376FD83FF_OFFSET UNITYSDK_OFFSET(0x138DAE90)
#define CLASS_2_54B6207171F8D635_METHOD_2_3B3923EFE2FEFA4F_OFFSET UNITYSDK_OFFSET(0x138D9310)
#define CLASS_2_54B6207171F8D635_METHOD_2_3B5DF839796FE903_OFFSET UNITYSDK_OFFSET(0x138DC010)
#define CLASS_2_54B6207171F8D635_METHOD_2_3DB0FA7EE65B89C0_OFFSET UNITYSDK_OFFSET(0x138DC280)
#define CLASS_2_54B6207171F8D635_METHOD_2_3FC863B885E15ED5_1_OFFSET UNITYSDK_OFFSET(0x138DB540)
#define CLASS_2_54B6207171F8D635_METHOD_2_3FC863B885E15ED5_OFFSET UNITYSDK_OFFSET(0x138DB150)
#define CLASS_2_54B6207171F8D635_METHOD_2_40458DA4034CF003_OFFSET UNITYSDK_OFFSET(0x138DCC90)
#define CLASS_2_54B6207171F8D635_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x138DB140)
#define CLASS_2_54B6207171F8D635_METHOD_2_498CAFB02706EFF8_OFFSET UNITYSDK_OFFSET(0x138DAF20)
#define CLASS_2_54B6207171F8D635_METHOD_2_4DA5B419DFDF6C2D_OFFSET UNITYSDK_OFFSET(0x138DA740)
#define CLASS_2_54B6207171F8D635_METHOD_2_4F9F07AA07CA308C_OFFSET UNITYSDK_OFFSET(0x138DD500)
#define CLASS_2_54B6207171F8D635_METHOD_2_5452F3DD13A1E0B8_OFFSET UNITYSDK_OFFSET(0x138D93A0)
#define CLASS_2_54B6207171F8D635_METHOD_2_54A6E1B15B2FE668_OFFSET UNITYSDK_OFFSET(0x138DC0A0)
#define CLASS_2_54B6207171F8D635_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x138D9180)
#define CLASS_2_54B6207171F8D635_METHOD_2_626CED3E831BF685_OFFSET UNITYSDK_OFFSET(0x138D85E0)
#define CLASS_2_54B6207171F8D635_METHOD_2_64C3A62DF9DD219A_OFFSET UNITYSDK_OFFSET(0x138D78A0)
#define CLASS_2_54B6207171F8D635_METHOD_2_66CA4C097E71100A_OFFSET UNITYSDK_OFFSET(0x138DB4B0)
#define CLASS_2_54B6207171F8D635_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x138D85F0)
#define CLASS_2_54B6207171F8D635_METHOD_2_6C0C9A2C215F0149_OFFSET UNITYSDK_OFFSET(0x138D7750)
#define CLASS_2_54B6207171F8D635_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x138DB130)
#define CLASS_2_54B6207171F8D635_METHOD_2_8657742EA34BE4FD_OFFSET UNITYSDK_OFFSET(0x138DB9A0)
#define CLASS_2_54B6207171F8D635_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x138DE570)
#define CLASS_2_54B6207171F8D635_METHOD_2_8F468A8DE6302EBD_OFFSET UNITYSDK_OFFSET(0x138DD350)
#define CLASS_2_54B6207171F8D635_METHOD_2_91A773A85E497E9E_OFFSET UNITYSDK_OFFSET(0x138D7840)
#define CLASS_2_54B6207171F8D635_METHOD_2_94CD53F0304ADD0C_OFFSET UNITYSDK_OFFSET(0x138DAC00)
#define CLASS_2_54B6207171F8D635_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x138DD880)
#define CLASS_2_54B6207171F8D635_METHOD_2_9940EF048E20A55B_OFFSET UNITYSDK_OFFSET(0x138D88F0)
#define CLASS_2_54B6207171F8D635_METHOD_2_9AAEE59AA0C74EC8_OFFSET UNITYSDK_OFFSET(0x138DD730)
#define CLASS_2_54B6207171F8D635_METHOD_2_A920AA903E61A5B4_OFFSET UNITYSDK_OFFSET(0x138DA330)
#define CLASS_2_54B6207171F8D635_METHOD_2_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x138D7700)
#define CLASS_2_54B6207171F8D635_METHOD_2_AF8B83F75B5CBAEE_OFFSET UNITYSDK_OFFSET(0x138DE160)
#define CLASS_2_54B6207171F8D635_METHOD_2_B08AA37673A61377_OFFSET UNITYSDK_OFFSET(0x138D8180)
#define CLASS_2_54B6207171F8D635_METHOD_2_B0B356FC54AED426_OFFSET UNITYSDK_OFFSET(0x138DDED0)
#define CLASS_2_54B6207171F8D635_METHOD_2_B189EF55B1922883_OFFSET UNITYSDK_OFFSET(0x138DDB70)
#define CLASS_2_54B6207171F8D635_METHOD_2_C114A1F8E08B6F92_1_OFFSET UNITYSDK_OFFSET(0x138DE580)
#define CLASS_2_54B6207171F8D635_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x138DC700)
#define CLASS_2_54B6207171F8D635_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x138DE2F0)
#define CLASS_2_54B6207171F8D635_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x138DB990)
#define CLASS_2_54B6207171F8D635_METHOD_2_C76511E3073B70AC_OFFSET UNITYSDK_OFFSET(0x138DDEE0)
#define CLASS_2_54B6207171F8D635_METHOD_2_CA20A96113B135EC_OFFSET UNITYSDK_OFFSET(0x138D9240)
#define CLASS_2_54B6207171F8D635_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x138DA680)
#define CLASS_2_54B6207171F8D635_METHOD_2_CA95C13932836E4A_OFFSET UNITYSDK_OFFSET(0x138D8200)
#define CLASS_2_54B6207171F8D635_METHOD_2_CD672FB13311723F_OFFSET UNITYSDK_OFFSET(0x138D8490)
#define CLASS_2_54B6207171F8D635_METHOD_2_DA795D18EA8476ED_OFFSET UNITYSDK_OFFSET(0x138DA720)
#define CLASS_2_54B6207171F8D635_METHOD_2_DE243F7CEAF672B9_OFFSET UNITYSDK_OFFSET(0x138DD470)
#define CLASS_2_54B6207171F8D635_METHOD_2_E1120E58F6D46CEF_OFFSET UNITYSDK_OFFSET(0x138DC710)
#define CLASS_2_54B6207171F8D635_METHOD_2_E292359271A33B16_OFFSET UNITYSDK_OFFSET(0x138DE360)
#define CLASS_2_54B6207171F8D635_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x138D7DF0)
#define CLASS_2_54B6207171F8D635_METHOD_2_E84263E6296E15AF_OFFSET UNITYSDK_OFFSET(0x138D8FA0)
#define CLASS_2_54B6207171F8D635_METHOD_2_E9FCC6B96FA41B04_OFFSET UNITYSDK_OFFSET(0x138D8FC0)
#define CLASS_2_54B6207171F8D635_METHOD_2_EE5B09EAF9CEFB7F_OFFSET UNITYSDK_OFFSET(0x138DDE40)
#define CLASS_2_54B6207171F8D635_METHOD_2_F093B4EB1A80A44D_OFFSET UNITYSDK_OFFSET(0x138DE300)
#define CLASS_2_54B6207171F8D635_METHOD_2_F380E8297F56B26D_OFFSET UNITYSDK_OFFSET(0x138DBDE0)
#define CLASS_2_54B6207171F8D635_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x138D9300)
#define CLASS_2_54B6207171F8D635_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x138D9710)
#define CLASS_2_54B6207171F8D635_METHOD_2_FFAF44E5C586C32E_OFFSET UNITYSDK_OFFSET(0x138DA890)
#define CLASS_2_54B6207171F8D635__CTOR_OFFSET UNITYSDK_OFFSET(0x138D84E0)

inline static constexpr unsigned int Class_2_54B6207171F8D635_TypeDefinitionIndex = 88174;

class Class_2_54B6207171F8D635 : public ::Class_1_3002D7CF5FEE9D3A
{
public:
	::MoleMole::TeamDataItem* Field_2_2; // 0x90
	::System::String* Field_2_8; // 0x98
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_596*>* Field_2_6; // 0xA0
	::System::String* Field_2_15; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F98F6D057426F2FB_1*>* Field_2_7; // 0xB0
	::Class_1_A2FBD6B251153BAC* Field_2_0; // 0xB8
	::System::Collections::Generic::List_1<::MoleMole::BattleGameWeatherAndTime>* Field_2_10; // 0xC0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_9; // 0xC8
	::Class_1_74DD9FA5B6A527B6* Field_2_1; // 0xD0
	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Field_2_3; // 0xD8
	::System::Boolean Field_2_11; // 0xDC
	::System::Int32 Field_2_5; // 0xE0
	::System::Int32 Field_2_4; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635__CTOR_OFFSET))(this);
	}

	::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A Method_2_2ACF2A61FB239D23()
	{
		return ((::Class_1_3002D7CF5FEE9D3A_Enum_3_30DBE09C3D99043A(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_2ACF2A61FB239D23_OFFSET))(this);
	}

	::System::Void Method_2_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6C0C9A2C215F0149(::Class_2_208CC9941471731A_1184_Enum_3_F581B404422FC8CC a1, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1185*>*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_1184_Enum_3_F581B404422FC8CC, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_1185*>*&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_6C0C9A2C215F0149_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0ED2EEE19D10A0A7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_0ED2EEE19D10A0A7_OFFSET))(this);
	}

	::Class_1_48F4A404A08692BE_193* Method_2_64C3A62DF9DD219A()
	{
		return ((::Class_1_48F4A404A08692BE_193*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_64C3A62DF9DD219A_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::String* Method_2_B08AA37673A61377(::System::Boolean& a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_B08AA37673A61377_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_CD672FB13311723F(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_CD672FB13311723F_OFFSET))(this, a1);
	}

	::System::Void Method_2_626CED3E831BF685(::MoleMole::TeamDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TeamDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_626CED3E831BF685_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::MoleMole::Config::WeatherType Method_2_E84263E6296E15AF()
	{
		return ((::MoleMole::Config::WeatherType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_E84263E6296E15AF_OFFSET))(this);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_596* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_596*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA20A96113B135EC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_CA20A96113B135EC_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_0BAAE29521A4F0F5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_0BAAE29521A4F0F5_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B3923EFE2FEFA4F(::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_WeatherType))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_3B3923EFE2FEFA4F_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_5452F3DD13A1E0B8(::MoleMole::InLevelAvatarDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_5452F3DD13A1E0B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9940EF048E20A55B(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_9940EF048E20A55B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::MoleMole::Config::TimePeriodType Method_2_DA795D18EA8476ED()
	{
		return ((::MoleMole::Config::TimePeriodType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_DA795D18EA8476ED_OFFSET))(this);
	}

	::System::Int32 Method_2_4DA5B419DFDF6C2D(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_4DA5B419DFDF6C2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1385360DE083EEBC(::MoleMole::InLevelAvatarDataItem* a1, ::System::Collections::Generic::List_1<::Class_2_5E8E56AB26D3F10E_Class_1_73C31DDA126AE455*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Collections::Generic::List_1<::Class_2_5E8E56AB26D3F10E_Class_1_73C31DDA126AE455*>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_1385360DE083EEBC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_94CD53F0304ADD0C(::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::InLevelBuddyDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_94CD53F0304ADD0C_OFFSET))(this, a1);
	}

	::System::Void Method_2_2FED925376FD83FF(::Class_0_16E4307DCC419505_596* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_596*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_2FED925376FD83FF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_498CAFB02706EFF8(::System::String* a1, ::System::String* a2, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_498CAFB02706EFF8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_3FC863B885E15ED5_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_8657742EA34BE4FD(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_8657742EA34BE4FD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F380E8297F56B26D(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_F380E8297F56B26D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3B5DF839796FE903(::MoleMole::Config::TimePeriodType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TimePeriodType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_3B5DF839796FE903_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3DB0FA7EE65B89C0(::MoleMole::InLevelAvatarDataItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_3DB0FA7EE65B89C0_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Void Method_2_E1120E58F6D46CEF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_E1120E58F6D46CEF_OFFSET))(this, a1);
	}

	::Class_3_9C3360906FA2AD63_2* Method_2_11B0F6D96BF99697()
	{
		return ((::Class_3_9C3360906FA2AD63_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_11B0F6D96BF99697_OFFSET))(this);
	}

	::System::Void Method_2_40458DA4034CF003(::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A a1, ::System::Single a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B_Struct_2_0856AFBA2442CBE4_Struct_2_E4425F04185AE90A, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_40458DA4034CF003_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_00824730CACA0911(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_00824730CACA0911_OFFSET))(this, a1);
	}

	::MoleMole::BattleGameWeatherAndTime Method_2_E9FCC6B96FA41B04()
	{
		return ((::MoleMole::BattleGameWeatherAndTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_E9FCC6B96FA41B04_OFFSET))(this);
	}

	::System::Void Method_2_8F468A8DE6302EBD(::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>* a1, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*, ::System::Collections::Generic::List_1<::MoleMole::InLevelAvatarDataItem*>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_8F468A8DE6302EBD_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DE243F7CEAF672B9(::System::String*& a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_DE243F7CEAF672B9_OFFSET))(this, a1, a2);
	}

	::Class_3_D92B2BEF6622D84D* Method_2_4F9F07AA07CA308C()
	{
		return ((::Class_3_D92B2BEF6622D84D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_4F9F07AA07CA308C_OFFSET))(this);
	}

	::System::Boolean Method_2_FFAF44E5C586C32E(::System::Int32 a1, ::MoleMole::InLevelAvatarDataItem* a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_FFAF44E5C586C32E_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}

	::System::Void Method_2_9AAEE59AA0C74EC8(::MoleMole::Config::TimePeriodType a1, ::MoleMole::Config::WeatherType a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_9AAEE59AA0C74EC8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::Class_1_A2FBD6B251153BAC* Method_2_24748FC20F375725()
	{
		return ((::Class_1_A2FBD6B251153BAC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_B189EF55B1922883(::Class_2_208CC9941471731A_1186* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1186*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_B189EF55B1922883_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE5B09EAF9CEFB7F(::MoleMole::Config::WeatherType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_EE5B09EAF9CEFB7F_OFFSET))(this, a1, a2);
	}

	::MoleMole::TeamDataItem* Method_2_B0B356FC54AED426()
	{
		return ((::MoleMole::TeamDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_B0B356FC54AED426_OFFSET))(this);
	}

	::System::Void Method_2_A920AA903E61A5B4(::MoleMole::InLevelAvatarDataItem* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::InLevelAvatarDataItem*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_A920AA903E61A5B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C76511E3073B70AC(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_C76511E3073B70AC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_05A14EB98992CE42(::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::Config::TimePeriodType, ::MoleMole::Config::WeatherType>&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_05A14EB98992CE42_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_AF8B83F75B5CBAEE(::MoleMole::AvatarInitData* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::AvatarInitData*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_AF8B83F75B5CBAEE_OFFSET))(this, a1, a2);
	}

	::MoleMole::InLevelAvatarDataItem* Method_2_1251211870078049(::MoleMole::AvatarInitData* a1)
	{
		return ((::MoleMole::InLevelAvatarDataItem*(*)(::PVOID, ::MoleMole::AvatarInitData*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_1251211870078049_OFFSET))(this, a1);
	}

	::System::Void Method_2_66CA4C097E71100A(::MoleMole::Config::WeatherType a1, ::MoleMole::Config::TimePeriodType a2, ::System::Int32 a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WeatherType, ::MoleMole::Config::TimePeriodType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_66CA4C097E71100A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_CA95C13932836E4A(::System::ValueTuple_2<::System::Boolean, ::System::String*>& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::System::String*>&))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_CA95C13932836E4A_OFFSET))(this, a1);
	}

	::System::Void Method_2_54A6E1B15B2FE668(::MoleMole::BattleGameWeatherAndTime a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::BattleGameWeatherAndTime))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_54A6E1B15B2FE668_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_F093B4EB1A80A44D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_F093B4EB1A80A44D_OFFSET))(this, a1);
	}

	::Class_1_74DD9FA5B6A527B6* Method_2_F8B73ECE7F883AC1()
	{
		return ((::Class_1_74DD9FA5B6A527B6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_2_3FC863B885E15ED5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_3FC863B885E15ED5_1_OFFSET))(this);
	}

	::System::Void Method_2_91A773A85E497E9E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_91A773A85E497E9E_OFFSET))(this);
	}

	::System::Void Method_2_E292359271A33B16(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_E292359271A33B16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_A2FBD6B251153BAC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2FBD6B251153BAC*))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_C114A1F8E08B6F92_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_C114A1F8E08B6F92_1_OFFSET))(this, a1);
	}

	::Class_3_AE02BC8285203464_31* Method_2_11B0F6D96BF99697_1()
	{
		return ((::Class_3_AE02BC8285203464_31*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54B6207171F8D635_METHOD_2_11B0F6D96BF99697_1_OFFSET))(this);
	}
};
