#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TutorialGuideDirectionType.h"
#include "unitysdk/RPG/GameCore/TutorialGuideTalkListType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialGuideShowConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_METHOD_3_62E3EF2E5A997F80_OFFSET UNITYSDK_OFFSET(0x19C85820)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_METHOD_3_D3F09E27CF3F2B88_OFFSET UNITYSDK_OFFSET(0x19C858A0)
#define RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0x19C85870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowTutorialGuideTalkListDialog_TypeDefinitionIndex = 23018;

	class ShowTutorialGuideTalkListDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TutorialGuideTalkListType GuideTalkType; // 0x18
		::System::String* NodeID; // 0x20
		::Il2CppArray<::System::UInt32>* GuideTalkIDList; // 0x28
		::RPG::GameCore::TutorialGuideDirectionType CustomGuideDirection; // 0x30
		::RPG::GameCore::TutorialGuideShowConfig* GuideTalkShowConfig; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62E3EF2E5A997F80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_METHOD_3_62E3EF2E5A997F80_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D3F09E27CF3F2B88(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowTutorialGuideTalkListDialog* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowTutorialGuideTalkListDialog*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWTUTORIALGUIDETALKLISTDIALOG_METHOD_3_D3F09E27CF3F2B88_OFFSET))(a1, a2);
		}
	};
}
