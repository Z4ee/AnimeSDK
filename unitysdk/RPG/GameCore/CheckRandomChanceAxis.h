#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_METHOD_3_5667720635ABA7B1_OFFSET UNITYSDK_OFFSET(0x1E003C50)
#define RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_METHOD_3_E04EEB7C581FA874_OFFSET UNITYSDK_OFFSET(0x1E003C10)
#define RPG_GAMECORE_CHECKRANDOMCHANCEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E003C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckRandomChanceAxis_TypeDefinitionIndex = 15339;

	class CheckRandomChanceAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::FixPoint Chance; // 0x10
		::RPG::GameCore::FixPoint SuccessScore; // 0x18
		::RPG::GameCore::FixPoint FailScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKRANDOMCHANCEAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E04EEB7C581FA874(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckRandomChanceAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckRandomChanceAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_METHOD_3_E04EEB7C581FA874_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5667720635ABA7B1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckRandomChanceAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckRandomChanceAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_METHOD_3_5667720635ABA7B1_OFFSET))(a1, a2);
		}
	};
}
