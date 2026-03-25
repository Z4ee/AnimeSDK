#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_RESETTARGETLISTINDEX_METHOD_3_3FC290995FF3DCA5_OFFSET UNITYSDK_OFFSET(0x1759F620)
#define RPG_GAMECORE_RESETTARGETLISTINDEX_METHOD_3_D9C4AFB56CE4CDD9_OFFSET UNITYSDK_OFFSET(0x1759F730)
#define RPG_GAMECORE_RESETTARGETLISTINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1759F700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ResetTargetListIndex_TypeDefinitionIndex = 20655;

	class ResetTargetListIndex : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTARGETLISTINDEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FC290995FF3DCA5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTargetListIndex*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTargetListIndex*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTARGETLISTINDEX_METHOD_3_3FC290995FF3DCA5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D9C4AFB56CE4CDD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ResetTargetListIndex* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ResetTargetListIndex*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESETTARGETLISTINDEX_METHOD_3_D9C4AFB56CE4CDD9_OFFSET))(a1, a2);
		}
	};
}
