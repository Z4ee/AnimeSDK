#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1410;
class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1412;
class Class_1_576F4DC5F5A776FC;
class Class_1_D01AEBC83BBAFF3D;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarActiveSkillUpgradePageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDetailDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingCarDriverSelectPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingChallengeMatchPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingComPopUpDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingDIYPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingExitDoubleConfirmationDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingGamePlayFinishPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingGameplayResultDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingInitCarPreviewPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingInitCarSelectPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingLightConeRewardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingLimitedRewardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewCarDisplayPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewCarDriverPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewDevelopTargetDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewPartDisplayPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingNewPartHintDialogViewModel; }
namespace RPG::Client::B51Racing { class B51RacingReadyPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingScoreBoardPageViewModel; }
namespace RPG::Client::B51Racing { class B51RacingSeasonProgressDialogViewModel; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_13FD53A6567A3DBC_OFFSET UNITYSDK_OFFSET(0x17238090)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_14BF31A0C1757D1F_OFFSET UNITYSDK_OFFSET(0x17237640)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_23CC81B7070702C0_OFFSET UNITYSDK_OFFSET(0x17236400)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_2AB34CE7A05267C0_OFFSET UNITYSDK_OFFSET(0x17236BE0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_33F8E3774D9E1B66_OFFSET UNITYSDK_OFFSET(0x17236150)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3430D83EEB3B7041_1_OFFSET UNITYSDK_OFFSET(0x17235FF0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3430D83EEB3B7041_2_OFFSET UNITYSDK_OFFSET(0x172360A0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3430D83EEB3B7041_OFFSET UNITYSDK_OFFSET(0x17235F40)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3E0FB9ABB14450FC_OFFSET UNITYSDK_OFFSET(0x17236960)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_51B9C63177F10032_OFFSET UNITYSDK_OFFSET(0x17236590)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_53D01BC7BE0C0CAC_OFFSET UNITYSDK_OFFSET(0x17235EB0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_55157FBA4997D865_OFFSET UNITYSDK_OFFSET(0x17237F10)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_5A0143D575D2F738_OFFSET UNITYSDK_OFFSET(0x17237840)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_5FD8719E3F0EE959_OFFSET UNITYSDK_OFFSET(0x17236C90)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x17236EB0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_67A57854DA397CBE_OFFSET UNITYSDK_OFFSET(0x17237F90)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_692FD54F7605AE4E_OFFSET UNITYSDK_OFFSET(0x17236720)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_77515BAD6284E46E_OFFSET UNITYSDK_OFFSET(0x17238290)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_7AA3E9BF684DB30B_OFFSET UNITYSDK_OFFSET(0x172368B0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_82D2B91848874CEF_OFFSET UNITYSDK_OFFSET(0x17236DB0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_89657633E4DB0689_OFFSET UNITYSDK_OFFSET(0x172379D0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_910860436DFA5D68_OFFSET UNITYSDK_OFFSET(0x17236FB0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_95F4C168BA183CB8_OFFSET UNITYSDK_OFFSET(0x17237140)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_ABC9C5B0D1CB6C10_OFFSET UNITYSDK_OFFSET(0x172383B0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_B03BD337C608E98D_OFFSET UNITYSDK_OFFSET(0x17237B60)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_BC350F5501A93C43_OFFSET UNITYSDK_OFFSET(0x17237C60)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_C679467C5061ED02_OFFSET UNITYSDK_OFFSET(0x17237D60)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_C9E4E8AA101FC03C_OFFSET UNITYSDK_OFFSET(0x17237240)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_D309500C6DCCE638_OFFSET UNITYSDK_OFFSET(0x17237740)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_E52B7D4D845B1DF9_OFFSET UNITYSDK_OFFSET(0x172384B0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_E7AAA46C9F1C33AB_OFFSET UNITYSDK_OFFSET(0x172373C0)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_EF6BFDBAE528DC49_OFFSET UNITYSDK_OFFSET(0x17238190)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_F03E08C766E474CF_OFFSET UNITYSDK_OFFSET(0x17237E10)
#define CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_F41399F24E749A51_OFFSET UNITYSDK_OFFSET(0x17237540)
#define CLASS_1_A0E7B93CE3D1C3B3__CTOR_OFFSET UNITYSDK_OFFSET(0x172385C0)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3_TypeDefinitionIndex = 80414;

class Class_1_A0E7B93CE3D1C3B3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3__CTOR_OFFSET))(this);
	}

	::Class_1_576F4DC5F5A776FC* Method_1_53D01BC7BE0C0CAC()
	{
		return ((::Class_1_576F4DC5F5A776FC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_53D01BC7BE0C0CAC_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1411* Method_1_3430D83EEB3B7041()
	{
		return ((::Class_0_16E4307DCC419505_1411*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3430D83EEB3B7041_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1412* Method_1_3430D83EEB3B7041_1()
	{
		return ((::Class_0_16E4307DCC419505_1412*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3430D83EEB3B7041_1_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_1410* Method_1_3430D83EEB3B7041_2()
	{
		return ((::Class_0_16E4307DCC419505_1410*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3430D83EEB3B7041_2_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_33F8E3774D9E1B66()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_33F8E3774D9E1B66_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_23CC81B7070702C0(::System::Boolean a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_23CC81B7070702C0_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_51B9C63177F10032(::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingInitCarPreviewPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_51B9C63177F10032_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_692FD54F7605AE4E(::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingInitCarSelectPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_692FD54F7605AE4E_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_7AA3E9BF684DB30B(::RPG::Client::B51Racing::B51RacingChallengeMatchPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingChallengeMatchPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_7AA3E9BF684DB30B_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_2AB34CE7A05267C0(::RPG::Client::B51Racing::B51RacingReadyPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingReadyPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_2AB34CE7A05267C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5FD8719E3F0EE959(::RPG::Client::B51Racing::B51RacingGamePlayFinishPageViewModel* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGamePlayFinishPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_5FD8719E3F0EE959_OFFSET))(this, a1);
	}

	::System::Void Method_1_82D2B91848874CEF(::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplayResultDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_82D2B91848874CEF_OFFSET))(this, a1);
	}

	::System::Void Method_1_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_65F4D176AD70D378_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_910860436DFA5D68(::RPG::Client::B51Racing::B51RacingDIYPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingDIYPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_910860436DFA5D68_OFFSET))(this, a1);
	}

	::System::Void Method_1_95F4C168BA183CB8(::RPG::Client::B51Racing::B51RacingNewDevelopTargetDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewDevelopTargetDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_95F4C168BA183CB8_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::UIController*>* Method_1_C9E4E8AA101FC03C(::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_C9E4E8AA101FC03C_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise_1<::RPG::Client::UIController*>* Method_1_E7AAA46C9F1C33AB(::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::UIController*>*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_E7AAA46C9F1C33AB_OFFSET))(this, a1);
	}

	::System::Void Method_1_F41399F24E749A51(::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDetailDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_F41399F24E749A51_OFFSET))(this, a1);
	}

	::System::Void Method_1_14BF31A0C1757D1F(::RPG::Client::B51Racing::B51RacingComPopUpDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingComPopUpDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_14BF31A0C1757D1F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D309500C6DCCE638(::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewPartHintDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_D309500C6DCCE638_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_5A0143D575D2F738(::RPG::Client::B51Racing::B51RacingNewCarDisplayPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewCarDisplayPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_5A0143D575D2F738_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_89657633E4DB0689(::RPG::Client::B51Racing::B51RacingNewPartDisplayPageViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewPartDisplayPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_89657633E4DB0689_OFFSET))(this, a1);
	}

	::System::Void Method_1_B03BD337C608E98D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_B03BD337C608E98D_OFFSET))(this);
	}

	::System::Void Method_1_BC350F5501A93C43(::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingNewCarDriverPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_BC350F5501A93C43_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_C679467C5061ED02(::RPG::Client::B51Racing::B51RacingSeasonProgressDialogViewModel* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingSeasonProgressDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_C679467C5061ED02_OFFSET))(this, a1);
	}

	::System::Void Method_1_F03E08C766E474CF(::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingScoreBoardPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_F03E08C766E474CF_OFFSET))(this, a1);
	}

	::System::Void Method_1_55157FBA4997D865()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_55157FBA4997D865_OFFSET))(this);
	}

	::System::Void Method_1_67A57854DA397CBE(::RPG::Client::B51Racing::B51RacingExitDoubleConfirmationDialogViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingExitDoubleConfirmationDialogViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_67A57854DA397CBE_OFFSET))(this, a1);
	}

	::RPG::Client::UIController* Method_1_13FD53A6567A3DBC(::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel* a1)
	{
		return ((::RPG::Client::UIController*(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarActiveSkillUpgradePageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_13FD53A6567A3DBC_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF6BFDBAE528DC49(::RPG::Client::B51Racing::B51RacingCarDriverSelectPageViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingCarDriverSelectPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_EF6BFDBAE528DC49_OFFSET))(this, a1);
	}

	::System::Void Method_1_77515BAD6284E46E(::Class_1_D01AEBC83BBAFF3D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D01AEBC83BBAFF3D*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_77515BAD6284E46E_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABC9C5B0D1CB6C10(::RPG::Client::B51Racing::B51RacingLimitedRewardPageViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingLimitedRewardPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_ABC9C5B0D1CB6C10_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52B7D4D845B1DF9(::RPG::Client::B51Racing::B51RacingLightConeRewardPageViewModel* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingLightConeRewardPageViewModel*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_E52B7D4D845B1DF9_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_3E0FB9ABB14450FC(::System::String* a1, ::System::String* a2, ::System::Object* a3, ::System::Type* a4)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3_METHOD_1_3E0FB9ABB14450FC_OFFSET))(this, a1, a2, a3, a4);
	}
};
