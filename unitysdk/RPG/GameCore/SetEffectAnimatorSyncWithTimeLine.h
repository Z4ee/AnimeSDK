#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_METHOD_3_5A37024B48BC3A3D_OFFSET UNITYSDK_OFFSET(0x1C5F54E0)
#define RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_METHOD_3_66F2252AAD13AEA0_OFFSET UNITYSDK_OFFSET(0x1C5F5520)
#define RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F5510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetEffectAnimatorSyncWithTimeLine_TypeDefinitionIndex = 21643;

	class SetEffectAnimatorSyncWithTimeLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::System::String* TimelineName; // 0x20
		::System::Single TrackTriggerNormalizedTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5A37024B48BC3A3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_METHOD_3_5A37024B48BC3A3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_66F2252AAD13AEA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetEffectAnimatorSyncWithTimeLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETEFFECTANIMATORSYNCWITHTIMELINE_METHOD_3_66F2252AAD13AEA0_OFFSET))(a1, a2);
		}
	};
}
