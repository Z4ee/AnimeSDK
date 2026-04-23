#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SYNCALLSUBPROPSTATE_METHOD_3_4FD7A01B25BF1B31_OFFSET UNITYSDK_OFFSET(0x18EC92F0)
#define RPG_GAMECORE_SYNCALLSUBPROPSTATE_METHOD_3_9F04B73A42B39FE1_OFFSET UNITYSDK_OFFSET(0x18EC9380)
#define RPG_GAMECORE_SYNCALLSUBPROPSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC9350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAllSubPropState_TypeDefinitionIndex = 20998;

	class SyncAllSubPropState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCALLSUBPROPSTATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4FD7A01B25BF1B31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncAllSubPropState*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncAllSubPropState*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCALLSUBPROPSTATE_METHOD_3_4FD7A01B25BF1B31_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9F04B73A42B39FE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SyncAllSubPropState* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SyncAllSubPropState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCALLSUBPROPSTATE_METHOD_3_9F04B73A42B39FE1_OFFSET))(a1, a2);
		}
	};
}
