#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETSTANCECOUNT_METHOD_3_43580D79BF55D774_OFFSET UNITYSDK_OFFSET(0x1E08E850)
#define RPG_GAMECORE_SETSTANCECOUNT_METHOD_3_8EC411CFD5C38281_OFFSET UNITYSDK_OFFSET(0x1E08E8A0)
#define RPG_GAMECORE_SETSTANCECOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E08E890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetStanceCount_TypeDefinitionIndex = 22430;

	class SetStanceCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::RPG::GameCore::DynamicFloat* AddCustomValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCECOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_43580D79BF55D774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStanceCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStanceCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCECOUNT_METHOD_3_43580D79BF55D774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EC411CFD5C38281(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetStanceCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetStanceCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSTANCECOUNT_METHOD_3_8EC411CFD5C38281_OFFSET))(a1, a2);
		}
	};
}
