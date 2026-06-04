#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_549B19F2B07C5344_OFFSET UNITYSDK_OFFSET(0x198ADB10)
#define RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_B07B663D17C7BFDD_OFFSET UNITYSDK_OFFSET(0x198ADA90)
#define RPG_GAMECORE_LOCKUISKILLOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x198ADAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockUISkillOperation_TypeDefinitionIndex = 22326;

	class LockUISkillOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsLock; // 0x20
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* ControlSkillTypes; // 0x28
		::RPG::Client::TextID Tip; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B07B663D17C7BFDD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockUISkillOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockUISkillOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_B07B663D17C7BFDD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_549B19F2B07C5344(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockUISkillOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_549B19F2B07C5344_OFFSET))(a1, a2);
		}
	};
}
