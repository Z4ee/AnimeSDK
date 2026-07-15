#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

class Class_1_5F4D64A4B97E38F9;
namespace RPG::Client::Promises { class Promise; }
namespace Sofa::Core { class SimpleCommand; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x1B003830)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_FINISHCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B003D00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1B003660)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_GET_TOASTSTRING_OFFSET UNITYSDK_OFFSET(0x1B0036A0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SETFINISHEDPROMISE_OFFSET UNITYSDK_OFFSET(0x1B003AC0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_FINISHCOMMAND_OFFSET UNITYSDK_OFFSET(0x1B003D10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1B003C90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_SET_TOASTSTRING_OFFSET UNITYSDK_OFFSET(0x1B003A30)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B003A00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0x1B003B10)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__ONFINISH_OFFSET UNITYSDK_OFFSET(0x1B003BE0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGamePhaseToastViewModel_TypeDefinitionIndex = 76446;

	class ChenLingFesGamePhaseToastViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::Client::Promises::Promise* _FinishPromise; // 0x20
		::System::String* _ToastString; // 0x28
		::Class_1_5F4D64A4B97E38F9* _Messenger; // 0x30
		::Sofa::Core::SimpleCommand* _FinishCommand_k__BackingField; // 0x38
		::System::Boolean _IsShow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel* Create(::Class_1_5F4D64A4B97E38F9* a1, ::System::String* a2)
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGamePhaseToastViewModel*(*)(::Class_1_5F4D64A4B97E38F9*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPHASETOASTVIEWMODEL_CREATE_OFFSET))(a1, a2);
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
