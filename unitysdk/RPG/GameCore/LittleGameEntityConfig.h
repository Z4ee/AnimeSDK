#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LittleGameComponentConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEENTITYCONFIG_METHOD_2_7D8866CD234979B1_OFFSET UNITYSDK_OFFSET(0x18A6AB00)
#define RPG_GAMECORE_LITTLEGAMEENTITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18A6ACB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEntityConfig_TypeDefinitionIndex = 17898;

	class LittleGameEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameComponentConfig*>* Components; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::LittleGameEntityType Type; // 0x20
		::System::UInt32 EntityID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7D8866CD234979B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameEntityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameEntityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEENTITYCONFIG_METHOD_2_7D8866CD234979B1_OFFSET))(a1, a2);
		}
	};
}
