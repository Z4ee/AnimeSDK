#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_4_F441CE80F00840D2;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRMISSLECONFIG_METHOD_2_CDAA2818B8BB73E8_OFFSET UNITYSDK_OFFSET(0x1B4CD7F0)
#define RPG_GAMECORE_PIXAIRMISSLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CDAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirMissleConfig_TypeDefinitionIndex = 20599;

	class PixAirMissleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* OnCollideEffectPath; // 0x18
		::RPG::GameCore::FixPoint ArrivalTime; // 0x20
		::Class_4_F441CE80F00840D2* OnHit; // 0x28
		::RPG::MVector3 NormalizedControlPoint; // 0x30
		::System::UInt32 MissleCount; // 0x3C
		::RPG::MVector3 LocalScale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRMISSLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CDAA2818B8BB73E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirMissleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirMissleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRMISSLECONFIG_METHOD_2_CDAA2818B8BB73E8_OFFSET))(a1, a2);
		}
	};
}
