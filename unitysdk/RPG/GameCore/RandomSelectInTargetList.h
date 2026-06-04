#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RANDOMSELECTINTARGETLIST_METHOD_3_154D38ECC8163566_OFFSET UNITYSDK_OFFSET(0x19AAF4E0)
#define RPG_GAMECORE_RANDOMSELECTINTARGETLIST_METHOD_3_25AA08CC24E7811A_OFFSET UNITYSDK_OFFSET(0x19AAF3D0)
#define RPG_GAMECORE_RANDOMSELECTINTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19AAF4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectInTargetList_TypeDefinitionIndex = 21245;

	class RandomSelectInTargetList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTINTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_25AA08CC24E7811A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectInTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectInTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTINTARGETLIST_METHOD_3_25AA08CC24E7811A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_154D38ECC8163566(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RandomSelectInTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RandomSelectInTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTINTARGETLIST_METHOD_3_154D38ECC8163566_OFFSET))(a1, a2);
		}
	};
}
