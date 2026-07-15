#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_302F44137316EB53_OFFSET UNITYSDK_OFFSET(0x1BC363F0)
#define RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_A2C75C7E600F4790_OFFSET UNITYSDK_OFFSET(0x1BC36440)
#define RPG_GAMECORE_CONVINCEMOVEPREVTURN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC36430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConvinceMovePrevTurn_TypeDefinitionIndex = 21034;

	class ConvinceMovePrevTurn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForceToOption; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_302F44137316EB53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMovePrevTurn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMovePrevTurn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_302F44137316EB53_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A2C75C7E600F4790(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ConvinceMovePrevTurn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ConvinceMovePrevTurn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONVINCEMOVEPREVTURN_METHOD_3_A2C75C7E600F4790_OFFSET))(a1, a2);
		}
	};
}
