#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicBool; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }

#define RPG_GAMECORE_SETFLOORCUSTOMBOOLV2_METHOD_3_5DC8ED7F7A9D7300_OFFSET UNITYSDK_OFFSET(0x1C5FA0E0)
#define RPG_GAMECORE_SETFLOORCUSTOMBOOLV2_METHOD_3_F87A057A4F4E42E5_OFFSET UNITYSDK_OFFSET(0x1C5FA0A0)
#define RPG_GAMECORE_SETFLOORCUSTOMBOOLV2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5FA0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFloorCustomBoolV2_TypeDefinitionIndex = 19913;

	class SetFloorCustomBoolV2 : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicBool* Value; // 0x20
		::System::Boolean UseExtraInfo; // 0x28
		::RPG::GameCore::SetFloorCustomValueExtraInfo* ExtraInfo; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOLV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F87A057A4F4E42E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomBoolV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOLV2_METHOD_3_F87A057A4F4E42E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5DC8ED7F7A9D7300(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFLOORCUSTOMBOOLV2_METHOD_3_5DC8ED7F7A9D7300_OFFSET))(a1, a2);
		}
	};
}
