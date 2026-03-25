#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLBPAXIS_METHOD_3_6B5C712AAD937302_OFFSET UNITYSDK_OFFSET(0x170763B0)
#define RPG_GAMECORE_CHECKSKILLBPAXIS_METHOD_3_D635DAF99E7F1675_OFFSET UNITYSDK_OFFSET(0x17076370)
#define RPG_GAMECORE_CHECKSKILLBPAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x170763A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillBPAxis_TypeDefinitionIndex = 14204;

	class CheckSkillBPAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::RPG::GameCore::FixPoint CheckScore; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLBPAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D635DAF99E7F1675(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillBPAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillBPAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLBPAXIS_METHOD_3_D635DAF99E7F1675_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6B5C712AAD937302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillBPAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillBPAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLBPAXIS_METHOD_3_6B5C712AAD937302_OFFSET))(a1, a2);
		}
	};
}
