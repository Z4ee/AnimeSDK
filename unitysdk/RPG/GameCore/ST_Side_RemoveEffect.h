#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_METHOD_4_AE7F32E01E3A637B_OFFSET UNITYSDK_OFFSET(0x1D4D30D0)
#define RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_METHOD_4_FDACF8AC30ED28DA_OFFSET UNITYSDK_OFFSET(0x1D4D3080)
#define RPG_GAMECORE_ST_SIDE_REMOVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D30C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_RemoveEffect_TypeDefinitionIndex = 19912;

	class ST_Side_RemoveEffect : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Boolean TriggerOnEnter; // 0x18
		::System::Boolean TriggerOnExit; // 0x19
		::System::String* EffectPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FDACF8AC30ED28DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RemoveEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RemoveEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_METHOD_4_FDACF8AC30ED28DA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_AE7F32E01E3A637B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_Side_RemoveEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_Side_RemoveEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_REMOVEEFFECT_METHOD_4_AE7F32E01E3A637B_OFFSET))(a1, a2);
		}
	};
}
