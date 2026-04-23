#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_INSERTBATTLEPERFORM_METHOD_3_37A6BB0722176311_OFFSET UNITYSDK_OFFSET(0x18A1F1E0)
#define RPG_GAMECORE_INSERTBATTLEPERFORM_METHOD_3_90DFDB29D7A6A63F_OFFSET UNITYSDK_OFFSET(0x18A1F260)
#define RPG_GAMECORE_INSERTBATTLEPERFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1F230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertBattlePerform_TypeDefinitionIndex = 22340;

	class InsertBattlePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BattlePerformPath; // 0x18
		::System::Boolean ForbidShowMainPageOnEnd; // 0x20
		::System::Boolean ForbidFadeIn; // 0x21
		::System::Boolean ForbidPlayMissionTalk; // 0x22
		::System::Boolean ForbidShowUIPage; // 0x23
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformFinish; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INSERTBATTLEPERFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37A6BB0722176311(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InsertBattlePerform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InsertBattlePerform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INSERTBATTLEPERFORM_METHOD_3_37A6BB0722176311_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_90DFDB29D7A6A63F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::InsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::InsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INSERTBATTLEPERFORM_METHOD_3_90DFDB29D7A6A63F_OFFSET))(a1, a2);
		}
	};
}
