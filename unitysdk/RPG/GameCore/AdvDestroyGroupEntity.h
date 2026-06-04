#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVDESTROYGROUPENTITY_METHOD_3_6734656274AFE3CC_OFFSET UNITYSDK_OFFSET(0x19420050)
#define RPG_GAMECORE_ADVDESTROYGROUPENTITY_METHOD_3_FF5340F62945CD5D_OFFSET UNITYSDK_OFFSET(0x194200D0)
#define RPG_GAMECORE_ADVDESTROYGROUPENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x194200A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvDestroyGroupEntity_TypeDefinitionIndex = 19148;

	class AdvDestroyGroupEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* InstanceIDList; // 0x18
		::System::UInt32 GroupID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYGROUPENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6734656274AFE3CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDestroyGroupEntity*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDestroyGroupEntity*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYGROUPENTITY_METHOD_3_6734656274AFE3CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF5340F62945CD5D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvDestroyGroupEntity* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvDestroyGroupEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVDESTROYGROUPENTITY_METHOD_3_FF5340F62945CD5D_OFFSET))(a1, a2);
		}
	};
}
