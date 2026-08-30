#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_6CA6FBB7BBEC63C7_OFFSET UNITYSDK_OFFSET(0x1EE724F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_FD5829BFE436505B_OFFSET UNITYSDK_OFFSET(0x1EE72490)
#define RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE712E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParameterConfigBase_TypeDefinitionIndex = 19274;

	class GridFightParameterConfigBase : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_FD5829BFE436505B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_FD5829BFE436505B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_6CA6FBB7BBEC63C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMETERCONFIGBASE_METHOD_5_6CA6FBB7BBEC63C7_OFFSET))(a1, a2);
		}
	};
}
