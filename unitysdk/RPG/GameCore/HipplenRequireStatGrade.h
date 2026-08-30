#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenStatGradeType.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENREQUIRESTATGRADE_METHOD_2_E0425783447AA390_OFFSET UNITYSDK_OFFSET(0x1D202890)
#define RPG_GAMECORE_HIPPLENREQUIRESTATGRADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2057A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenRequireStatGrade_TypeDefinitionIndex = 16611;

	class HipplenRequireStatGrade : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenStatType StateType; // 0x10
		::RPG::GameCore::HipplenStatGradeType RequireGrade; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIRESTATGRADE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E0425783447AA390(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenRequireStatGrade*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenRequireStatGrade*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIRESTATGRADE_METHOD_2_E0425783447AA390_OFFSET))(a1, a2);
		}
	};
}
