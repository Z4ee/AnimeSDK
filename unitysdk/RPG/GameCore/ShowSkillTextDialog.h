#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SkillTextDialogType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWSKILLTEXTDIALOG_METHOD_3_3490FD8F4F485EE3_OFFSET UNITYSDK_OFFSET(0x18E677B0)
#define RPG_GAMECORE_SHOWSKILLTEXTDIALOG_METHOD_3_43C8363705D58512_OFFSET UNITYSDK_OFFSET(0x18E67830)
#define RPG_GAMECORE_SHOWSKILLTEXTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E67800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowSkillTextDialog_TypeDefinitionIndex = 21851;

	class ShowSkillTextDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::Client::TextID SkillName; // 0x18
		::System::Boolean IsDark; // 0x28
		::RPG::GameCore::SkillTextDialogType Type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLTEXTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3490FD8F4F485EE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSkillTextDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSkillTextDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLTEXTDIALOG_METHOD_3_3490FD8F4F485EE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_43C8363705D58512(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowSkillTextDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowSkillTextDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWSKILLTEXTDIALOG_METHOD_3_43C8363705D58512_OFFSET))(a1, a2);
		}
	};
}
