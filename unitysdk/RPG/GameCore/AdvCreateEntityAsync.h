#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupEntityCreateConfig; }

#define RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_3E7AC06319369B81_OFFSET UNITYSDK_OFFSET(0x1864BE60)
#define RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_D669BF51E37E67FF_OFFSET UNITYSDK_OFFSET(0x1864BEE0)
#define RPG_GAMECORE_ADVCREATEENTITYASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1864BEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateEntityAsync_TypeDefinitionIndex = 20200;

	class AdvCreateEntityAsync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::GroupEntityCreateConfig*>* AdvancedSpawnList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E7AC06319369B81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateEntityAsync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateEntityAsync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_3E7AC06319369B81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D669BF51E37E67FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_D669BF51E37E67FF_OFFSET))(a1, a2);
		}
	};
}
