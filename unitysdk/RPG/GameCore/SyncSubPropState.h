#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_DFDF0F8DF6354E74_OFFSET UNITYSDK_OFFSET(0x1B444780)
#define RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_FE8B72F261F59EF8_OFFSET UNITYSDK_OFFSET(0x1B444730)
#define RPG_GAMECORE_SYNCSUBPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B444770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncSubPropState_TypeDefinitionIndex = 21319;

	class SyncSubPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FE8B72F261F59EF8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncSubPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncSubPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_FE8B72F261F59EF8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFDF0F8DF6354E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncSubPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_DFDF0F8DF6354E74_OFFSET))(a1, a2);
		}
	};
}
