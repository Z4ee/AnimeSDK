#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenInteractWorkConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_METHOD_3_1C39CE2AD128FB0E_OFFSET UNITYSDK_OFFSET(0x1D3E16A0)
#define RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_METHOD_3_BEC33EF161559520_OFFSET UNITYSDK_OFFSET(0x1D3E1640)
#define RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E1690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenBallFetchInteractWorkConfig_TypeDefinitionIndex = 16609;

	class HipplenBallFetchInteractWorkConfig : public ::RPG::GameCore::HipplenInteractWorkConfig
	{
	public:
		::RPG::MVector2 LimitScreenAspectY; // 0x20
		::RPG::MVector2 MinVelocity; // 0x28
		::RPG::MVector2 MaxVelocity; // 0x30
		::System::Single NavigatePathLenthLimit; // 0x38
		::System::String* OnBallThrowEffectPath; // 0x40
		::System::String* OnBallThrowAudioEventName; // 0x48
		::System::String* OnBallThrowEffectAnchor; // 0x50
		::System::String* OnBallDestoryEffectPath; // 0x58
		::System::String* LegColliderName; // 0x60
		::System::Int32 MinBallCollisionTimes; // 0x68
		::System::Int32 MaxBallCollisionTimes; // 0x6C
		::System::Single MinCollisionForce; // 0x70
		::System::Single MaxCollisionForce; // 0x74
		::System::Single CoolDown; // 0x78
		::System::Single SwitchTracingBallInterval; // 0x7C
		::System::Single TurnSpeedIncrementPerSecond; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BEC33EF161559520(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_METHOD_3_BEC33EF161559520_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1C39CE2AD128FB0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenBallFetchInteractWorkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENBALLFETCHINTERACTWORKCONFIG_METHOD_3_1C39CE2AD128FB0E_OFFSET))(a1, a2);
		}
	};
}
