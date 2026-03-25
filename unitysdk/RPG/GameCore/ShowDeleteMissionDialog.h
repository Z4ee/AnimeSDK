#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_9CD7BD7A03A88CF2_OFFSET UNITYSDK_OFFSET(0x176F8340)
#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_D1ACDE9F4DA5C3CD_OFFSET UNITYSDK_OFFSET(0x176F82C0)
#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x176F8310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowDeleteMissionDialog_TypeDefinitionIndex = 19853;

	class ShowDeleteMissionDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAllCompleted; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnConfirm; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D1ACDE9F4DA5C3CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDeleteMissionDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDeleteMissionDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_D1ACDE9F4DA5C3CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9CD7BD7A03A88CF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_9CD7BD7A03A88CF2_OFFSET))(a1, a2);
		}
	};
}
