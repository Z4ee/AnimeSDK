#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_14CD5723381355B9_OFFSET UNITYSDK_OFFSET(0x1D525B90)
#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_847C122F50986458_OFFSET UNITYSDK_OFFSET(0x1D525BD0)
#define RPG_GAMECORE_SHOWDELETEMISSIONDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D525BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowDeleteMissionDialog_TypeDefinitionIndex = 21441;

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

		static ::System::Void Method_3_14CD5723381355B9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDeleteMissionDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDeleteMissionDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_14CD5723381355B9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_847C122F50986458(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowDeleteMissionDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowDeleteMissionDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWDELETEMISSIONDIALOG_METHOD_3_847C122F50986458_OFFSET))(a1, a2);
		}
	};
}
