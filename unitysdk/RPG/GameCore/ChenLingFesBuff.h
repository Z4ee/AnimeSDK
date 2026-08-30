#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesPropertyModifier; }

#define RPG_GAMECORE_CHENLINGFESBUFF_METHOD_2_4C48E304A81978F6_OFFSET UNITYSDK_OFFSET(0x1E014440)
#define RPG_GAMECORE_CHENLINGFESBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1E014660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesBuff_TypeDefinitionIndex = 18233;

	class ChenLingFesBuff : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Duration; // 0x10
		::System::Boolean RemoveOnDayEnd; // 0x14
		::System::Boolean RemoveWhenSourceItemMove; // 0x15
		::Il2CppArray<::RPG::GameCore::ChenLingFesPropertyModifier*>* PropertyModifiers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESBUFF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4C48E304A81978F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingFesBuff*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingFesBuff*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESBUFF_METHOD_2_4C48E304A81978F6_OFFSET))(a1, a2);
		}
	};
}
