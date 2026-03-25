#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWHALFSCREENPAGE_METHOD_3_9D873A6C7F077391_OFFSET UNITYSDK_OFFSET(0x176FE940)
#define RPG_GAMECORE_SHOWHALFSCREENPAGE_METHOD_3_D429D2104786A550_OFFSET UNITYSDK_OFFSET(0x176FE8C0)
#define RPG_GAMECORE_SHOWHALFSCREENPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176FE910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowHalfScreenPage_TypeDefinitionIndex = 18766;

	class ShowHalfScreenPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::RPG::GameCore::DynamicString* Param; // 0x20
		::System::Boolean ShowByCustomTask; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* CustomShowUI; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIShow; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnReset; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExit; // 0x48
		::System::Boolean EndDialogueOnUIExit; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHALFSCREENPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D429D2104786A550(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHalfScreenPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHalfScreenPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHALFSCREENPAGE_METHOD_3_D429D2104786A550_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D873A6C7F077391(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowHalfScreenPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowHalfScreenPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWHALFSCREENPAGE_METHOD_3_9D873A6C7F077391_OFFSET))(a1, a2);
		}
	};
}
