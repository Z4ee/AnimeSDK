#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupEntityDestroyConfig; }

#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_C43FDD1E76D9C8E4_OFFSET UNITYSDK_OFFSET(0x16F2A400)
#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_DB0901F4A07E8615_OFFSET UNITYSDK_OFFSET(0x16F2A480)
#define RPG_GAMECORE_ADVDESTROYENTITYASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2A450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDestroyEntityAsync_TypeDefinitionIndex = 19527;

	class AdvDestroyEntityAsync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean NeedDisappear; // 0x18
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x20
		::Il2CppArray<::RPG::GameCore::GroupEntityDestroyConfig*>* AdvancedSpawnList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C43FDD1E76D9C8E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDestroyEntityAsync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDestroyEntityAsync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_C43FDD1E76D9C8E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DB0901F4A07E8615(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDestroyEntityAsync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDestroyEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_DB0901F4A07E8615_OFFSET))(a1, a2);
		}
	};
}
