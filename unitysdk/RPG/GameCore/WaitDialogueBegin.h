#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITDIALOGUEBEGIN_METHOD_3_5B63E07ADE96C14B_OFFSET UNITYSDK_OFFSET(0x1D6A0CC0)
#define RPG_GAMECORE_WAITDIALOGUEBEGIN_METHOD_3_9663DB9837CFFBD2_OFFSET UNITYSDK_OFFSET(0x1D6A0C70)
#define RPG_GAMECORE_WAITDIALOGUEBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueBegin_TypeDefinitionIndex = 19915;

	class WaitDialogueBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsOwnerEntity; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* BeginCallback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9663DB9837CFFBD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueBegin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueBegin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGIN_METHOD_3_9663DB9837CFFBD2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5B63E07ADE96C14B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitDialogueBegin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGIN_METHOD_3_5B63E07ADE96C14B_OFFSET))(a1, a2);
		}
	};
}
