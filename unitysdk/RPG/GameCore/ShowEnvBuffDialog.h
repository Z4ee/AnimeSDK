#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWENVBUFFDIALOG_METHOD_3_14794C09B2AB4673_OFFSET UNITYSDK_OFFSET(0x19C791D0)
#define RPG_GAMECORE_SHOWENVBUFFDIALOG_METHOD_3_7997A23D7DE1D38A_OFFSET UNITYSDK_OFFSET(0x19C79250)
#define RPG_GAMECORE_SHOWENVBUFFDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C79220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowEnvBuffDialog_TypeDefinitionIndex = 19333;

	class ShowEnvBuffDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RaidID; // 0x18
		::System::UInt32 WorldLv; // 0x1C
		::System::Boolean IsAutoGetParam; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENVBUFFDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_14794C09B2AB4673(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEnvBuffDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEnvBuffDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENVBUFFDIALOG_METHOD_3_14794C09B2AB4673_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7997A23D7DE1D38A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowEnvBuffDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowEnvBuffDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWENVBUFFDIALOG_METHOD_3_7997A23D7DE1D38A_OFFSET))(a1, a2);
		}
	};
}
