#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_7196B4677E4B9452_OFFSET UNITYSDK_OFFSET(0x1C5D0860)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_80DC45303115E084_OFFSET UNITYSDK_OFFSET(0x1C5D08C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5CF960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierConfigBase_TypeDefinitionIndex = 18584;

	class GridFightModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7196B4677E4B9452(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_7196B4677E4B9452_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_80DC45303115E084(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCONFIGBASE_METHOD_2_80DC45303115E084_OFFSET))(a1, a2);
		}
	};
}
