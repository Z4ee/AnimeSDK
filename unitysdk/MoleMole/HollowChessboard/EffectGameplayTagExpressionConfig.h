#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_161;
namespace Foundation::Unreal { class SerializableGameplayTagQuery; }

#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET UNITYSDK_OFFSET(0x125CF2C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x125CF6C0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int EffectGameplayTagExpressionConfig_TypeDefinitionIndex = 63405;

	class EffectGameplayTagExpressionConfig : public ::System::Object
	{
	public:
		::Foundation::Unreal::SerializableGameplayTagQuery* CurGameplayTagQuery; // 0x10
		::Foundation::Unreal::SerializableGameplayTagQuery* PreGameplayTagQuery; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_161* CreateEffectExpressionConfig()
		{
			return ((::Class_0_16E4307DCC419505_161*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_EFFECTGAMEPLAYTAGEXPRESSIONCONFIG_CREATEEFFECTEXPRESSIONCONFIG_OFFSET))(this);
		}
	};
}
