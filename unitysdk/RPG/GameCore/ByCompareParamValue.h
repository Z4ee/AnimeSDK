#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_103A45A504D4ED46_OFFSET UNITYSDK_OFFSET(0x17011A30)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_25EADCE4363C9E04_OFFSET UNITYSDK_OFFSET(0x17011950)
#define RPG_GAMECORE_BYCOMPAREPARAMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x170119D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareParamValue_TypeDefinitionIndex = 21765;

	class ByCompareParamValue : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::CompareType CompareType; // 0x20
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x28
		::System::Int32 ParamIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_25EADCE4363C9E04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_25EADCE4363C9E04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_103A45A504D4ED46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareParamValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareParamValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREPARAMVALUE_METHOD_4_103A45A504D4ED46_OFFSET))(a1, a2);
		}
	};
}
