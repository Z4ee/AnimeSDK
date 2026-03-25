#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FormatString.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETUNIQUENAME_METHOD_3_C0262C5412C2F4B7_OFFSET UNITYSDK_OFFSET(0x176E3250)
#define RPG_GAMECORE_SETTARGETUNIQUENAME_METHOD_3_E7974EC4C0EA02B7_OFFSET UNITYSDK_OFFSET(0x176E3320)
#define RPG_GAMECORE_SETTARGETUNIQUENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x176E32D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetUniqueName_TypeDefinitionIndex = 21408;

	class SetTargetUniqueName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::FormatString UniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETUNIQUENAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C0262C5412C2F4B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetUniqueName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetUniqueName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETUNIQUENAME_METHOD_3_C0262C5412C2F4B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E7974EC4C0EA02B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETUNIQUENAME_METHOD_3_E7974EC4C0EA02B7_OFFSET))(a1, a2);
		}
	};
}
