#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STATETREESTATEBASECONFIG_METHOD_2_303214653F6D0731_OFFSET UNITYSDK_OFFSET(0x17777690)
#define RPG_GAMECORE_STATETREESTATEBASECONFIG_METHOD_2_B802D3F6E31D64C9_OFFSET UNITYSDK_OFFSET(0x17777D10)
#define RPG_GAMECORE_STATETREESTATEBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17777340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreeStateBaseConfig_TypeDefinitionIndex = 14191;

	class StateTreeStateBaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATEBASECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_303214653F6D0731(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeStateBaseConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeStateBaseConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATEBASECONFIG_METHOD_2_303214653F6D0731_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_B802D3F6E31D64C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StateTreeStateBaseConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StateTreeStateBaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESTATEBASECONFIG_METHOD_2_B802D3F6E31D64C9_OFFSET))(a1, a2);
		}
	};
}
