#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_CC1A88A29A8CBAB4_OFFSET UNITYSDK_OFFSET(0x19CE9CE0)
#define RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_DFDF0F8DF6354E74_OFFSET UNITYSDK_OFFSET(0x19CE9D70)
#define RPG_GAMECORE_SYNCSUBPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19CE9D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncSubPropState_TypeDefinitionIndex = 20904;

	class SyncSubPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC1A88A29A8CBAB4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncSubPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncSubPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_CC1A88A29A8CBAB4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_DFDF0F8DF6354E74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncSubPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCSUBPROPSTATE_METHOD_3_DFDF0F8DF6354E74_OFFSET))(a1, a2);
		}
	};
}
