#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_1_23F67DD15593C8D6;
class Class_2_0FE616E64A04D650;
namespace System { class Object; }

#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xA772100)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SETHIDE_OFFSET UNITYSDK_OFFSET(0xA772270)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SHOW18_OFFSET UNITYSDK_OFFSET(0xA772160)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA7723F0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA771EB0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA771F20)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONCLICKHINT_OFFSET UNITYSDK_OFFSET(0xA7725A0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xA7724F0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONSHOW18INSTARTUPPHASE_OFFSET UNITYSDK_OFFSET(0xA772540)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xA772380)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTIMEUP_OFFSET UNITYSDK_OFFSET(0xA772760)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA772310)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA772900)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA7727D0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA772890)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA772830)

namespace RPG::Client
{
	inline static constexpr unsigned int VietNam18DialogContext_TypeDefinitionIndex = 59396;

	class VietNam18DialogContext : public ::RPG::Client::UIController
	{
	public:
		// static const ::System::Single _TimerSeconds; // 0x0
		::Class_1_23F67DD15593C8D6* _Timer; // 0x180

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void Show18(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SHOW18_OFFSET))(this, isShow);
		}

		::System::Void SetHide(::System::Boolean isHide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SETHIDE_OFFSET))(this, isHide);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnEnterGame(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONENTERGAME_OFFSET))(this, arg);
		}

		::System::Void _OnShow18InStartupPhase(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONSHOW18INSTARTUPPHASE_OFFSET))(this, arg);
		}

		::System::Void _OnClickHint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONCLICKHINT_OFFSET))(this);
		}

		::System::Void _OnTimeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTIMEUP_OFFSET))(this);
		}

		::Class_2_0FE616E64A04D650* get__View()
		{
			return ((::Class_2_0FE616E64A04D650*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT_GET__VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
		}
	};
}
