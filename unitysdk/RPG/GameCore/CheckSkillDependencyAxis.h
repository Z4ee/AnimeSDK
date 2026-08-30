#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AISkillDependencyConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_0B226F08DEA992BF_OFFSET UNITYSDK_OFFSET(0x1E003FF0)
#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_D13E192B2084BE1A_OFFSET UNITYSDK_OFFSET(0x1E003FB0)
#define RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E003FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckSkillDependencyAxis_TypeDefinitionIndex = 15336;

	class CheckSkillDependencyAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::Il2CppArray<::RPG::GameCore::AISkillDependencyConfig*>* DependencyConfigList; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D13E192B2084BE1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillDependencyAxis*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillDependencyAxis*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_D13E192B2084BE1A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B226F08DEA992BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CheckSkillDependencyAxis* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CheckSkillDependencyAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLDEPENDENCYAXIS_METHOD_3_0B226F08DEA992BF_OFFSET))(a1, a2);
		}
	};
}
