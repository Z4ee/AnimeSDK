#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_METHOD_3_77487DB31669C094_OFFSET UNITYSDK_OFFSET(0x1C2D9B30)
#define RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_METHOD_3_CC001798B3A07D62_OFFSET UNITYSDK_OFFSET(0x1C2D9A90)
#define RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D9AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCharacterVisibleInViewMode_TypeDefinitionIndex = 22358;

	class SetCharacterVisibleInViewMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsVisibleInViewMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CC001798B3A07D62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterVisibleInViewMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterVisibleInViewMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_METHOD_3_CC001798B3A07D62_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77487DB31669C094(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCharacterVisibleInViewMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCharacterVisibleInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCHARACTERVISIBLEINVIEWMODE_METHOD_3_77487DB31669C094_OFFSET))(a1, a2);
		}
	};
}
