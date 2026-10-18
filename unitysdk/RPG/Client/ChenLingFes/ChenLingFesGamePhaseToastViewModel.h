#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_D501FC103C8A2714;
namespace RPG::Client::Promises { class Promise; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xCA84990)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_FINISHCOMMAND_OFFSET UNITYSDK_OFFSET(0xCA84E60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCA84720)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_TOASTSTRING_OFFSET UNITYSDK_OFFSET(0xCA84760)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SETFINISHEDPROMISE_OFFSET UNITYSDK_OFFSET(0xCA84C20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_FINISHCOMMAND_OFFSET UNITYSDK_OFFSET(0xCA84E70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xCA84DF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_TOASTSTRING_OFFSET UNITYSDK_OFFSET(0xCA84B90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA84B60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xCA84C70)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__ONFINISH_OFFSET UNITYSDK_OFFSET(0xCA84D40)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGamePhaseToastViewModel_TypeDefinitionIndex = 81408;

	class ChenLingFesGamePhaseToastViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::Sofa::Core::SimpleCommand* _FinishCommand_k__BackingField; // 0x20
		::RPG::Client::Promises::Promise* _FinishPromise; // 0x28
		::System::String* _ToastString; // 0x30
		::Class_1_D501FC103C8A2714* _Messenger; // 0x38
		::System::Boolean _IsShow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* Create(::Class_1_D501FC103C8A2714* a1, ::System::String* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*(*)(::Class_1_D501FC103C8A2714*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetFinishedPromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SETFINISHEDPROMISE_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__INIT_OFFSET))(this);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__ONFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::String* get_ToastString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_TOASTSTRING_OFFSET))(this);
		}

		::System::Void set_ToastString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_TOASTSTRING_OFFSET))(this, a1);
		}

		::Sofa::Core::SimpleCommand* get_FinishCommand()
		{
			return ((::Sofa::Core::SimpleCommand*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_FINISHCOMMAND_OFFSET))(this);
		}

		::System::Void set_FinishCommand(::Sofa::Core::SimpleCommand* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::Core::SimpleCommand*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_FINISHCOMMAND_OFFSET))(this, a1);
		}
	};
}
