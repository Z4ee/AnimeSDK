#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_METHOD_3_587E59AF075FD745_OFFSET UNITYSDK_OFFSET(0x1D529770)
#define RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_METHOD_3_7D09F989BB65A33C_OFFSET UNITYSDK_OFFSET(0x1D5297B0)
#define RPG_GAMECORE_SHOWGUIDEDETAILDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5297A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowGuideDetailDialog_TypeDefinitionIndex = 24069;

	class ShowGuideDetailDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* GuideID; // 0x18
		::System::Int32 Type; // 0x20
		::System::Boolean WaitForExit; // 0x24
		::System::String* OverrideBtnTextmap; // 0x28
		::System::Boolean SkipIfAlreadySeen; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEDETAILDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_587E59AF075FD745(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideDetailDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideDetailDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_METHOD_3_587E59AF075FD745_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7D09F989BB65A33C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowGuideDetailDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowGuideDetailDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWGUIDEDETAILDIALOG_METHOD_3_7D09F989BB65A33C_OFFSET))(a1, a2);
		}
	};
}
