#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_METHOD_3_36225EF44F407C38_OFFSET UNITYSDK_OFFSET(0x19C84630)
#define RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_METHOD_3_7C8CDAF5425D3891_OFFSET UNITYSDK_OFFSET(0x19C845B0)
#define RPG_GAMECORE_SHOWTALKRECORDINGDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C84600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTalkRecordingDialog_TypeDefinitionIndex = 20715;

	class ShowTalkRecordingDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Show; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKRECORDINGDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7C8CDAF5425D3891(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTalkRecordingDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTalkRecordingDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_METHOD_3_7C8CDAF5425D3891_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_36225EF44F407C38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTalkRecordingDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTalkRecordingDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTALKRECORDINGDIALOG_METHOD_3_36225EF44F407C38_OFFSET))(a1, a2);
		}
	};
}
