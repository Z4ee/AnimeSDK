#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERCONFIRMDIALOG_METHOD_3_55A3946D286CAD7F_OFFSET UNITYSDK_OFFSET(0x190BF190)
#define RPG_GAMECORE_TRIGGERCONFIRMDIALOG_METHOD_3_A128247BC5B1628F_OFFSET UNITYSDK_OFFSET(0x190BF210)
#define RPG_GAMECORE_TRIGGERCONFIRMDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x190BF1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerConfirmDialog_TypeDefinitionIndex = 20415;

	class TriggerConfirmDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID TextMapID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x30
		::RPG::Client::TextID ConfirmTextMapID; // 0x38
		::RPG::Client::TextID CancelTextMapID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCONFIRMDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55A3946D286CAD7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerConfirmDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerConfirmDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCONFIRMDIALOG_METHOD_3_55A3946D286CAD7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A128247BC5B1628F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerConfirmDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerConfirmDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCONFIRMDIALOG_METHOD_3_A128247BC5B1628F_OFFSET))(a1, a2);
		}
	};
}
