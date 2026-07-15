#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupEntityDestroyConfig; }

#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_1431FB431909C517_OFFSET UNITYSDK_OFFSET(0x1BE18AB0)
#define RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_C39B17E5C559415A_OFFSET UNITYSDK_OFFSET(0x1BE18A70)
#define RPG_GAMECORE_ADVDESTROYENTITYASYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE18AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDestroyEntityAsync_TypeDefinitionIndex = 20430;

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

		static ::System::Void Method_3_C39B17E5C559415A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDestroyEntityAsync*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDestroyEntityAsync*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_C39B17E5C559415A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1431FB431909C517(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDestroyEntityAsync* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDestroyEntityAsync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYENTITYASYNC_METHOD_3_1431FB431909C517_OFFSET))(a1, a2);
		}
	};
}
