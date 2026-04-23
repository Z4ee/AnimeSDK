#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_5_8C0DDF8D4A3F0FA3_OFFSET UNITYSDK_OFFSET(0x1899DD70)
#define RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_5_DFE0497514CB1D5A_OFFSET UNITYSDK_OFFSET(0x1899F540)
#define RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1899CF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionConfigBase_TypeDefinitionIndex = 18331;

	class GridFightActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8C0DDF8D4A3F0FA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_5_8C0DDF8D4A3F0FA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_DFE0497514CB1D5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONCONFIGBASE_METHOD_5_DFE0497514CB1D5A_OFFSET))(a1, a2);
		}
	};
}
