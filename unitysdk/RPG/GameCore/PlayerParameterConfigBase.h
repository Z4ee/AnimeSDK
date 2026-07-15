#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_2458B9A0DF7AC6A4_OFFSET UNITYSDK_OFFSET(0x1BA0CB30)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_779181EC892BA531_OFFSET UNITYSDK_OFFSET(0x1BA0CAD0)
#define RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA0CA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParameterConfigBase_TypeDefinitionIndex = 18810;

	class PlayerParameterConfigBase : public ::RPG::GameCore::MiParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_779181EC892BA531(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParameterConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParameterConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_779181EC892BA531_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2458B9A0DF7AC6A4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerParameterConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerParameterConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMETERCONFIGBASE_METHOD_4_2458B9A0DF7AC6A4_OFFSET))(a1, a2);
		}
	};
}
