#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_295E1E09D0427FCE_OFFSET UNITYSDK_OFFSET(0x1D532D10)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_8D8A7B4759EB9165_OFFSET UNITYSDK_OFFSET(0x1D533080)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_TypeDefinitionIndex = 16093;

	class TrainPartyBuildItemDynamicBindValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_295E1E09D0427FCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_295E1E09D0427FCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_8D8A7B4759EB9165(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_8D8A7B4759EB9165_OFFSET))(a1, a2);
		}
	};
}
