#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_368DF7C41557FED5_OFFSET UNITYSDK_OFFSET(0x1C5BC5B0)
#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_9FF3B8B8B07C3E22_OFFSET UNITYSDK_OFFSET(0x1C5BC570)
#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalModifyInsertAbilityPriority_TypeDefinitionIndex = 21850;

	class GlobalModifyInsertAbilityPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PriorityKeyMapping; // 0x18
		::System::Boolean ResetToDefault; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9FF3B8B8B07C3E22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_9FF3B8B8B07C3E22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_368DF7C41557FED5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_368DF7C41557FED5_OFFSET))(a1, a2);
		}
	};
}
