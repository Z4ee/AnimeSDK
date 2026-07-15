#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_METHOD_3_2CD2901163F22775_OFFSET UNITYSDK_OFFSET(0x1B72EE00)
#define RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_METHOD_3_CF9D03FFB74CCC30_OFFSET UNITYSDK_OFFSET(0x1B72EDB0)
#define RPG_GAMECORE_CHECKSKILLUSABILITYAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72EDF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillUsabilityAxis_TypeDefinitionIndex = 14897;

	class CheckSkillUsabilityAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::Int32 InitialCD; // 0x18
		::System::Int32 CD; // 0x1C
		::RPG::GameCore::FixPoint CheckScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLUSABILITYAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CF9D03FFB74CCC30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillUsabilityAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillUsabilityAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_METHOD_3_CF9D03FFB74CCC30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2CD2901163F22775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillUsabilityAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillUsabilityAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_METHOD_3_2CD2901163F22775_OFFSET))(a1, a2);
		}
	};
}
