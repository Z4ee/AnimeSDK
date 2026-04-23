#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_5D68C384ACDB2B19_OFFSET UNITYSDK_OFFSET(0x18997E10)
#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_B9F9E929A0771D37_OFFSET UNITYSDK_OFFSET(0x18997E90)
#define RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18997E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GlobalModifyInsertAbilityPriority_TypeDefinitionIndex = 21560;

	class GlobalModifyInsertAbilityPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PriorityKeyMapping; // 0x18
		::System::Boolean ResetToDefault; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D68C384ACDB2B19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_5D68C384ACDB2B19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B9F9E929A0771D37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GlobalModifyInsertAbilityPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GlobalModifyInsertAbilityPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GLOBALMODIFYINSERTABILITYPRIORITY_METHOD_3_B9F9E929A0771D37_OFFSET))(a1, a2);
		}
	};
}
