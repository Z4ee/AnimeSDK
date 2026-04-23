#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_PROJECTILEONHITLIST_METHOD_2_1D51F1CB2BE6E251_OFFSET UNITYSDK_OFFSET(0x18C64610)
#define RPG_GAMECORE_PROJECTILEONHITLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x18C64790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ProjectileOnHitList_TypeDefinitionIndex = 21472;

	class ProjectileOnHitList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEONHITLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1D51F1CB2BE6E251(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ProjectileOnHitList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ProjectileOnHitList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROJECTILEONHITLIST_METHOD_2_1D51F1CB2BE6E251_OFFSET))(a1, a2);
		}
	};
}
