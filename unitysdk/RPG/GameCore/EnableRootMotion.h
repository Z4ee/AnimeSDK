#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_03D7DE7F8B7557C8_OFFSET UNITYSDK_OFFSET(0x1D064200)
#define RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_929B8A2514A8BD9B_OFFSET UNITYSDK_OFFSET(0x1D064250)
#define RPG_GAMECORE_ENABLEROOTMOTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D064240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableRootMotion_TypeDefinitionIndex = 22155;

	class EnableRootMotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enabled; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_03D7DE7F8B7557C8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRootMotion*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRootMotion*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_03D7DE7F8B7557C8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_929B8A2514A8BD9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnableRootMotion* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnableRootMotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEROOTMOTION_METHOD_3_929B8A2514A8BD9B_OFFSET))(a1, a2);
		}
	};
}
