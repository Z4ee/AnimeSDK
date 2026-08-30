#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHECKHPPERCENTAXIS_METHOD_3_475EA0CEAF129533_OFFSET UNITYSDK_OFFSET(0x1CFA0D90)
#define RPG_GAMECORE_CHECKHPPERCENTAXIS_METHOD_3_930157C64FD65DE6_OFFSET UNITYSDK_OFFSET(0x1CFA0DD0)
#define RPG_GAMECORE_CHECKHPPERCENTAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA0DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckHPPercentAxis_TypeDefinitionIndex = 15332;

	class CheckHPPercentAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x10
		::RPG::GameCore::FixPoint TargetPercent; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKHPPERCENTAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_475EA0CEAF129533(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckHPPercentAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckHPPercentAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKHPPERCENTAXIS_METHOD_3_475EA0CEAF129533_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_930157C64FD65DE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckHPPercentAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckHPPercentAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKHPPERCENTAXIS_METHOD_3_930157C64FD65DE6_OFFSET))(a1, a2);
		}
	};
}
