#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEHITBOXCONFIG_METHOD_2_4662BCFFDE95E7D9_OFFSET UNITYSDK_OFFSET(0x18E6E420)
#define RPG_GAMECORE_SINGLEHITBOXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18E6E5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleHitBoxConfig_TypeDefinitionIndex = 19340;

	class SingleHitBoxConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* HitBoxAttachPoint; // 0x10
		::System::String* SelectPointAttachPoint; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeHit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEHITBOXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_4662BCFFDE95E7D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SingleHitBoxConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SingleHitBoxConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEHITBOXCONFIG_METHOD_2_4662BCFFDE95E7D9_OFFSET))(a1, a2);
		}
	};
}
