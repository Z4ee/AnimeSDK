#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKUIMODE_METHOD_3_3E4FFFB40AB8F23F_OFFSET UNITYSDK_OFFSET(0x1CFA2820)
#define RPG_GAMECORE_CHECKUIMODE_METHOD_3_5A84BB224437F192_OFFSET UNITYSDK_OFFSET(0x1CFA27E0)
#define RPG_GAMECORE_CHECKUIMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA2810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckUIMode_TypeDefinitionIndex = 24082;

	class CheckUIMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMobile; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPC; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMobileOrPC; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnController; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKUIMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A84BB224437F192(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckUIMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckUIMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKUIMODE_METHOD_3_5A84BB224437F192_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E4FFFB40AB8F23F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckUIMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckUIMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKUIMODE_METHOD_3_3E4FFFB40AB8F23F_OFFSET))(a1, a2);
		}
	};
}
