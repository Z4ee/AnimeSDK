#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOATV2_METHOD_4_10E2416C2EE85552_OFFSET UNITYSDK_OFFSET(0x17008E80)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOATV2_METHOD_4_93187DA7BA964475_OFFSET UNITYSDK_OFFSET(0x17008DA0)
#define RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOATV2__CTOR_OFFSET UNITYSDK_OFFSET(0x17008E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareFloorCustomFloatV2_TypeDefinitionIndex = 19018;

	class ByCompareFloorCustomFloatV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOATV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_93187DA7BA964475(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOATV2_METHOD_4_93187DA7BA964475_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_10E2416C2EE85552(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareFloorCustomFloatV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareFloorCustomFloatV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREFLOORCUSTOMFLOATV2_METHOD_4_10E2416C2EE85552_OFFSET))(a1, a2);
		}
	};
}
