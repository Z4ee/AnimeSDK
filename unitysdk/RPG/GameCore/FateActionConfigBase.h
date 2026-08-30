#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_5_2E1FEF72D589D632_OFFSET UNITYSDK_OFFSET(0x1D08C4B0)
#define RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_5_84FBF189411E3ABB_OFFSET UNITYSDK_OFFSET(0x1D08BFE0)
#define RPG_GAMECORE_FATEACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActionConfigBase_TypeDefinitionIndex = 18992;

	class FateActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_84FBF189411E3ABB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_5_84FBF189411E3ABB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_2E1FEF72D589D632(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_METHOD_5_2E1FEF72D589D632_OFFSET))(a1, a2);
		}
	};
}
