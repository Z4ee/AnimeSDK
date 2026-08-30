#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_RESMANAGERCONFIRMDIALOGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1797FDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ResManagerConfirmDialogData_TypeDefinitionIndex = 72650;

	class ResManagerConfirmDialogData : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* Callback; // 0x10
		::RPG::Client::TextID OKBtnLabel; // 0x18
		::System::Int64 DetailSize; // 0x28
		::RPG::Client::TextID Detail; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::RPG::Client::TextID CancelBtnLabel; // 0x50
		::RPG::Client::TextID Title; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RESMANAGERCONFIRMDIALOGDATA__CTOR_OFFSET))(this);
		}
	};
}
