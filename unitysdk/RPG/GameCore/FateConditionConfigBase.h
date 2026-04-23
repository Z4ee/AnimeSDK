#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_5_054DB0B656719538_OFFSET UNITYSDK_OFFSET(0x188D2460)
#define RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_5_9B3C6E721171A3D1_OFFSET UNITYSDK_OFFSET(0x188D2BA0)
#define RPG_GAMECORE_FATECONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x188D1C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateConditionConfigBase_TypeDefinitionIndex = 18285;

	class FateConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_054DB0B656719538(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_5_054DB0B656719538_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9B3C6E721171A3D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATECONDITIONCONFIGBASE_METHOD_5_9B3C6E721171A3D1_OFFSET))(a1, a2);
		}
	};
}
