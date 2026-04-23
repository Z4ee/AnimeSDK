#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_DDB3E6CC80F7BEE5_OFFSET UNITYSDK_OFFSET(0x18E65800)
#define RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_EB91225D7B4D19A3_OFFSET UNITYSDK_OFFSET(0x18E65880)
#define RPG_GAMECORE_SHOWROGUEFORMALUAUI__CTOR_OFFSET UNITYSDK_OFFSET(0x18E65850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowRogueFormaluaUI_TypeDefinitionIndex = 19790;

	class ShowRogueFormaluaUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* FormaluaIDList; // 0x18
		::System::Boolean ShowGetOrDetail; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DDB3E6CC80F7BEE5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueFormaluaUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueFormaluaUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_DDB3E6CC80F7BEE5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB91225D7B4D19A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowRogueFormaluaUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowRogueFormaluaUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWROGUEFORMALUAUI_METHOD_3_EB91225D7B4D19A3_OFFSET))(a1, a2);
		}
	};
}
