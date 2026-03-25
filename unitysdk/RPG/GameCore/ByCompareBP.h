#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BPValueType.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREBP_METHOD_4_54D45E9FA7386D4C_OFFSET UNITYSDK_OFFSET(0x17002F90)
#define RPG_GAMECORE_BYCOMPAREBP_METHOD_4_EAE488BABB89F7AC_OFFSET UNITYSDK_OFFSET(0x17002EB0)
#define RPG_GAMECORE_BYCOMPAREBP__CTOR_OFFSET UNITYSDK_OFFSET(0x17002F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareBP_TypeDefinitionIndex = 21264;

	class ByCompareBP : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::RPG::GameCore::BPValueType ValueType; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_EAE488BABB89F7AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBP*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBP*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_METHOD_4_EAE488BABB89F7AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_54D45E9FA7386D4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareBP* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareBP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREBP_METHOD_4_54D45E9FA7386D4C_OFFSET))(a1, a2);
		}
	};
}
