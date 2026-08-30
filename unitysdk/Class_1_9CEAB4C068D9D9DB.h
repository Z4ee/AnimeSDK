#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0x18A74650)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_0553429A79B3385F_OFFSET UNITYSDK_OFFSET(0x18A74510)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x18A762F0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x18A74860)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_30ACA46E266937DA_OFFSET UNITYSDK_OFFSET(0x18A74920)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_37AF82763632F624_OFFSET UNITYSDK_OFFSET(0x18A75530)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_3A80239A6395FFE3_OFFSET UNITYSDK_OFFSET(0x18A74300)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x18A76200)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_47084D8B74242CC2_OFFSET UNITYSDK_OFFSET(0x18A75850)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4BD79751E28F083D_OFFSET UNITYSDK_OFFSET(0x18A74280)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x18A75450)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E8A303616E6B331_OFFSET UNITYSDK_OFFSET(0x18A75CB0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_59EAE9BEC8D116D8_OFFSET UNITYSDK_OFFSET(0x18A75660)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_6A4DA97832E39276_OFFSET UNITYSDK_OFFSET(0x18A73EF0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_72FFABDE327626D5_OFFSET UNITYSDK_OFFSET(0x18A76000)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_7810B51DB38AD15C_OFFSET UNITYSDK_OFFSET(0x18A746C0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_859206F1760B11B9_1_OFFSET UNITYSDK_OFFSET(0x18A74380)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_859206F1760B11B9_OFFSET UNITYSDK_OFFSET(0x18A75890)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_8FB04BBCD4E2910A_OFFSET UNITYSDK_OFFSET(0x18A75A60)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_90C32D02349B7380_OFFSET UNITYSDK_OFFSET(0x18A75190)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_9179AAA9707A4A72_OFFSET UNITYSDK_OFFSET(0x18A75720)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_97876382630F5CC3_OFFSET UNITYSDK_OFFSET(0x18A75EB0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_9A274C104A942F62_OFFSET UNITYSDK_OFFSET(0x18A75380)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_AD3C012397057B95_OFFSET UNITYSDK_OFFSET(0x18A75090)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C2C495C915C952BA_OFFSET UNITYSDK_OFFSET(0x18A752C0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x18A74EC0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18A754B0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x18A754F0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x18A757D0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x18A75810)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18A75340)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_1_OFFSET UNITYSDK_OFFSET(0x18A75A10)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_OFFSET UNITYSDK_OFFSET(0x18A74E70)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_DFEE7C9AB40CC542_OFFSET UNITYSDK_OFFSET(0x18A741B0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x18A73DF0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x18A76370)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x18A76380)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x18A76390)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18A746B0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x18A75780)
#define CLASS_1_9CEAB4C068D9D9DB__CTOR_OFFSET UNITYSDK_OFFSET(0x18A73C30)

inline static constexpr unsigned int Class_1_9CEAB4C068D9D9DB_TypeDefinitionIndex = 57205;

class Class_1_9CEAB4C068D9D9DB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* LDDDMGDCLGO; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* LLOGJCLBCGN; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*>* JCJLGKFCKDG; // 0x20
	::RPG::GameCore::GameEntity* OBFKHPMDNKN; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_0B84ADD7815498A2>* ODAACJCCPAN; // 0x30
	::Class_2_F1C3EBA366E084A2* KDKKFJKEIAA; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* BMJGIAAOBOB; // 0x40
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x48
	::System::Collections::Generic::List_1<::Struct_2_0B84ADD7815498A2>* FPCKFNCPPLP; // 0x50
	::System::Boolean KJHIFBPHDLG; // 0x58
	::System::Boolean FKAGIEIOHLH; // 0x59
	::System::Boolean GCFMLJJNIJF; // 0x5A
	::RPG::GameCore::AdventureFeatureMuteLevel LIDHBHJCJOP; // 0x5C
	::System::Boolean MAMPCMIJKDF; // 0x60
	::System::Boolean EBAGPLMMGDO; // 0x61
	::System::Boolean KIKHJBBMOBN; // 0x62
	::System::Boolean HKAHNIFPKEF; // 0x63
	::System::Int32 LEBLFCFMCIN; // 0x64

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_DFEE7C9AB40CC542(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_DFEE7C9AB40CC542_OFFSET))(this, a1);
	}

	::System::Void Method_1_3A80239A6395FFE3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_3A80239A6395FFE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_0553429A79B3385F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_0553429A79B3385F_OFFSET))(this, a1);
	}

	::System::Void Method_1_019FAF8DF887E9D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_019FAF8DF887E9D8_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_30ACA46E266937DA(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_30ACA46E266937DA_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_1_90C32D02349B7380(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_90C32D02349B7380_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2C495C915C952BA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C2C495C915C952BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_9A274C104A942F62(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_9A274C104A942F62_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_37AF82763632F624(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_37AF82763632F624_OFFSET))(this, a1);
	}

	::System::Void Method_1_59EAE9BEC8D116D8(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_59EAE9BEC8D116D8_OFFSET))(this, a1);
	}

	::System::Void Method_1_9179AAA9707A4A72(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_9179AAA9707A4A72_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_1_47084D8B74242CC2()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_47084D8B74242CC2_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierInstance* Method_1_4BD79751E28F083D()
	{
		return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4BD79751E28F083D_OFFSET))(this);
	}

	::System::Void Method_1_AD3C012397057B95(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_AD3C012397057B95_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_7810B51DB38AD15C(::RPG::GameCore::AdventureFeatureMuteLevel a1, ::RPG::GameCore::AdventureFeatureMuteLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_7810B51DB38AD15C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CCC2465B83D77835(::RPG::GameCore::AdventureFeatureMuteLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CCC2465B83D77835_1(::RPG::GameCore::AdventureFeatureMuteLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_859206F1760B11B9(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_859206F1760B11B9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_859206F1760B11B9_1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_859206F1760B11B9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FB04BBCD4E2910A(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_8FB04BBCD4E2910A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A4DA97832E39276(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_6A4DA97832E39276_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E8A303616E6B331(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E8A303616E6B331_OFFSET))(this, a1);
	}

	::System::Void Method_1_97876382630F5CC3(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_97876382630F5CC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_72FFABDE327626D5(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_72FFABDE327626D5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Boolean Method_1_081E84DBAB5CA72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_081E84DBAB5CA72B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}
};
