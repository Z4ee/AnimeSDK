#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_612AF95655B871DD_OFFSET UNITYSDK_OFFSET(0x1736CA60)
#define RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_E7CC9913C40B98AF_OFFSET UNITYSDK_OFFSET(0x1736C9E0)
#define RPG_GAMECORE_LOCKUISKILLOPERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1736CA30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockUISkillOperation_TypeDefinitionIndex = 21854;

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

		static ::System::Void Method_3_E7CC9913C40B98AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockUISkillOperation*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockUISkillOperation*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_E7CC9913C40B98AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_612AF95655B871DD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LockUISkillOperation* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_METHOD_3_612AF95655B871DD_OFFSET))(a1, a2);
		}
	};
}
