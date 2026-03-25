#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_A2C75C7E600F4790_OFFSET UNITYSDK_OFFSET(0x171375D0)
#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_AA04D7D8CAC94749_OFFSET UNITYSDK_OFFSET(0x17137550)
#define RPG_GAMECORE_CONVINCEMOVEPREVTURN__CTOR_OFFSET UNITYSDK_OFFSET(0x171375A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMovePrevTurn_TypeDefinitionIndex = 20008;

	class ConvinceMovePrevTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceToOption; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AA04D7D8CAC94749(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMovePrevTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMovePrevTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_AA04D7D8CAC94749_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2C75C7E600F4790(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMovePrevTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMovePrevTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_A2C75C7E600F4790_OFFSET))(a1, a2);
		}
	};
}
