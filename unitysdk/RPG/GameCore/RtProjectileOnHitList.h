#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_RTPROJECTILEONHITLIST_METHOD_2_92D13C95471BBDF4_OFFSET UNITYSDK_OFFSET(0x19BEF3E0)
#define RPG_GAMECORE_RTPROJECTILEONHITLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEF530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtProjectileOnHitList_TypeDefinitionIndex = 22818;

	class RtProjectileOnHitList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 RepeatCount; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEONHITLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_92D13C95471BBDF4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtProjectileOnHitList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtProjectileOnHitList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTPROJECTILEONHITLIST_METHOD_2_92D13C95471BBDF4_OFFSET))(a1, a2);
		}
	};
}
