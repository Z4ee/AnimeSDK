#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FlipMode.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class UIAutoFlipMonoPlugin; }
namespace RPG::Client { class UIPageTurnMonoPlugin; }
namespace System { class Action; }

#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x17216890)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x172164B0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_3C85D68D960FC053_OFFSET UNITYSDK_OFFSET(0x17216910)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_3CAB3F134E5CEF52_OFFSET UNITYSDK_OFFSET(0x17215C90)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x17215F40)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x17215FA0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x17216000)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x17215EE0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET UNITYSDK_OFFSET(0x172160C0)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_629B474DE7862D90_OFFSET UNITYSDK_OFFSET(0x17217130)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x17215C20)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_97B44ED90A2DE2AB_OFFSET UNITYSDK_OFFSET(0x17216510)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x17215B50)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_B839AD5CB4E018CF_OFFSET UNITYSDK_OFFSET(0x17216B70)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_E44A8E4E3318F2F0_OFFSET UNITYSDK_OFFSET(0x17217400)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x17216060)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17217970)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPLEFTPAGE_B__25_0_OFFSET UNITYSDK_OFFSET(0x17217990)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPRIGHTPAGE_B__24_0_OFFSET UNITYSDK_OFFSET(0x17217980)
#define RPG_CLIENT_UIAUTOFLIPBEHAVIOR__UPDATE_B__27_0_OFFSET UNITYSDK_OFFSET(0x172179A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAutoFlipBehavior_TypeDefinitionIndex = 67849;

	class UIAutoFlipBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Boolean flippingStarted; // 0x38
		::System::Boolean isPageFlipping; // 0x39
		::System::Single elapsedTime; // 0x3C
		::System::Single nextPageCountDown; // 0x40
		::System::Boolean isBookInteractable; // 0x44
		::System::Single elapsedTime2; // 0x48
		::System::Boolean isFlipping; // 0x4C
		::System::Action* finish; // 0x50
		::System::Single xc; // 0x58
		::System::Single pageWidth; // 0x5C
		::System::Single pageHeight; // 0x60
		::RPG::Client::FlipMode flipMode; // 0x64
		::System::Int32 targetPaper; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_777C630B90A28EF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_777C630B90A28EF1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::RPG::Client::UIAutoFlipMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::UIAutoFlipMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_3CAB3F134E5CEF52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_3CAB3F134E5CEF52_OFFSET))(this);
		}

		::System::Void Method_3_B839AD5CB4E018CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_B839AD5CB4E018CF_OFFSET))(this);
		}

		::System::Void Method_3_E44A8E4E3318F2F0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_E44A8E4E3318F2F0_OFFSET))(this);
		}

		::System::Void Method_3_3C85D68D960FC053(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_3C85D68D960FC053_OFFSET))(this, a1);
		}

		::System::Void Method_3_6112A1276899AF0F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_6112A1276899AF0F_OFFSET))(this);
		}

		::System::Void Method_3_629B474DE7862D90(::RPG::Client::UIPageTurnMonoPlugin* a1, ::System::Single a2, ::RPG::Client::FlipMode a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIPageTurnMonoPlugin*, ::System::Single, ::RPG::Client::FlipMode, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_629B474DE7862D90_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Method_3_97B44ED90A2DE2AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR_METHOD_3_97B44ED90A2DE2AB_OFFSET))(this);
		}

		::System::Void _FlipRightPage_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPRIGHTPAGE_B__24_0_OFFSET))(this);
		}

		::System::Void _FlipLeftPage_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__FLIPLEFTPAGE_B__25_0_OFFSET))(this);
		}

		::System::Void _Update_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIAUTOFLIPBEHAVIOR__UPDATE_B__27_0_OFFSET))(this);
		}
	};
}
