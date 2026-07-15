#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_METHOD_3_225DA68250E8CFB6_OFFSET UNITYSDK_OFFSET(0x1BB41290)
#define RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_METHOD_3_935470EBFC1A2E75_OFFSET UNITYSDK_OFFSET(0x1BB412E0)
#define RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB412D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnablePlayerPlayIdleShow_TypeDefinitionIndex = 21437;

	class EnablePlayerPlayIdleShow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_225DA68250E8CFB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnablePlayerPlayIdleShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_METHOD_3_225DA68250E8CFB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_935470EBFC1A2E75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnablePlayerPlayIdleShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnablePlayerPlayIdleShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEPLAYERPLAYIDLESHOW_METHOD_3_935470EBFC1A2E75_OFFSET))(a1, a2);
		}
	};
}
