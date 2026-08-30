#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_5_7475CB6159A86560_OFFSET UNITYSDK_OFFSET(0x1D963190)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_5_D7E23F6DEED95B39_OFFSET UNITYSDK_OFFSET(0x1D963500)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D962D60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConditionConfigBase_TypeDefinitionIndex = 19095;

	class GridFightConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_7475CB6159A86560(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_5_7475CB6159A86560_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D7E23F6DEED95B39(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_METHOD_5_D7E23F6DEED95B39_OFFSET))(a1, a2);
		}
	};
}
