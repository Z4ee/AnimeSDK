#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_B25E39200D1B3DA9_OFFSET UNITYSDK_OFFSET(0x1D1B99C0)
#define RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_BDFCD11B437F8F51_OFFSET UNITYSDK_OFFSET(0x1D1B9940)
#define RPG_GAMECORE_WAITPROPDESTROY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B9990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropDestroy_TypeDefinitionIndex = 20767;

	class WaitPropDestroy : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BDFCD11B437F8F51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropDestroy*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropDestroy*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_BDFCD11B437F8F51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B25E39200D1B3DA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropDestroy* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPDESTROY_METHOD_3_B25E39200D1B3DA9_OFFSET))(a1, a2);
		}
	};
}
