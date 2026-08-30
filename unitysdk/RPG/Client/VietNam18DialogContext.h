#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

class Class_1_23F67DD15593C8D6;
class Class_2_0FE616E64A04D650;
namespace System { class Object; }

#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xE408210)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SETHIDE_OFFSET UNITYSDK_OFFSET(0xE408420)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SHOW18_OFFSET UNITYSDK_OFFSET(0xE4082A0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xE4085D0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xE407EF0)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xE407F90)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONCLICKHINT_OFFSET UNITYSDK_OFFSET(0xE408960)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONENTERGAME_OFFSET UNITYSDK_OFFSET(0xE408720)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONSHOW18INSTARTUPPHASE_OFFSET UNITYSDK_OFFSET(0xE408840)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xE408560)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTIMEUP_OFFSET UNITYSDK_OFFSET(0xE408B30)
#define RPG_CLIENT_VIETNAM18DIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xE4084F0)

namespace RPG::Client
{
	inline static constexpr unsigned int VietNam18DialogContext_TypeDefinitionIndex = 72416;

	class VietNam18DialogContext : public ::RPG::Client::UIController
	{
	public:
		// static const ::System::Single _TimerSeconds; // 0x0
		::Class_1_23F67DD15593C8D6* _Timer; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void Show18(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SHOW18_OFFSET))(this, a1);
		}

		::System::Void SetHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT_SETHIDE_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnEnterGame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONENTERGAME_OFFSET))(this, a1);
		}

		::System::Void _OnShow18InStartupPhase(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIETNAM18DIALOGCONTEXT__ONSHOW18INSTARTUPPHASE_OFFSET))(this, a1);
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
	};
}
