#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_2AA0CE649A4DB557_OFFSET UNITYSDK_OFFSET(0x19DF2070)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_8D8A7B4759EB9165_OFFSET UNITYSDK_OFFSET(0x19DF23B0)
#define RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF23A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildItemDynamicBindValue_TypeDefinitionIndex = 15453;

	class TrainPartyBuildItemDynamicBindValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_2AA0CE649A4DB557(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_2AA0CE649A4DB557_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_8D8A7B4759EB9165(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDITEMDYNAMICBINDVALUE_METHOD_2_8D8A7B4759EB9165_OFFSET))(a1, a2);
		}
	};
}
