#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_9ECF044381B5A51D_OFFSET UNITYSDK_OFFSET(0x17014CE0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_D1C6D581165370B7_OFFSET UNITYSDK_OFFSET(0x17014DB0)
#define RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x17014D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueDiceRotateImmediately_TypeDefinitionIndex = 20468;

	class ByCompareRogueDiceRotateImmediately : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9ECF044381B5A51D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_9ECF044381B5A51D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D1C6D581165370B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareRogueDiceRotateImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEDICEROTATEIMMEDIATELY_METHOD_4_D1C6D581165370B7_OFFSET))(a1, a2);
		}
	};
}
