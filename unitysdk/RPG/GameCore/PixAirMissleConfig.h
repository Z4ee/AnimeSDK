#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_4_60B6F76306618700;
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRMISSLECONFIG_METHOD_2_AE2B161AE32FD736_OFFSET UNITYSDK_OFFSET(0x19A136E0)
#define RPG_GAMECORE_PIXAIRMISSLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A13A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirMissleConfig_TypeDefinitionIndex = 20225;

	class PixAirMissleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* OnCollideEffectPath; // 0x18
		::RPG::GameCore::FixPoint ArrivalTime; // 0x20
		::Class_4_60B6F76306618700* OnHit; // 0x28
		::RPG::MVector3 NormalizedControlPoint; // 0x30
		::System::UInt32 MissleCount; // 0x3C
		::RPG::MVector3 LocalScale; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRMISSLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_AE2B161AE32FD736(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PixAirMissleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PixAirMissleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRMISSLECONFIG_METHOD_2_AE2B161AE32FD736_OFFSET))(a1, a2);
		}
	};
}
