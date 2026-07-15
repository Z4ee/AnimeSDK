#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_METHOD_3_07B225CE2455B386_OFFSET UNITYSDK_OFFSET(0x1B722C20)
#define RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_METHOD_3_EB641690619602D0_OFFSET UNITYSDK_OFFSET(0x1B722CC0)
#define RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B722C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterEnableEmptyModel_TypeDefinitionIndex = 22372;

	class CharacterEnableEmptyModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07B225CE2455B386(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEnableEmptyModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEnableEmptyModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_METHOD_3_07B225CE2455B386_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EB641690619602D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterEnableEmptyModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterEnableEmptyModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENABLEEMPTYMODEL_METHOD_3_EB641690619602D0_OFFSET))(a1, a2);
		}
	};
}
