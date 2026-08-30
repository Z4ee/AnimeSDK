#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHUFFLETARGETLIST_METHOD_3_15ECC69324E34FDB_OFFSET UNITYSDK_OFFSET(0x1D09EA10)
#define RPG_GAMECORE_SHUFFLETARGETLIST_METHOD_3_35308AC66824C4DE_OFFSET UNITYSDK_OFFSET(0x1D09E940)
#define RPG_GAMECORE_SHUFFLETARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09EA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShuffleTargetList_TypeDefinitionIndex = 22220;

	class ShuffleTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHUFFLETARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_35308AC66824C4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShuffleTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShuffleTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHUFFLETARGETLIST_METHOD_3_35308AC66824C4DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_15ECC69324E34FDB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShuffleTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShuffleTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHUFFLETARGETLIST_METHOD_3_15ECC69324E34FDB_OFFSET))(a1, a2);
		}
	};
}
