#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_METHOD_3_72E7DE47D4C24AB9_OFFSET UNITYSDK_OFFSET(0x178C6590)
#define RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_METHOD_3_BB28D394FFC6CFE6_OFFSET UNITYSDK_OFFSET(0x178C6610)
#define RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING__CTOR_OFFSET UNITYSDK_OFFSET(0x178C65E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectOnlyForLoading_TypeDefinitionIndex = 18555;

	class TriggerEffectOnlyForLoading : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPath; // 0x18
		::System::String* UniqueEffectName; // 0x20
		::System::Boolean SyncLoad; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72E7DE47D4C24AB9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectOnlyForLoading*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectOnlyForLoading*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_METHOD_3_72E7DE47D4C24AB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BB28D394FFC6CFE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEffectOnlyForLoading* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEffectOnlyForLoading*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTONLYFORLOADING_METHOD_3_BB28D394FFC6CFE6_OFFSET))(a1, a2);
		}
	};
}
