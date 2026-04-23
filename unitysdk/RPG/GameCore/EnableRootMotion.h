#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_929B8A2514A8BD9B_OFFSET UNITYSDK_OFFSET(0x188A7620)
#define RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_EF5D74E097616932_OFFSET UNITYSDK_OFFSET(0x188A75A0)
#define RPG_GAMECORE_ENABLEROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x188A75F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRootMotion_TypeDefinitionIndex = 21284;

	class EnableRootMotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EF5D74E097616932(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRootMotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRootMotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_EF5D74E097616932_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_929B8A2514A8BD9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRootMotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRootMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_929B8A2514A8BD9B_OFFSET))(a1, a2);
		}
	};
}
