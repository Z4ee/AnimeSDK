#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupEntityCreateConfig; }

#define RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_743C25E537CBD3CA_OFFSET UNITYSDK_OFFSET(0x1D6B3780)
#define RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_DA114CF636ECF23D_OFFSET UNITYSDK_OFFSET(0x1D6B37C0)
#define RPG_GAMECORE_ADVCREATEENTITYASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B37B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCreateEntityAsync_TypeDefinitionIndex = 20980;

	class AdvCreateEntityAsync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::GroupEntityCreateConfig*>* AdvancedSpawnList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_743C25E537CBD3CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateEntityAsync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateEntityAsync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_743C25E537CBD3CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DA114CF636ECF23D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvCreateEntityAsync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvCreateEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCREATEENTITYASYNC_METHOD_3_DA114CF636ECF23D_OFFSET))(a1, a2);
		}
	};
}
