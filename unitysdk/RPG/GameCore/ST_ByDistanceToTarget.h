#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/ST_TargetPointType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_1CCEE9D74F80E571_OFFSET UNITYSDK_OFFSET(0x18DEC9A0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_A9F5D2766C667E10_OFFSET UNITYSDK_OFFSET(0x18DEC8D0)
#define RPG_GAMECORE_ST_BYDISTANCETOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x18DEC950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByDistanceToTarget_TypeDefinitionIndex = 19004;

	class ST_ByDistanceToTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::ST_TargetPointType TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x24
		::System::Boolean UseVariable; // 0x28
		::System::String* VariableName; // 0x30
		::System::Single CompareValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_A9F5D2766C667E10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistanceToTarget*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistanceToTarget*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_A9F5D2766C667E10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1CCEE9D74F80E571(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ST_ByDistanceToTarget* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ST_ByDistanceToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYDISTANCETOTARGET_METHOD_4_1CCEE9D74F80E571_OFFSET))(a1, a2);
		}
	};
}
