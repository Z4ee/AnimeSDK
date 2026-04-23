#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_3AA903D156F462CC_OFFSET UNITYSDK_OFFSET(0x18CB9420)
#define RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_D2C7DF650B8A4C5D_OFFSET UNITYSDK_OFFSET(0x18CB94A0)
#define RPG_GAMECORE_RETURNTOLOGINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CB9470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReturnToLoginPage_TypeDefinitionIndex = 20065;

	class ReturnToLoginPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* WaitTalkMissionKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETURNTOLOGINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3AA903D156F462CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReturnToLoginPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReturnToLoginPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_3AA903D156F462CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D2C7DF650B8A4C5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReturnToLoginPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReturnToLoginPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RETURNTOLOGINPAGE_METHOD_3_D2C7DF650B8A4C5D_OFFSET))(a1, a2);
		}
	};
}
