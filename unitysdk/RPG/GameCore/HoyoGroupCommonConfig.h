#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HOYOGROUPCOMMONCONFIG_METHOD_2_45CD62CA47DF344B_OFFSET UNITYSDK_OFFSET(0x1D206AB0)
#define RPG_GAMECORE_HOYOGROUPCOMMONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D206B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HoyoGroupCommonConfig_TypeDefinitionIndex = 17414;

	class HoyoGroupCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsGroupRefreshAsync; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPCOMMONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_45CD62CA47DF344B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HoyoGroupCommonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HoyoGroupCommonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HOYOGROUPCOMMONCONFIG_METHOD_2_45CD62CA47DF344B_OFFSET))(a1, a2);
		}
	};
}
