#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICFLOAT_METHOD_4_086F9DBA54861C6D_OFFSET UNITYSDK_OFFSET(0x1700A070)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICFLOAT_METHOD_4_E906790AFC469F99_OFFSET UNITYSDK_OFFSET(0x17009F90)
#define RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1700A010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareGraphDynamicFloat_TypeDefinitionIndex = 19030;

	class ByCompareGraphDynamicFloat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::String* Name; // 0x20
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::RPG::GameCore::CompareType CompareType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICFLOAT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E906790AFC469F99(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicFloat*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICFLOAT_METHOD_4_E906790AFC469F99_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_086F9DBA54861C6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareGraphDynamicFloat* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareGraphDynamicFloat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREGRAPHDYNAMICFLOAT_METHOD_4_086F9DBA54861C6D_OFFSET))(a1, a2);
		}
	};
}
